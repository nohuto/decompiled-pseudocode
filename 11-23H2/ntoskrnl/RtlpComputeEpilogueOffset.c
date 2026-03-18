/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x1403F3228
 * Callers:
 *     CmpLazyFlushDpcRoutine @ 0x140365DF0 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140369EC0 (ExpTimerDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1403CCBC0 (PopThermalZoneDpc.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403CCCA0 (ExpTimeRefreshDpcRoutine.c)
 *     IopTimerDispatch @ 0x140555CA0 (IopTimerDispatch.c)
 *     FsRtlTruncateSmallMcb @ 0x14066CF90 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KeExitRetpoline @ 0x14034C0DC (KeExitRetpoline.c)
 *     sub_140B121A0 @ 0x140B121A0 (sub_140B121A0.c)
 *     KeGuardDispatchICall @ 0x140B137A0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int i; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r9
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  for ( i = 0; i < 0x19; ++i )
    *a2++ ^= a3;
  *(_DWORD *)v3 ^= a3;
  v6 = *((int *)v3 + 49);
  if ( a3 && (_DWORD)v6 )
  {
    v7 = &a2[v6 - 1];
    while ( 1 )
    {
      *v7-- ^= a3;
      v9 = __ROR8__(a3, v6);
      a3 = v9 & 0x3F;
      _bittestandcomplement64((signed __int64 *)&v9, a3);
      v6 = (unsigned int)(v6 - 1);
      if ( !(_DWORD)v6 )
        break;
      a3 = v9;
    }
  }
  if ( (*((_DWORD *)v3 + 613) & 0x100000) != 0 )
    KeExitRetpoline(v6, a2, a3);
  else
    _mm_lfence();
  sub_140B121A0(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[34])(v3 + 243, 1LL);
}
