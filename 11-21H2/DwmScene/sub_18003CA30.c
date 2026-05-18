/*
 * XREFs of sub_18003CA30 @ 0x18003CA30
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 */

__int64 __fastcall sub_18003CA30(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  void *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  size_t v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == 0xFFFF )
      return 0LL;
    v5 = **(_QWORD **)(a1 + 64);
    v6 = v5 + 2LL * **(int **)(a1 + 88);
    if ( v5 && v5 < v6 )
    {
      *(_WORD *)std::wstreambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v5 + 2;
      return a2;
    }
    v7 = 0LL;
    v8 = **(void ***)(a1 + 24);
    v9 = 32LL;
    if ( !v5 )
      goto LABEL_14;
    v7 = (__int64)(v6 - (_QWORD)v8) >> 1;
    if ( v7 < 0x20 )
      goto LABEL_14;
    if ( v7 < 0x3FFFFFFF )
    {
      v9 = 2 * v7;
      if ( 2 * v7 > 0x7FFFFFFFFFFFFFFFLL )
        sub_1800120D4();
      goto LABEL_14;
    }
    v9 = 0x7FFFFFFFLL;
    if ( v7 < 0x7FFFFFFF )
    {
LABEL_14:
      v10 = 2 * v9;
      v11 = 2 * v7;
      v12 = sub_180011088(2 * v9);
      memcpy((void *)v12, v8, v11);
      *(_QWORD *)(a1 + 104) = v11 + v12 + 2;
      **(_QWORD **)(a1 + 32) = v12;
      **(_QWORD **)(a1 + 64) = v11 + v12;
      **(_DWORD **)(a1 + 88) = (__int64)(v10 - v11) >> 1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v12;
        **(_QWORD **)(a1 + 56) = 0LL;
        **(_DWORD **)(a1 + 80) = v12 >> 1;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 104);
        v14 = (__int64)(**(_QWORD **)(a1 + 56) - (_QWORD)v8) >> 1;
        **(_QWORD **)(a1 + 24) = v12;
        v15 = v12 + 2 * v14;
        **(_QWORD **)(a1 + 56) = v15;
        **(_DWORD **)(a1 + 80) = (v13 - v15) >> 1;
      }
      v16 = *(_DWORD *)(a1 + 112);
      if ( (v16 & 1) != 0 )
      {
        sub_180010884((char *)v8, v11);
        v16 = *(_DWORD *)(a1 + 112);
      }
      *(_DWORD *)(a1 + 112) = v16 | 1;
      *(_WORD *)std::wstreambuf::_Pninc(a1) = a2;
      return a2;
    }
  }
  return 0xFFFFLL;
}
