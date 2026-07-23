/*
 * XREFs of sub_140391648 @ 0x140391648
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *sub_140391648()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  unsigned int *v2; // rdi
  void *result; // rax

  v0 = 0;
  if ( !byte_140C09738 && dword_140C4A660 )
  {
    v1 = (unsigned int)dword_140C4A660;
    v2 = (unsigned int *)(qword_140C4A7C0 + 8);
    do
    {
      result = memmove(*((void **)v2 + 1), (const void *)(qword_140C4A788 + v0), *v2);
      v0 += *v2;
      v2 += 6;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
