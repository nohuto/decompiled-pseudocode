/*
 * XREFs of LdrQueryImageFileExecutionOptions @ 0x18007D820
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryImageFileExecutionOptions @ 0x18007D860 (RtlQueryImageFileExecutionOptions.c)
 */

__int64 __fastcall LdrQueryImageFileExecutionOptions(int a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  if ( LdrpIsSecureProcess )
    return 3221225524LL;
  else
    return RtlQueryImageFileExecutionOptions(a1, a2, a3, a4, a5, a6);
}
