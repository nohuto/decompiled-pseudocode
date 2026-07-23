/*
 * XREFs of sub_14069EDC0 @ 0x14069EDC0
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_140920CA0 @ 0x140920CA0 (sub_140920CA0.c)
 *     sub_140920F1C @ 0x140920F1C (sub_140920F1C.c)
 *     sub_140921F64 @ 0x140921F64 (sub_140921F64.c)
 *     sub_140922400 @ 0x140922400 (sub_140922400.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 *     sub_140922B20 @ 0x140922B20 (sub_140922B20.c)
 * Callees:
 *     sub_14069EEC0 @ 0x14069EEC0 (sub_14069EEC0.c)
 *     sub_14069F324 @ 0x14069F324 (sub_14069F324.c)
 */

__int64 __fastcall sub_14069EDC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_14069F324(a1, *(unsigned __int16 *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    sub_14069EEC0(a1, a2, a3);
    return 0LL;
  }
  return result;
}
