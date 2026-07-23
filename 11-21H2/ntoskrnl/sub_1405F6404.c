/*
 * XREFs of sub_1405F6404 @ 0x1405F6404
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_1405F6404 @ 0x1405F6404 (sub_1405F6404.c)
 * Callees:
 *     sub_140396008 @ 0x140396008 (sub_140396008.c)
 *     sub_1405F6404 @ 0x1405F6404 (sub_1405F6404.c)
 *     sub_1405F6854 @ 0x1405F6854 (sub_1405F6854.c)
 */

__int64 __fastcall sub_1405F6404(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // r12
  _DWORD **v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rax

  if ( !*(_BYTE *)(a2 + 3) )
  {
    v4 = a2 + 16;
    v5 = a2 + 16;
    v6 = a2 + 16 + 16LL * (unsigned __int16)*(_DWORD *)a2;
    if ( a2 + 16 <= v6 )
    {
      v7 = (__int64 *)(a2 + 8);
      v8 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
      do
      {
        v9 = (__int64 *)(v5 - 8);
        if ( v5 <= v4 )
          v9 = v7;
        if ( **v8 == -1 || *(_BYTE *)(a2 + 2) != 2 )
          v10 = *v9;
        else
          v10 = sub_1405F6854(v8, v9);
        if ( v10 )
          sub_1405F6404(a1);
        v5 += 16LL;
      }
      while ( v5 <= v6 );
    }
  }
  return sub_140396008(a1, a2);
}
