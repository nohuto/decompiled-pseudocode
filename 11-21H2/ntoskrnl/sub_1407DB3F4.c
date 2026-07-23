/*
 * XREFs of sub_1407DB3F4 @ 0x1407DB3F4
 * Callers:
 *     sub_1407DABF0 @ 0x1407DABF0 (sub_1407DABF0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407DB4C8 @ 0x1407DB4C8 (sub_1407DB4C8.c)
 */

__int64 __fastcall sub_1407DB3F4(unsigned int *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  unsigned int v5; // ebp
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  result = *a1;
  v2 = a1 + 6;
  v3 = (_QWORD *)*((_QWORD *)a1 + 4);
  v5 = *a1 >> 4;
  v6 = (_QWORD *)*((_QWORD *)a1 + 3);
  if ( v6 != v3 )
  {
    do
    {
      if ( (_QWORD *)*v3 != v2 || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3) )
        __fastfail(3u);
      v2[1] = v7;
      *v7 = v2;
      if ( (*a1 & 0xF) != 0 )
      {
        memset(v3, 0, v5);
        v3[1] = v3;
        *v3 = v3;
        *((_DWORD *)v3 + 8) = 2048;
      }
      else
      {
        sub_1407DB4C8(v3, v5, 1LL);
      }
      *v3 = *((_QWORD *)a1 + 2);
      ++*((_WORD *)a1 + 5);
      *((_QWORD *)a1 + 2) = v3;
      v6 = (_QWORD *)*v2;
      v3 = (_QWORD *)v2[1];
    }
    while ( (_QWORD *)*v2 != v3 );
    result = *a1;
  }
  if ( (result & 0xF) == 0 )
    return sub_1407DB4C8(v6, v5, 1LL);
  return result;
}
