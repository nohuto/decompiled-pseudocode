/*
 * XREFs of sub_1406DBC80 @ 0x1406DBC80
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 *__fastcall sub_1406DBC80(__int64 a1, __int64 a2)
{
  volatile signed __int32 *result; // rax

  if ( a2 )
    result = *(volatile signed __int32 **)(a2 + 1384);
  else
    result = (volatile signed __int32 *)&unk_140C5A340;
  _InterlockedIncrement(result + 128);
  _InterlockedIncrement(result + 129);
  *(_QWORD *)(a1 + 1384) = result;
  return result;
}
