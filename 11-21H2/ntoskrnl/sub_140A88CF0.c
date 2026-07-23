/*
 * XREFs of sub_140A88CF0 @ 0x140A88CF0
 * Callers:
 *     sub_140A872C8 @ 0x140A872C8 (sub_140A872C8.c)
 *     sub_140A8942C @ 0x140A8942C (sub_140A8942C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A897AC @ 0x140A897AC (sub_140A897AC.c)
 */

void *__fastcall sub_140A88CF0(void *a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // si
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v10; // r8

  HIBYTE(v4) = 0;
  v5 = a2;
  v6 = a4;
  if ( !a4 )
    return memset(a1, 15, a2);
  memset(a1, 15, a3 - (_QWORD)a1);
  memset((void *)(a3 + v6), 15, (size_t)a1 + v5 - (a3 + v6));
  LOBYTE(v4) = (unsigned __int64)a1 + 8 <= a3;
  v10 = v4;
  LOWORD(v10) = v4 | 2;
  if ( a3 + v6 - (unsigned __int64)a1 + 8 > v5 )
    LOWORD(v10) = v4;
  return (void *)sub_140A897AC(a3, (unsigned int)v6, v10);
}
