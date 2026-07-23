/*
 * XREFs of sub_140396030 @ 0x140396030
 * Callers:
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 * Callees:
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 *     sub_140396008 @ 0x140396008 (sub_140396008.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 *     sub_1405F6854 @ 0x1405F6854 (sub_1405F6854.c)
 */

__int64 __fastcall sub_140396030(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  __int64 *v6; // rdx
  _DWORD *v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  void *v11; // rcx
  size_t v12; // r8
  bool v13; // zf
  _DWORD **v14; // rcx
  _DWORD **v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx

  v5 = a3;
  v6 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = (_DWORD *)*(v6 - 1);
  if ( (a3 & 1) != 0 )
    v5 = *v6;
  v8 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
  {
    v9 = *v6;
    v8 = a3;
  }
  v10 = (unsigned __int16)*(_DWORD *)v9;
  if ( v9 == v8 )
  {
    v7 -= 4;
    *(v6 - 1) = (__int64)v7;
  }
  if ( *(_BYTE *)(v9 + 3) )
  {
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(v5 + 8);
    v11 = (void *)(v9 + 16 + 4 * v10);
    v12 = 4LL * (unsigned __int16)*(_DWORD *)v5;
  }
  else
  {
    v17 = 2 * v10;
    LODWORD(v10) = v10 + 1;
    *(_DWORD *)(v9 + 8 * v17 + 16) = *v7;
    *(_QWORD *)(v9 + 8 * v17 + 24) = *(_QWORD *)(v5 + 8);
    v12 = 16LL * (unsigned __int16)*(_DWORD *)v5;
    v11 = (void *)(v9 + 16 * ((unsigned int)v10 + 1LL));
  }
  memmove(v11, (const void *)(v5 + 16), v12);
  v13 = *(_BYTE *)(v9 + 3) == 0;
  *(_WORD *)v9 = v10 + *(_WORD *)v5;
  if ( !v13 )
  {
    v14 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v14 != -1 )
      sub_1405F6710(v14, v7 + 2);
    v15 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v15 != -1 )
      sub_1405F6854(v15, v7 + 2);
  }
  sub_140396008(a1, v5);
  --*(_DWORD *)(a2 + 24);
  result = sub_140381C90(a1, a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
