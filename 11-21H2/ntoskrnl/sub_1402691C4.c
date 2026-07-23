/*
 * XREFs of sub_1402691C4 @ 0x1402691C4
 * Callers:
 *     sub_140269180 @ 0x140269180 (sub_140269180.c)
 *     sub_1407F35F8 @ 0x1407F35F8 (sub_1407F35F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402691C4(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return result;
    v4 = v3 - 1;
    if ( !v4 )
      return 1LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 3LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 4LL;
    if ( v6 == 1 )
      return 5LL;
  }
  return 0LL;
}
