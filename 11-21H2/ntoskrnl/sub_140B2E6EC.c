/*
 * XREFs of sub_140B2E6EC @ 0x140B2E6EC
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_140861984 @ 0x140861984 (sub_140861984.c)
 */

int sub_140B2E6EC()
{
  int result; // eax
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  result = sub_140861984(&v1);
  if ( result >= 0 && v1 )
  {
    result = MEMORY[0xFFFFF780000002F0] | 0x100;
    MEMORY[0xFFFFF780000002F0] |= 0x100u;
  }
  if ( dword_140C4E550 )
  {
    result = MEMORY[0xFFFFF780000002F0] | 0x200;
    MEMORY[0xFFFFF780000002F0] |= 0x200u;
  }
  if ( dword_140D011A8 )
  {
    result = MEMORY[0xFFFFF780000002F0] | 0x400;
    MEMORY[0xFFFFF780000002F0] |= 0x400u;
  }
  return result;
}
