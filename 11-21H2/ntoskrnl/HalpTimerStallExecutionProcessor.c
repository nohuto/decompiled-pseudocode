/*
 * XREFs of HalpTimerStallExecutionProcessor @ 0x1403BC8C4
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x1403BBEC4 (HalpTimerMeasureFrequencies.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpTimerStallExecutionProcessor(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  char v4; // bp
  __int64 InternalData; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // edi
  unsigned __int64 v15; // rcx
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // r15
  unsigned int i; // ecx
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // edx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-50h] BYREF
  int v25; // [rsp+80h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 224);
  v4 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (v3 & 1) != 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) >= 2
    && KeGetCurrentIrql() < 2u
    && (v25 & 0x200) != 0
    && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
  {
    v4 = 1;
    v21 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v21 >> 6);
    Affinity.Mask = 1LL << (v21 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  InternalData = HalpTimerGetInternalData(a1);
  v23 = (*(__int64 (__fastcall **)(__int64))(a1 + 112))(InternalData);
  v10 = __readcr2();
  __writecr2(v10);
  v11 = 1LL << *(_DWORD *)(a1 + 220);
  v12 = v23;
  v13 = 0LL;
  v14 = 0;
  v15 = a2 * *(_QWORD *)(a1 + 192) + 9999999;
  v16 = v15 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v17 = v15 / 0x989680 + 1;
  if ( v15 / 0x989680 != -1LL )
  {
    do
    {
      if ( a3 )
      {
        if ( (++v14 & dword_140C4C47C) != 0 || !qword_140C4C480 )
          _mm_pause();
        else
          qword_140C4C480(v14, *((_QWORD *)&v16 + 1), v9);
      }
      else
      {
        for ( i = 0; i < 0xC8; ++i )
        {
          _mm_pause();
          v19 = i * HalpGlobalVolatile;
          HalpGlobalVolatile = v19;
        }
      }
      v20 = HalpTimerGetInternalData(a1);
      *(_QWORD *)&v16 = (*(__int64 (__fastcall **)(__int64))(a1 + 112))(v20);
      if ( (unsigned __int64)v16 < v12 )
        v13 += v11;
      v12 = v16;
    }
    while ( (__int64)v16 + v13 - v23 < v17 );
  }
  if ( v4 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
