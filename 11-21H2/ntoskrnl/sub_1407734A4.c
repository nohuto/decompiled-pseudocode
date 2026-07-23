/*
 * XREFs of sub_1407734A4 @ 0x1407734A4
 * Callers:
 *     sub_140775D50 @ 0x140775D50 (sub_140775D50.c)
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 */

BOOLEAN __fastcall sub_1407734A4(__int64 a1, void *a2)
{
  BOOLEAN result; // al
  PVOID Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  result = RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer);
  if ( result )
    return sub_14077B394(Buffer);
  return result;
}
