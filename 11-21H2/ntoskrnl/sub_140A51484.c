/*
 * XREFs of sub_140A51484 @ 0x140A51484
 * Callers:
 *     sub_1408025E8 @ 0x1408025E8 (sub_1408025E8.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_140253DD4 @ 0x140253DD4 (sub_140253DD4.c)
 *     sub_140A514F0 @ 0x140A514F0 (sub_140A514F0.c)
 */

__int64 __fastcall sub_140A51484(_BYTE *a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  if ( *a1 )
  {
    v2 = a1 + 40;
    v3 = 5LL;
    do
    {
      sub_140A514F0(v2 - 16);
      sub_140A514F0(v2);
      sub_140A514F0(v2 + 16);
      sub_140A514F0(v2 + 32);
      v2 += 72;
      --v3;
    }
    while ( v3 );
    *a1 = 0;
    return sub_140253DD4();
  }
  return result;
}
