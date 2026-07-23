/*
 * XREFs of sub_14055C000 @ 0x14055C000
 * Callers:
 *     sub_140A660C0 @ 0x140A660C0 (sub_140A660C0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char sub_14055C000()
{
  char result; // al
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = sub_14055A67C();
  if ( result )
  {
    v2 = (const EVENT_DESCRIPTOR *)qword_140039388;
    if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
      v2 = &stru_140039258;
    return EtwWriteEx(qword_140D00A98, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
