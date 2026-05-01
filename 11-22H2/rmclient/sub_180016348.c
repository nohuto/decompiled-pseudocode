/*
 * XREFs of sub_180016348 @ 0x180016348
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_1800128FC @ 0x1800128FC (sub_1800128FC.c)
 *     sub_180012CD4 @ 0x180012CD4 (sub_180012CD4.c)
 *     sub_180013640 @ 0x180013640 (sub_180013640.c)
 *     sub_180013778 @ 0x180013778 (sub_180013778.c)
 *     sub_1800142CC @ 0x1800142CC (sub_1800142CC.c)
 *     sub_180014410 @ 0x180014410 (sub_180014410.c)
 *     sub_18001453C @ 0x18001453C (sub_18001453C.c)
 *     sub_1800165E0 @ 0x1800165E0 (sub_1800165E0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

signed __int64 __fastcall sub_180016348(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 i; // rcx
  signed __int64 v4; // rtt
  unsigned __int64 v5; // rdi
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax

  _m_prefetchw(a1 + 3);
  result = a1[3];
  for ( i = result - 1; i > 0; i = result - 1 )
  {
    v4 = result;
    result = _InterlockedCompareExchange64(a1 + 3, i, result);
    if ( v4 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  v5 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a1[2] == -1LL )
  {
    if ( _InterlockedDecrement64(a1 + 3) <= -1 )
      __fastfail(0xEu);
    return (*(__int64 (__fastcall **)(_QWORD *))(v5 + 24))(a1);
  }
  else
  {
    RtlAcquireSRWLockExclusive(v5 + 16);
    v6 = _InterlockedExchangeAdd64(a1 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    v8 = v6 - 1;
    if ( v7 )
    {
      if ( v8 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v5 + 16);
      return (*(__int64 (__fastcall **)(_QWORD *))(v5 + 24))(a1);
    }
    else
    {
      return RtlReleaseSRWLockExclusive(v5 + 16);
    }
  }
}
