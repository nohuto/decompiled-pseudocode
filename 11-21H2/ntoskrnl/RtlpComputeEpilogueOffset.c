/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x1403FAD10
 * Callers:
 *     CmpLazyFlushDpcRoutine @ 0x140253FC0 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1402566A0 (ExpTimerDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x140376100 (PopThermalZoneDpc.c)
 *     IopTimerDispatch @ 0x1403A06D0 (IopTimerDispatch.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403A13C0 (ExpTimeRefreshDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1406481F0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KeExitRetpoline @ 0x14024B6F8 (KeExitRetpoline.c)
 *     sub_140AD0DA0 @ 0x140AD0DA0 (sub_140AD0DA0.c)
 *     KeGuardDispatchICall @ 0x140AD23B0 (KeGuardDispatchICall.c)
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
  if ( (*((_DWORD *)v3 + 599) & 0x100000) != 0 )
    KeExitRetpoline(v6, a2, a3);
  else
    _mm_lfence();
  sub_140AD0DA0(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[32])(v3 + 236, 1LL);
}
