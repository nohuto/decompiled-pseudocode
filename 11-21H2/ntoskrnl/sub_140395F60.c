/*
 * XREFs of sub_140395F60 @ 0x140395F60
 * Callers:
 *     sub_140381A7C @ 0x140381A7C (sub_140381A7C.c)
 * Callees:
 *     sub_140381A7C @ 0x140381A7C (sub_140381A7C.c)
 *     sub_140396008 @ 0x140396008 (sub_140396008.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 *     sub_1405F6854 @ 0x1405F6854 (sub_1405F6854.c)
 */

__int64 __fastcall sub_140395F60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // rdx
  _DWORD *v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r15
  bool v12; // zf
  void *v13; // rcx
  size_t v14; // r8
  __int64 v15; // rcx
  _DWORD **v16; // rcx
  _DWORD **v17; // rcx
  __int64 result; // rax

  v5 = a3;
  v6 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
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
  v10 = *(_DWORD *)v9;
  v11 = (unsigned __int16)*(_DWORD *)v9;
  if ( v9 == v8 )
  {
    v7 -= 4;
    *(v6 - 1) = (unsigned __int64)v7;
  }
  if ( *(_BYTE *)(v9 + 3) )
  {
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(v5 + 8);
    v13 = (void *)(v9 + 16 + 4 * v11);
    v14 = 4LL * (unsigned __int16)*(_DWORD *)v5;
  }
  else
  {
    v15 = 2LL * (unsigned __int16)v10;
    LODWORD(v11) = (unsigned __int16)v10 + 1;
    *(_DWORD *)(v9 + 8 * v15 + 16) = *v7;
    *(_QWORD *)(v9 + 8 * v15 + 24) = *(_QWORD *)(v5 + 8);
    v14 = 16LL * (unsigned __int16)*(_DWORD *)v5;
    v13 = (void *)(v9 + 16 * ((unsigned int)v11 + 1LL));
  }
  memmove(v13, (const void *)(v5 + 16), v14);
  v12 = *(_BYTE *)(v9 + 3) == 0;
  *(_WORD *)v9 = v11 + *(_WORD *)v5;
  if ( !v12 )
  {
    v16 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v16 != -1 )
      sub_1405F6710(v16, v7 + 2);
    v17 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v17 != -1 )
      sub_1405F6854(v17, v7 + 2);
  }
  sub_140396008(a1, v5);
  --*(_DWORD *)(a2 + 24);
  result = sub_140381A7C(a1, a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
