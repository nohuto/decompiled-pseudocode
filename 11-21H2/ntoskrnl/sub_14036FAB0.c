/*
 * XREFs of sub_14036FAB0 @ 0x14036FAB0
 * Callers:
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 * Callees:
 *     sub_140242028 @ 0x140242028 (sub_140242028.c)
 *     sub_1402472B4 @ 0x1402472B4 (sub_1402472B4.c)
 *     sub_140353A00 @ 0x140353A00 (sub_140353A00.c)
 *     sub_1403633A0 @ 0x1403633A0 (sub_1403633A0.c)
 */

__int64 __fastcall sub_14036FAB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // ebx
  unsigned __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // r15

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = 0;
  v6 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  v7 = (256 - *(unsigned __int8 *)(a1 + 10)) << *(_BYTE *)(a1 + 9);
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = v3;
      if ( v3 > v7 )
        v9 = v7;
      v3 = (v3 - v7) & -(__int64)(v7 < v3);
      v10 = sub_1403633A0(a1, v9, 0);
      v11 = v10;
      if ( !v10 )
        break;
      sub_140242028(a1, v10, v9);
      sub_140353A00(a1, v11 + 32LL * *(unsigned __int8 *)(a1 + 10), 1);
      sub_1402472B4(a1, v11);
      if ( !--v6 )
        return v5;
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
