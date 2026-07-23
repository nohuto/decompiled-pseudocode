/*
 * XREFs of sub_1405B05A0 @ 0x1405B05A0
 * Callers:
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C15F0 @ 0x1402C15F0 (sub_1402C15F0.c)
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 */

__int64 __fastcall sub_1405B05A0(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (__int64 *)*a1;
      result = sub_14024B0B4((_DWORD *)a1 + 2, 1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
