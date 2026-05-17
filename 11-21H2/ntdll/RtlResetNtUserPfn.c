/*
 * XREFs of RtlResetNtUserPfn @ 0x1800936B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlDllShutdownInProgress @ 0x18005B310 (RtlDllShutdownInProgress.c)
 */

__int64 RtlResetNtUserPfn()
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9

  if ( !byte_18018F1D8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0, v1, v2, v3);
    byte_18018F1D8 = 0;
    memset64(off_18018F180, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_18018F0C0, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1, 0x18uLL, v4, v5);
  }
  return 0LL;
}
