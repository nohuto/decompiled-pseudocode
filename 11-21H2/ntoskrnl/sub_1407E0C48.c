/*
 * XREFs of sub_1407E0C48 @ 0x1407E0C48
 * Callers:
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_1408471EC @ 0x1408471EC (sub_1408471EC.c)
 * Callees:
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall sub_1407E0C48(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)sub_140276A48((volatile __int64 *)(a1 + 1208), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
