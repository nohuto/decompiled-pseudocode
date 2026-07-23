/*
 * XREFs of sub_1402989A8 @ 0x1402989A8
 * Callers:
 *     sub_140298680 @ 0x140298680 (sub_140298680.c)
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 * Callees:
 *     sub_1405697EC @ 0x1405697EC (sub_1405697EC.c)
 *     sub_14056E110 @ 0x14056E110 (sub_14056E110.c)
 */

__int64 __fastcall sub_1402989A8(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  unsigned int v9; // edi
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-18h]

  v5 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
  {
    v9 = *(_DWORD *)(v5 + 2516);
    if ( (v9 & 0x20000) != 0 && (*(_DWORD *)(a2 + 48) & 0x100001) == 0x100001 )
    {
      v14 = a4;
      v10 = v9 >> 31;
      LOBYTE(a4) = v10;
      v7 = sub_14056E110(a1, a2, (_DWORD)a3, a4, v14);
      if ( v7 != -1073740278 )
        return v7;
      v12 = *(_QWORD *)(a2 + 248);
      v13 = *a3;
      LOBYTE(v11) = v10 ^ 1;
      if ( (*(_DWORD *)(v5 + 2516) & 0x40000) == 0 )
      {
        sub_1405697EC(2LL, v13, v12, v11);
        return v7;
      }
      sub_1405697EC(1LL, v13, v12, v11);
    }
  }
  return 0;
}
