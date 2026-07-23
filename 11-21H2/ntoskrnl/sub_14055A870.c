/*
 * XREFs of sub_14055A870 @ 0x14055A870
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_14093A954 @ 0x14093A954 (sub_14093A954.c)
 *     sub_140A67994 @ 0x140A67994 (sub_140A67994.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char sub_14055A870()
{
  char result; // al
  const EVENT_DESCRIPTOR *v1; // rcx

  result = sub_14055A67C();
  if ( result )
    return EtwWriteEx(qword_140D00A98, v1, 0LL, 0, 0LL, 0LL, 0, 0LL);
  return result;
}
