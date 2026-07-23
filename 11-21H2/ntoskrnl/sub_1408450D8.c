/*
 * XREFs of sub_1408450D8 @ 0x1408450D8
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140845150 @ 0x140845150 (sub_140845150.c)
 */

void *__fastcall sub_1408450D8(UNICODE_STRING *a1)
{
  void *result; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // bx

  result = (void *)sub_140845150(a1);
  if ( (_BYTE)result )
  {
    Buffer = a1->Buffer;
    Length = a1->Length;
    *Buffer = 0;
    Buffer[1] = 58;
    result = memmove(Buffer + 2, Buffer, Length);
    a1->Length = Length + 4;
  }
  return result;
}
