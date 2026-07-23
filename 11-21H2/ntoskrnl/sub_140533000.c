/*
 * XREFs of sub_140533000 @ 0x140533000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140533000(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= 0x10000 || a2 >= *(_QWORD *)(a1 + 40) >> 5 )
    return 3221225485LL;
  else
    return 0LL;
}
