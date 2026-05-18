/*
 * XREFs of sub_180021BF0 @ 0x180021BF0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 */

__int64 __fastcall sub_180021BF0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  void *v8; // r15
  size_t v9; // rdi
  char *v10; // r14
  char *v11; // r8
  int v12; // r9d
  int v13; // eax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == -1 )
      return 0LL;
    v5 = **(_QWORD **)(a1 + 64);
    v6 = v5 + **(int **)(a1 + 88);
    if ( v5 && v5 < v6 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v5 + 1;
      return a2;
    }
    v7 = 32LL;
    v8 = **(void ***)(a1 + 24);
    v9 = (v6 - (_QWORD)v8) & -(__int64)(v5 != 0);
    if ( v9 < 0x20 )
    {
LABEL_12:
      v10 = (char *)sub_180011088(v7);
      memcpy(v10, v8, v9);
      *(_QWORD *)(a1 + 104) = &v10[v9 + 1];
      **(_QWORD **)(a1 + 32) = v10;
      **(_QWORD **)(a1 + 64) = &v10[v9];
      **(_DWORD **)(a1 + 88) = v7 - v9;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v10;
        **(_QWORD **)(a1 + 56) = 0LL;
        **(_DWORD **)(a1 + 80) = (_DWORD)v10;
      }
      else
      {
        v11 = &v10[**(_QWORD **)(a1 + 56) - (_QWORD)v8];
        v12 = *(_QWORD *)(a1 + 104) - (_DWORD)v11;
        **(_QWORD **)(a1 + 24) = v10;
        **(_QWORD **)(a1 + 56) = v11;
        **(_DWORD **)(a1 + 80) = v12;
      }
      v13 = *(_DWORD *)(a1 + 112);
      if ( (v13 & 1) != 0 )
      {
        sub_180010884((char *)v8, v9);
        v13 = *(_DWORD *)(a1 + 112);
      }
      *(_DWORD *)(a1 + 112) = v13 | 1;
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      return a2;
    }
    if ( v9 < 0x3FFFFFFF )
    {
      v7 = 2 * v9;
      goto LABEL_12;
    }
    v7 = 0x7FFFFFFFLL;
    if ( v9 < 0x7FFFFFFF )
      goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}
