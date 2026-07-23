/*
 * XREFs of sub_1403A68B0 @ 0x1403A68B0
 * Callers:
 *     sub_140810990 @ 0x140810990 (sub_140810990.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403A693C @ 0x1403A693C (sub_1403A693C.c)
 *     RtlSetSystemBootStatus @ 0x1407EDAF0 (RtlSetSystemBootStatus.c)
 *     sub_140A53260 @ 0x140A53260 (sub_140A53260.c)
 */

__int64 __fastcall sub_1403A68B0(unsigned int a1, void *a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  RTL_BSD_ITEM_TYPE v5; // ecx
  NTSTATUS v6; // edi
  unsigned int v7; // eax
  LARGE_INTEGER v9; // [rsp+40h] [rbp+18h] BYREF
  LARGE_INTEGER v10; // [rsp+48h] [rbp+20h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = RtlBsdPowerTransition;
  v10 = PerformanceCounter;
  if ( a1 == 7 )
  {
LABEL_2:
    v6 = RtlSetSystemBootStatus(v5, a2, 0x20u, 0LL);
    goto LABEL_3;
  }
  if ( a1 != 14 )
  {
    v5 = RtlBsdPowerTransitionExtension;
    if ( a1 != 16 )
    {
      v6 = -1073741811;
      goto LABEL_3;
    }
    goto LABEL_2;
  }
  v6 = RtlSetSystemBootStatus(RtlBsdItemPowerButtonPressInfo, a2, 0x40u, 0LL);
  if ( v6 < 0 )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C24600);
    if ( HIWORD(xmmword_140C5ACE0) != 0xFFFF )
      ++HIWORD(xmmword_140C5ACE0);
    sub_1402935D0((ULONG_PTR)&qword_140C24600);
  }
LABEL_3:
  v9 = KeQueryPerformanceCounter(0LL);
  v7 = sub_140A53260(&v10, &v9);
  return sub_1403A693C(a1, v7, (unsigned int)v6);
}
