/*
 * XREFs of sub_1C0056F98 @ 0x1C0056F98
 * Callers:
 *     sub_1C00603D0 @ 0x1C00603D0 (sub_1C00603D0.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C0056F98(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  __int64 v4; // rbx
  int v5; // edi
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // ecx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v8 = 0;
  if ( *(_DWORD *)v4 == 1431193940 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  v10 = sub_1C0007CF4(64LL, 84LL, 1918067026LL, a1);
  if ( v10 )
  {
    *(_DWORD *)v10 = 28;
    *(_QWORD *)(v10 + 4) = 0x464E495255444E45LL;
    *(_DWORD *)(v10 + 16) = 2954240;
    if ( v4 )
      v11 = *(_DWORD *)(v4 + 1320);
    else
      v11 = *(_DWORD *)(v9 + 4060);
    *(_DWORD *)(v10 + 12) = v11;
    *(_DWORD *)(v10 + 24) = 56;
    *(_DWORD *)(v10 + 28) = 56;
    *(_DWORD *)(v10 + 32) = 56;
    v5 = 84;
  }
  else
  {
    v8 = -1073741670;
  }
  *a3 = v10;
  result = v8;
  *a4 = v5;
  return result;
}
