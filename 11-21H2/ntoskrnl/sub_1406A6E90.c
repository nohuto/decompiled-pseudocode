/*
 * XREFs of sub_1406A6E90 @ 0x1406A6E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EBF8 @ 0x14022EBF8 (sub_14022EBF8.c)
 */

NTSTATUS __fastcall sub_1406A6E90(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  do
  {
    if ( (__int64 *)(*a1 + 8 * (v1 + 4 * v1 + 13)) == a1 )
      break;
    v1 = (unsigned int)(v1 + 1);
  }
  while ( (unsigned int)v1 < 4 );
  return sub_14022EBF8(*a1, v1);
}
