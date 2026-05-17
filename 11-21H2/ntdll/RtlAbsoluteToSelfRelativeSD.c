/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x180071FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAbsoluteToSelfRelativeSD(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(__int16 *)(a1 + 2) >= 0 )
    return RtlMakeSelfRelativeSD(a1, a2, a3);
  else
    return 3221225703LL;
}
