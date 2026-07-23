/*
 * XREFs of sub_140959C24 @ 0x140959C24
 * Callers:
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 * Callees:
 *     sub_140959D3C @ 0x140959D3C (sub_140959D3C.c)
 */

__int64 __fastcall sub_140959C24(unsigned int a1, __int64 a2, int a3, unsigned int *a4, char a5, __int64 a6)
{
  __int64 v8; // rdi
  _DWORD *v9; // rbx
  int v10; // eax
  __int64 result; // rax

  v8 = a2;
  if ( a1 || !a2 )
  {
    v9 = (_DWORD *)a6;
    sub_140959D3C((_DWORD)qword_140C46278, a3, (_DWORD)a4, a6 + 64 + 8 * a1, a6 + 80 + 4LL * a1, a5);
    *(_QWORD *)(a6 + 24) = qword_140C46278;
    *(_BYTE *)(a6 + 32) = 1;
  }
  else
  {
    v9 = (_DWORD *)a6;
    *(_QWORD *)(a6 + 40) = a2;
    if ( *(_DWORD *)(a2 + 300) == 778 )
    {
      *(_DWORD *)(a6 + 8) = 1;
      goto LABEL_6;
    }
    v8 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a6 + 8) = 2;
    if ( v8 )
    {
LABEL_6:
      while ( 1 )
      {
        v10 = sub_140959D3C(v8, a3, (_DWORD)a4, (int)a6 + 64, a6 + 80, a5);
        if ( v10 != 281 )
          break;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v8 )
          goto LABEL_11;
      }
      *(_BYTE *)(a6 + 32) = v10 >= 0;
      *(_QWORD *)(a6 + 24) = v8;
    }
  }
LABEL_11:
  result = *a4;
  *v9 = result;
  return result;
}
