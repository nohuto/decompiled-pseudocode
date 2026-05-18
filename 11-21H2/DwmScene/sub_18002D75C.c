/*
 * XREFs of sub_18002D75C @ 0x18002D75C
 * Callers:
 *     sub_1801010D0 @ 0x1801010D0 (sub_1801010D0.c)
 *     sub_1801017BC @ 0x1801017BC (sub_1801017BC.c)
 *     sub_18010375B @ 0x18010375B (sub_18010375B.c)
 *     sub_18010CA51 @ 0x18010CA51 (sub_18010CA51.c)
 *     sub_18010CA87 @ 0x18010CA87 (sub_18010CA87.c)
 *     sub_18010CC43 @ 0x18010CC43 (sub_18010CC43.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_18002D75C(__int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 8) )
    return Mtx_unlock(*(_Mtx_t *)a1);
  return result;
}
