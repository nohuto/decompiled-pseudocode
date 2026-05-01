/*
 * XREFs of HamPendDiagnosticsToWaitTimeout @ 0x18001DF80
 * Callers:
 *     sub_18001D0E4 @ 0x18001D0E4 (sub_18001D0E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HamPendDiagnosticsToWaitTimeout(_DWORD *a1)
{
  if ( !*a1 )
    return 3236691980LL;
  if ( *a1 != 1 )
  {
    if ( *a1 == 2 )
      return 3236691979LL;
    if ( *a1 == 4 )
      return 3236691978LL;
  }
  return 3236691977LL;
}
