/*
 * XREFs of sub_1409881B4 @ 0x1409881B4
 * Callers:
 *     sub_1409884F4 @ 0x1409884F4 (sub_1409884F4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407DA8F4 @ 0x1407DA8F4 (sub_1407DA8F4.c)
 *     sub_1407DB4C8 @ 0x1407DB4C8 (sub_1407DB4C8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409881B4(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // esi
  size_t v5; // rbp
  unsigned int v9; // r15d
  _QWORD *Pool2; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx

  v4 = 0;
  v5 = a2;
  *(_DWORD *)a1 = (16 * a2) | *(_DWORD *)a1 & 0xF;
  v9 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, v5, a4);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      if ( (*(_DWORD *)a1 & 0xF) != 0 )
      {
        memset(Pool2, 0, v5);
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        *((_DWORD *)Pool2 + 8) = 2048;
      }
      else
      {
        sub_1407DB4C8(Pool2, v5, 0);
      }
      *Pool2 = *(_QWORD *)(a1 + 16);
      ++*(_WORD *)(a1 + 10);
      ++v9;
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = Pool2;
      if ( v9 >= a3 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v11 = sub_1407DA8F4(a1);
    v12 = a1 + 24;
    v13 = *(_QWORD *)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
      __fastfail(3u);
    *v11 = v13;
    v11[1] = v12;
    *(_QWORD *)(v13 + 8) = v11;
    *(_QWORD *)v12 = v11;
  }
  return v4;
}
