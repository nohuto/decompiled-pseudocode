/*
 * XREFs of sub_140A5AAF0 @ 0x140A5AAF0
 * Callers:
 *     sub_140908680 @ 0x140908680 (sub_140908680.c)
 *     sub_140A5AA64 @ 0x140A5AA64 (sub_140A5AA64.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403D2750 @ 0x1403D2750 (sub_1403D2750.c)
 *     sub_1403D2888 @ 0x1403D2888 (sub_1403D2888.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A53718 @ 0x140A53718 (sub_140A53718.c)
 */

void __fastcall sub_140A5AAF0(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  ULONG v3; // ebp
  ULONG ActiveProcessorCount; // r15d
  unsigned int *v5; // r14
  unsigned int v6; // ecx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rsi
  __int64 v9; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  sub_1403D2888();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v5 = dword_140D0E5E0;
    do
    {
      v6 = *v5;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v6 >> 6);
      Affinity.Mask = 1LL << (v6 & 0x3F);
      if ( v3 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
      {
        v9 = *(_QWORD *)(i + 172);
        *(LARGE_INTEGER *)(i + 112) = PerformanceCounter;
        sub_1403D2750(a1, v9);
        sub_140A53718(a1, v9);
      }
      ++v3;
      ++v5;
    }
    while ( v3 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
