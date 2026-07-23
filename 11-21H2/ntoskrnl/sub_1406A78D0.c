/*
 * XREFs of sub_1406A78D0 @ 0x1406A78D0
 * Callers:
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 * Callees:
 *     sub_1407BC580 @ 0x1407BC580 (sub_1407BC580.c)
 */

__int64 __fastcall sub_1406A78D0(__int64 a1, char a2, int *a3, __int64 a4)
{
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // esi
  int v10; // esi
  __int64 result; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  _DWORD v14[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-18h]
  _DWORD *v18; // [rsp+58h] [rbp-10h]

  v7 = *a3;
  v8 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v9 = *(_DWORD *)(v8 + 96);
  v18 = v12;
  v10 = v7 & v9;
  v12[1] = v7;
  v12[0] = v7;
  v14[0] = 1;
  v15 = a1;
  v14[1] = a2 & 1;
  v17 = 0LL;
  v13 = 0LL;
  v16 = v8;
  result = sub_1407BC580(v8, v14, a4);
  if ( (int)result >= 0 && !a2 )
    *a3 &= v10 | v12[0];
  return result;
}
