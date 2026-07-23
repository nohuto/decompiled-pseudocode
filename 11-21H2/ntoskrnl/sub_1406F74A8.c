/*
 * XREFs of sub_1406F74A8 @ 0x1406F74A8
 * Callers:
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_140755920 @ 0x140755920 (sub_140755920.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 * Callees:
 *     sub_1406F7664 @ 0x1406F7664 (sub_1406F7664.c)
 */

__int64 __fastcall sub_1406F74A8(__int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // r10
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned int v8; // r11d
  __int64 v9; // rsi
  int v10; // r9d
  __int64 v11; // rax
  _DWORD *v12; // rcx
  int v13; // edi
  __int16 v14; // ax
  __int64 v15; // r14
  __int16 v16; // bp
  int v17; // eax
  __int64 result; // rax
  __int64 v19; // [rsp+88h] [rbp+10h]

  v3 = *(unsigned __int8 *)(a1 + 32);
  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  v7 = 0LL;
  v8 = 0;
  v19 = *(unsigned int *)(a1 + 24);
  LODWORD(v9) = *(_DWORD *)(a1 + 24) << 12;
  v10 = (*(_DWORD *)(a1 + 28) << 12) + 4096;
  if ( a2 )
  {
    v17 = 3;
    v9 = *a2;
    v10 = (*((_DWORD *)a2 + 2) | 0xFFF) + 1;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x200000) != 0 )
      goto LABEL_17;
    v11 = *(_QWORD *)(a1 + 72);
    v12 = *(_DWORD **)v11;
    v13 = *(_DWORD *)(*(_QWORD *)v11 + 56LL);
    if ( (v13 & 0x20) == 0 )
      goto LABEL_17;
    v14 = -31132;
    v15 = *(_QWORD *)(*(_QWORD *)v12 + 56LL);
    v16 = *(_WORD *)(v15 + 48);
    if ( *(_QWORD *)(v6 + 1408) )
    {
      v14 = *(_WORD *)(v6 + 2412);
      if ( !v14 )
        v14 = -31132;
    }
    if ( v16 != v14 && v16 != -31132 )
    {
      v17 = 3;
      a3 |= 2u;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(v15 + 51) & 4) != 0 )
    {
      if ( (v19 | (v3 << 32)) - ((__int64)(*(_QWORD *)(a1 + 80) - *((_QWORD *)v12 + 17)) >> 3) != *(_QWORD *)(*(_QWORD *)v12 + 32LL) >> 12
        || (v13 & 0x20000000) != 0
        || (v17 = 1, v12[22] == -1) )
      {
        v17 = 2;
      }
      v7 = (__int64)v12;
    }
    else
    {
LABEL_17:
      v17 = 3;
    }
  }
LABEL_12:
  if ( (a3 & 1) == 0 )
    return v8;
  result = sub_1406F7664(v6, a1, v9, v10, v7, v17, a3);
  v8 = result;
  if ( (int)result >= 0 )
    return v8;
  return result;
}
