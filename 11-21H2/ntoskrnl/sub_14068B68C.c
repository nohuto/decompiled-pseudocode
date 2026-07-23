/*
 * XREFs of sub_14068B68C @ 0x14068B68C
 * Callers:
 *     sub_14068B3E0 @ 0x14068B3E0 (sub_14068B3E0.c)
 *     sub_14068F7C4 @ 0x14068F7C4 (sub_14068F7C4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_14068B68C(__int64 a1, unsigned __int16 *a2)
{
  void *v2; // rdi
  void *result; // rax
  unsigned int v5; // r10d
  int v6; // r9d
  size_t v7; // r8

  v2 = (void *)(a1 + 48);
  result = memset((void *)(a1 + 48), 0, 0x40uLL);
  v5 = 0;
  if ( a2 )
  {
    v6 = *a2;
    v7 = 62LL;
    if ( (unsigned __int16)v6 >= 0x40u )
      v5 = v6 - 62;
    else
      v7 = *a2;
    return memmove(v2, (const void *)(*((_QWORD *)a2 + 1) + v5), v7);
  }
  return result;
}
