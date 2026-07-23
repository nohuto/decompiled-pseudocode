/*
 * XREFs of sub_14055B7B0 @ 0x14055B7B0
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_14093A908 @ 0x14093A908 (sub_14093A908.c)
 *     sub_14093A954 @ 0x14093A954 (sub_14093A954.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char sub_14055B7B0()
{
  char result; // al
  int v1; // ecx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = sub_14055A67C();
  if ( result )
  {
    if ( v1 )
    {
      v2 = (const EVENT_DESCRIPTOR *)qword_140038680;
      if ( v1 != 1 )
        v2 = &stru_140038368;
    }
    else
    {
      v2 = (const EVENT_DESCRIPTOR *)qword_140038298;
    }
    return EtwWriteEx(qword_140D00A98, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
