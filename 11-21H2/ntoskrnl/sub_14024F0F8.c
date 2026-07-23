/*
 * XREFs of sub_14024F0F8 @ 0x14024F0F8
 * Callers:
 *     sub_14024F014 @ 0x14024F014 (sub_14024F014.c)
 *     sub_140279DB0 @ 0x140279DB0 (sub_140279DB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14024F0F8(__int64 a1, int *a2)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10

  *a2 = 0;
  v2 = 4;
  v3 = 4LL;
  while ( 1 )
  {
    --v3;
    --v2;
    v4 = **(_QWORD **)(a1 + 8 * v3);
    if ( (v4 & 1) == 0 )
      break;
    if ( (v4 & 0x80u) != 0LL )
    {
      *a2 = v2;
      return 1LL;
    }
    if ( v3 == 1 )
      return 1LL;
  }
  return 0LL;
}
