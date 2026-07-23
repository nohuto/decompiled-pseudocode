/*
 * XREFs of sub_14023B798 @ 0x14023B798
 * Callers:
 *     sub_14023B5A0 @ 0x14023B5A0 (sub_14023B5A0.c)
 *     sub_140343B00 @ 0x140343B00 (sub_140343B00.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14023B8E8 @ 0x14023B8E8 (sub_14023B8E8.c)
 *     sub_14023BB5C @ 0x14023BB5C (sub_14023BB5C.c)
 *     sub_14023BC48 @ 0x14023BC48 (sub_14023BC48.c)
 *     sub_14023BC68 @ 0x14023BC68 (sub_14023BC68.c)
 *     sub_140293988 @ 0x140293988 (sub_140293988.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403072A0 @ 0x1403072A0 (sub_1403072A0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C75D0 @ 0x1405C75D0 (sub_1405C75D0.c)
 */

char __fastcall sub_14023B798(__int64 a1, char a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rsi
  char v6; // bl
  char v7; // r15
  __int64 v8; // rcx
  bool v9; // bp
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // r14
  KSPIN_LOCK *v14; // r13
  char v15; // bl
  int v17; // r8d
  __int64 v18; // r14
  __int64 v19; // rdx
  __int16 v20; // [rsp+60h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 33976);
  v3 = a1 + 33968;
  v4 = *(_QWORD *)(a1 + 33968);
  v6 = a2;
  v7 = 1;
  v8 = *(_QWORD *)(v4 + 16);
  v9 = v3 == v8 || *(_BYTE *)(v4 + 486);
  if ( *(_BYTE *)(v4 + 481) != 0xFD && a2 )
    v9 = 1;
  if ( (struct _KPRCB *)a1 != KeGetCurrentPrcb() && (v3 == v8 || v9 && *(_BYTE *)(v4 + 483)) )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( KeGetCurrentPrcb() == (struct _KPRCB *)a1 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))sub_140293988)(a1, (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
  else
  {
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD))sub_1405C75D0)(a1, (LARGE_INTEGER)PerformanceCounter.QuadPart);
    if ( !v18 )
      return 0;
    LOBYTE(v17) = 1;
    v15 = sub_1403072A0(a1, 0, v17, 0, 0LL);
    if ( !v15 )
      return v15;
    if ( v18 != sub_1405C75D0(a1, v19) )
      return 0;
    v6 = a2;
  }
  if ( *(_BYTE *)(v2 + 125) )
  {
    _disable();
    v14 = (KSPIN_LOCK *)(v2 + 128);
    v13 = (v20 & 0x200) != 0;
    KeAcquireSpinLockAtDpcLevel(v14);
  }
  else
  {
    v7 = 0;
    v13 = 0;
    v14 = (KSPIN_LOCK *)(v2 + 128);
  }
  LOBYTE(v12) = v6;
  LOBYTE(v11) = v9;
  v15 = sub_14023B8E8(a1, v11, v12);
  if ( v7 )
  {
    KeReleaseSpinLockFromDpcLevel(v14);
    if ( v13 )
      _enable();
  }
  if ( v15 )
  {
    if ( v3 == *(_QWORD *)(v4 + 16) && *(_QWORD *)(v4 + 400) )
      sub_14042A5E0(*(_QWORD *)(v4 + 288), v4 + 736);
    if ( !a2 )
    {
      sub_14023BC68(a1);
      sub_14023BC48(a1 + 33600);
      sub_14023BB5C(v3);
    }
  }
  return v15;
}
