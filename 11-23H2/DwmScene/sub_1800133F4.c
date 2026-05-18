/*
 * XREFs of sub_1800133F4 @ 0x1800133F4
 * Callers:
 *     sub_18001338C @ 0x18001338C (sub_18001338C.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001187C @ 0x18001187C (sub_18001187C.c)
 */

char *__fastcall sub_1800133F4(char *a1, __int64 a2, __int64 a3, const void *a4, size_t Size, void *Src, size_t a7)
{
  unsigned __int64 v7; // rbp
  char *v10; // rdi
  size_t v11; // rsi
  char *result; // rax

  *(_QWORD *)a1 = 0LL;
  v7 = 15LL;
  *((_QWORD *)a1 + 2) = 0LL;
  v10 = a1;
  *((_QWORD *)a1 + 3) = 0LL;
  v11 = Size + a7;
  if ( Size + a7 > 0xF )
  {
    v7 = sub_18001187C(Size + a7, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
    v10 = (char *)sub_18001090C(v7 + 1);
    *(_QWORD *)a1 = v10;
  }
  *((_QWORD *)a1 + 2) = v11;
  *((_QWORD *)a1 + 3) = v7;
  memcpy(v10, a4, Size);
  memcpy(&v10[Size], Src, a7);
  result = a1;
  v10[v11] = 0;
  return result;
}
