/*
 * XREFs of sub_140864B64 @ 0x140864B64
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     <none>
 */

__int64 *sub_140864B64()
{
  __int64 *result; // rax

  qword_140C49240 = 0LL;
  result = &qword_140C49250;
  qword_140C49258 = (__int64)&qword_140C49250;
  qword_140C49250 = (__int64)&qword_140C49250;
  if ( (unsigned int)dword_140C0C6A8 > 0x384 )
    dword_140C0C6A8 = 60;
  return result;
}
