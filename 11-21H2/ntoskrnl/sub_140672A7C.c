/*
 * XREFs of sub_140672A7C @ 0x140672A7C
 * Callers:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     sub_14067259C @ 0x14067259C (sub_14067259C.c)
 *     sub_1406727EC @ 0x1406727EC (sub_1406727EC.c)
 *     sub_1406747FC @ 0x1406747FC (sub_1406747FC.c)
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_140756164 @ 0x140756164 (sub_140756164.c)
 *     sub_140927394 @ 0x140927394 (sub_140927394.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140672A7C(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1408);
  if ( result )
    return *(unsigned int *)(result + 8);
  return result;
}
