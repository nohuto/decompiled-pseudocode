/*
 * XREFs of sub_18002AA98 @ 0x18002AA98
 * Callers:
 *     sub_18002AFDC @ 0x18002AFDC (sub_18002AFDC.c)
 *     sub_18002B050 @ 0x18002B050 (sub_18002B050.c)
 *     sub_18002B8C0 @ 0x18002B8C0 (sub_18002B8C0.c)
 *     sub_18002D480 @ 0x18002D480 (sub_18002D480.c)
 *     sub_18002D584 @ 0x18002D584 (sub_18002D584.c)
 *     sub_180073ED8 @ 0x180073ED8 (sub_180073ED8.c)
 *     sub_180074020 @ 0x180074020 (sub_180074020.c)
 * Callees:
 *     sub_18002AE4C @ 0x18002AE4C (sub_18002AE4C.c)
 */

__int64 __fastcall sub_18002AA98(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 136;
    do
    {
      sub_18002AE4C(v3, v3);
      v3 += 152LL;
      result = v3 - 136;
    }
    while ( v3 - 136 != a2 );
  }
  return result;
}
