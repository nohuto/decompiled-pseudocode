/*
 * XREFs of sub_1402E7400 @ 0x1402E7400
 * Callers:
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 * Callees:
 *     sub_140257F64 @ 0x140257F64 (sub_140257F64.c)
 *     sub_140284D20 @ 0x140284D20 (sub_140284D20.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E766C @ 0x1402E766C (sub_1402E766C.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402E7400(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r14d
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned int v17; // r14d
  __int64 *v18; // rbx
  int v19; // ecx
  unsigned int v20; // r13d
  unsigned __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-79h]
  __int64 v26; // [rsp+28h] [rbp-71h]
  unsigned __int64 v27; // [rsp+30h] [rbp-69h]
  __int128 v28; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v29[20]; // [rsp+50h] [rbp-49h] BYREF
  char v30; // [rsp+100h] [rbp+67h]
  unsigned __int64 v31; // [rsp+108h] [rbp+6Fh]
  __int64 v32; // [rsp+110h] [rbp+77h] BYREF
  __int64 v33; // [rsp+118h] [rbp+7Fh] BYREF

  memset(v29, 0, 0x60uLL);
  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 56);
  v28 = 0LL;
  v6 = *(_QWORD **)(v2 + 120);
  v33 = 0LL;
  v30 = 0;
  v25 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x200000) == 0 && qword_1400161D0[(v8 >> 19) & 3] == 16 )
  {
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v28 + 1) = 0x10000LL;
    *(_QWORD *)&v28 = v4;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    LOWORD(v29[0]) = 2;
    v29[1] = &v28;
    v5 = v29;
    v29[2] = 1LL;
    v29[3] = 0LL;
    v29[4] = 0LL;
    v30 = 1;
  }
  v27 = sub_140284D20((__int64)v5, *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL, v2);
  v9 = 0LL;
  v10 = 0LL;
  v31 = v4 >> 12;
  v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v27 )
    return 1LL;
  do
  {
    if ( (unsigned int)sub_1402E766C(v11, *(unsigned int *)(a1 + 32)) )
      break;
    v12 = sub_140319600(v2, v31, 4LL, &v33);
    v26 = v12;
    if ( !v12 || !v33 || v10 && v33 != v10 )
      break;
    if ( ((v12 ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v33;
    if ( v31 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v7 )
      break;
    v13 = sub_140317A10(v12);
    v32 = v13;
    if ( (v13 & 1) != 0 || !v13 || (v13 & 0x400) != 0 || (v13 & 0x800) != 0 || (unsigned int)sub_1402E76C0(&v32) )
      break;
    if ( !v3 )
      v9 = v26;
    ++v3;
    ++v31;
    v11 += 8LL;
  }
  while ( v3 < v27 );
  if ( v3 <= 1 || v30 && v11 <= ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v14 = 0;
  v15 = -(__int64)v3;
  v16 = v3;
  v17 = 0;
  v18 = (__int64 *)(v11 + 8 * v15);
  do
  {
    v19 = *(_DWORD *)(a1 + 32);
    v20 = v14;
    if ( v19 == 256 )
      v21 = (v9 << 16) | 0x400;
    else
      v21 = 32 * (v19 & 0x1F | 0xFFFFFFFFF8000020uLL);
    v32 = sub_1402CCC50(v21);
    v22 = v32;
    v23 = sub_140317A10(v18);
    if ( !v23 )
      *v18 = v22;
    v14 = v20 + 1;
    if ( v23 )
      v14 = v20;
    ++v17;
    ++v18;
    v9 += 8LL;
  }
  while ( v17 < v16 );
  if ( v14 )
    sub_140257F64(v25, v14);
  return v16;
}
