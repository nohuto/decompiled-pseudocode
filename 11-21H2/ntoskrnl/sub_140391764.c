/*
 * XREFs of sub_140391764 @ 0x140391764
 * Callers:
 *     sub_140A5072C @ 0x140A5072C (sub_140A5072C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *sub_140391764()
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
      result = memmove((void *)(qword_140C4A788 + v0), *((const void **)v2 + 1), *v2);
      v0 += *v2;
      v2 += 6;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
