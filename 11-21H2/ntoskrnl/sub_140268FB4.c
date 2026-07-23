/*
 * XREFs of sub_140268FB4 @ 0x140268FB4
 * Callers:
 *     sub_140268E74 @ 0x140268E74 (sub_140268E74.c)
 * Callees:
 *     sub_1402690B4 @ 0x1402690B4 (sub_1402690B4.c)
 *     sub_1405A57F0 @ 0x1405A57F0 (sub_1405A57F0.c)
 */

__int64 __fastcall sub_140268FB4(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  int v4; // esi
  __int64 result; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // r8
  int v12; // ecx
  int v13; // r9d
  unsigned int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // ecx

  v4 = 3;
  if ( !a4 )
    v4 = a3;
  if ( *(_BYTE *)(a2 + 29) )
  {
    sub_1405A57F0((PSLIST_HEADER)a2);
    *(_BYTE *)(a2 + 29) = 0;
  }
  result = (unsigned int)(*(_DWORD *)(a2 + 20) - *(_DWORD *)(a2 + 24));
  if ( (_DWORD)result )
  {
    v12 = *(_DWORD *)(a2 + 16);
    v13 = 16;
    if ( (unsigned int)result >= 0x10 || v12 < 16 )
    {
      v13 = 4;
      v14 = *(_DWORD *)(a2 + 16);
      v15 = v12 >> 31;
    }
    else
    {
      v14 = *(_DWORD *)(a2 + 16);
      v15 = v12 >> 31;
      if ( v12 < 64 )
        v13 = 8;
    }
    v16 = __SPAIR64__(v15, v14) / v13;
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 20);
    if ( !v16 )
      v16 = 1;
    v17 = v16 + v12;
    result = 256LL;
    if ( v17 > 256 )
      v17 = 256;
    *(_DWORD *)(a2 + 16) = v17;
  }
  else if ( !*(_BYTE *)(a2 + 28) )
  {
    v9 = *(_DWORD *)(a2 + 16);
    v10 = v9 / 20;
    if ( !(v9 / 20) )
      v10 = v9 != 0;
    v11 = (unsigned int)(v9 - v10);
    if ( (a4 || !v4) && (int)v11 < 5 )
      v11 = 5LL;
    *(_DWORD *)(a2 + 16) = v11;
    result = sub_1402690B4(a1, a2, v11, a4);
  }
  *(_BYTE *)(a2 + 28) = 0;
  return result;
}
