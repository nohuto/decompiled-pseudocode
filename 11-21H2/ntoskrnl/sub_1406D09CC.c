/*
 * XREFs of sub_1406D09CC @ 0x1406D09CC
 * Callers:
 *     sub_14078241C @ 0x14078241C (sub_14078241C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 */

__int64 __fastcall sub_1406D09CC(unsigned int a1, unsigned int *a2, size_t a3, unsigned int *a4)
{
  unsigned __int16 v4; // bx
  void *v8; // rcx
  PVOID v10; // rax
  size_t v11; // rbp
  unsigned __int64 v12; // rax

  v4 = a3;
  if ( a1 - 1 > 1 && a1 != 7 )
  {
    if ( (unsigned int)a3 <= 4 )
    {
      if ( a4 == a2 || !(_DWORD)a3 )
        return 0LL;
      goto LABEL_6;
    }
    v12 = *a4;
    if ( (v12 & 0x80000000) == 0LL )
    {
      a3 = (unsigned int)a3;
      if ( v12 >= (unsigned __int64)(unsigned int)a3 + 8 )
      {
        *a4 = a3;
        v8 = a4 + 2;
        a4[1] = a1;
        goto LABEL_7;
      }
    }
    else if ( -(int)v12 >= (unsigned int)a3 )
    {
LABEL_6:
      a3 = (unsigned int)a3;
      v8 = a4;
LABEL_7:
      memmove(v8, a2, a3);
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( (unsigned int)a3 > 0xFFFE )
    v4 = -2;
  v10 = (PVOID)*((_QWORD *)a4 + 1);
  if ( v10 )
  {
    if ( v4 > *((_WORD *)a4 + 1) )
      return 3221225507LL;
    v11 = v4;
LABEL_14:
    memmove(v10, a2, v11);
    *(_WORD *)a4 = v4 - 2;
    return 0LL;
  }
  v11 = v4;
  v10 = sub_1406BE560(v4);
  *((_QWORD *)a4 + 1) = v10;
  if ( v10 )
  {
    *((_WORD *)a4 + 1) = v4;
    goto LABEL_14;
  }
  return 3221225495LL;
}
