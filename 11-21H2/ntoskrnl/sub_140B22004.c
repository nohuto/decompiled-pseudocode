/*
 * XREFs of sub_140B22004 @ 0x140B22004
 * Callers:
 *     sub_140B21F30 @ 0x140B21F30 (sub_140B21F30.c)
 * Callees:
 *     NtSetEvent @ 0x14069E0C0 (NtSetEvent.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_14084CA74 @ 0x14084CA74 (sub_14084CA74.c)
 *     sub_14084CAF8 @ 0x14084CAF8 (sub_14084CAF8.c)
 *     sub_14084CB58 @ 0x14084CB58 (sub_14084CB58.c)
 *     sub_14084CBB8 @ 0x14084CBB8 (sub_14084CBB8.c)
 *     sub_14084CC44 @ 0x14084CC44 (sub_14084CC44.c)
 *     sub_14084CCD8 @ 0x14084CCD8 (sub_14084CCD8.c)
 */

int sub_140B22004()
{
  int result; // eax
  NTSTATUS v1; // ebx
  HANDLE EventHandle; // [rsp+30h] [rbp+8h] BYREF

  EventHandle = 0LL;
  result = sub_14084CCD8();
  if ( result >= 0 )
  {
    result = sub_14084CC44(&EventHandle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(EventHandle, 0LL);
      NtClose(EventHandle);
      if ( v1 >= 0 )
      {
        result = sub_14084CBB8();
        v1 = result;
        if ( result < 0 )
          return result;
        sub_14084CB58();
        sub_14084CAF8();
        sub_14084CA74();
      }
      return v1;
    }
  }
  return result;
}
