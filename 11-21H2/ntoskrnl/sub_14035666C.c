/*
 * XREFs of sub_14035666C @ 0x14035666C
 * Callers:
 *     sub_140355DFC @ 0x140355DFC (sub_140355DFC.c)
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 *     sub_140397B04 @ 0x140397B04 (sub_140397B04.c)
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 *     sub_14045E4C2 @ 0x14045E4C2 (sub_14045E4C2.c)
 *     sub_1405D4C64 @ 0x1405D4C64 (sub_1405D4C64.c)
 *     sub_1405D4D6C @ 0x1405D4D6C (sub_1405D4D6C.c)
 *     sub_1405D4E64 @ 0x1405D4E64 (sub_1405D4E64.c)
 *     sub_1405D5360 @ 0x1405D5360 (sub_1405D5360.c)
 * Callees:
 *     sub_140358140 @ 0x140358140 (sub_140358140.c)
 */

__int64 __fastcall sub_14035666C(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a2 > a1 )
  {
    v2 = a2 - a1;
    if ( v2 )
    {
      v3 = v2;
      do
      {
        result = sub_140358140(0LL);
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
