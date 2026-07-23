/*
 * XREFs of sub_1403FB390 @ 0x1403FB390
 * Callers:
 *     sub_1403FB308 @ 0x1403FB308 (sub_1403FB308.c)
 *     sub_140A378B4 @ 0x140A378B4 (sub_140A378B4.c)
 * Callees:
 *     sub_1403FB460 @ 0x1403FB460 (sub_1403FB460.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1403FB390(unsigned int *a1, char *a2, size_t a3)
{
  size_t v3; // rbx
  char *v4; // rbp
  __int64 v5; // rdi
  size_t v7; // r14
  __int64 result; // rax
  size_t v9; // rax
  size_t v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = a3;
  *((_QWORD *)a1 + 2) += a3;
  v4 = a2;
  v5 = *a1;
  if ( (_DWORD)v5 )
  {
    v7 = (unsigned int)(64 - v5);
    if ( a3 >= v7 )
    {
      memmove((char *)a1 + v5 + 32, a2, (unsigned int)v7);
      v4 += v7;
      v3 -= v7;
      result = sub_1403FB460(a1 + 24, a1 + 8, 64LL, &v10);
      LODWORD(v5) = 0;
    }
  }
  if ( v3 >= 0x40 )
  {
    sub_1403FB460(a1 + 24, v4, v3, &v10);
    v9 = v3;
    v3 = v10;
    result = v9 - v10;
    v4 += result;
  }
  if ( v3 )
  {
    result = (__int64)memmove((char *)a1 + (unsigned int)v5 + 32, v4, v3);
    LODWORD(v5) = v3 + v5;
  }
  *a1 = v5;
  return result;
}
