/*
 * XREFs of sub_180020BF8 @ 0x180020BF8
 * Callers:
 *     sub_1800A0F8C @ 0x1800A0F8C (sub_1800A0F8C.c)
 * Callees:
 *     memchr @ 0x1800FEEA3 (memchr.c)
 *     memcmp @ 0x1800FEEAF (memcmp.c)
 */

__int64 __fastcall sub_180020BF8(_QWORD *a1, char *a2)
{
  char *v2; // rsi
  size_t v3; // r14
  _QWORD *v4; // rdi
  size_t v5; // rax
  __int64 v6; // rbx
  int v7; // r12d
  size_t v8; // rax
  const void *v9; // rcx
  char *v10; // r15
  size_t v11; // r8
  _BYTE *v12; // rbp
  char *v13; // rax
  char *v14; // rbp

  v2 = a2;
  v3 = *((_QWORD *)a2 + 2);
  v4 = a1;
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v2 = *(char **)a2;
  v5 = a1[2];
  if ( a1[3] >= 0x10uLL )
    v4 = (_QWORD *)*a1;
  if ( v3 > v5 )
    return -1LL;
  v6 = 0LL;
  if ( v3 )
  {
    v7 = *v2;
    v8 = v5 - v3;
    v9 = v4;
    v10 = (char *)v4 + v8;
    v11 = v8 + 1;
    while ( 1 )
    {
      v13 = (char *)memchr(v9, v7, v11);
      v14 = v13;
      if ( !v13 )
        break;
      if ( !memcmp(v13, v2, v3) )
        return v14 - (char *)v4;
      v12 = v14 + 1;
      v11 = v10 + 1 - v12;
      v9 = v12;
    }
    return -1LL;
  }
  return v6;
}
