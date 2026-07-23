/*
 * XREFs of sub_1403ECF30 @ 0x1403ECF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A590 @ 0x14042A590 (sub_14042A590.c)
 */

char __fastcall sub_1403ECF30(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_QWORD, _QWORD, _QWORD),
        _BYTE *a5)
{
  unsigned __int8 *v5; // r14
  __int64 v6; // r8
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD); // r11
  unsigned __int8 v9; // si
  _BYTE *v10; // r15
  unsigned __int8 v11; // r12
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  unsigned int v15; // edi
  unsigned __int64 v16; // rbp
  _BYTE *v17; // r8
  _BYTE *v18; // r13
  unsigned int v19; // r9d
  unsigned __int8 v20; // al
  unsigned __int8 v21; // r11
  unsigned __int64 v22; // rsi
  int v23; // r12d
  unsigned __int64 v24; // rax
  unsigned __int8 *v25; // rcx
  int v26; // edx
  unsigned __int64 *v27; // rax
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdx
  char v31; // r8
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v35; // [rsp+78h] [rbp+10h]
  __int64 v36; // [rsp+80h] [rbp+18h]
  __int64 (__fastcall *v37)(_QWORD, _QWORD, _QWORD); // [rsp+88h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v5 = a5;
  v6 = 2LL;
  v7 = a4;
  v9 = *a5;
  v10 = a5 + 258;
  v11 = a5[1];
  v12 = a5 + 2;
  v35 = *a5;
  LOBYTE(a5) = v11;
  v13 = v10;
  do
  {
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v13[3] = v12[3];
    v13[4] = v12[4];
    v13[5] = v12[5];
    v13[6] = v12[6];
    v13 += 8;
    v14 = v12[7];
    v12 += 8;
    *(v13 - 1) = v14;
    --v6;
  }
  while ( v6 );
  v15 = 0;
  v16 = 0LL;
  if ( (v5[2] & 1) != 0 )
  {
    v16 = a1 ^ retaddr;
    retaddr = 0LL;
  }
  v17 = (_BYTE *)a1;
  v18 = (_BYTE *)(a1 + a2);
  v19 = 0;
  if ( (_BYTE *)a1 != v18 )
  {
    do
    {
      v20 = v5[++v9 + 2];
      v11 += v20;
      v21 = v5[v11 + 2];
      v5[v11 + 2] = v20;
      v5[v9 + 2] = v21;
      if ( v19 < 0x400 )
        ++v19;
      else
        *v17++ ^= v5[(unsigned __int8)(v21 + v5[v11 + 2]) + 2] ^ 0xD5;
    }
    while ( v17 != v18 );
    v7 = v37;
  }
  *v5 = v9;
  v5[1] = v11;
  v22 = (unsigned __int64)&v34 ^ a1;
  v23 = 64;
  v24 = (unsigned __int64)&v34 ^ a1;
  v25 = v5;
  v26 = 64;
  do
  {
    *(_QWORD *)v25 ^= v24;
    v25 += 8;
    v24 = __ROR8__(v24, 3);
    --v26;
  }
  while ( v26 );
  v34 = v24;
  sub_14042A590(v7);
  LOBYTE(v27) = v37(0LL, 0LL, v36);
  do
  {
    *(_QWORD *)v5 ^= v22;
    v5 += 8;
    v22 = __ROR8__(v22, 3);
    --v23;
  }
  while ( v23 );
  v28 = (*v10 & 1) == 0;
  v34 = v22;
  if ( !v28 )
  {
    v27 = &retaddr;
    retaddr = a1 ^ v16;
  }
  while ( (_BYTE *)a1 != v18 )
  {
    v29 = ++v35;
    LOBYTE(v27) = v10[v35];
    LOBYTE(a5) = (_BYTE)v27 + (_BYTE)a5;
    v30 = (unsigned __int8)a5;
    v31 = v10[(unsigned __int8)a5];
    v10[(unsigned __int8)a5] = (_BYTE)v27;
    v10[v29] = v31;
    if ( v15 < 0x400 )
    {
      ++v15;
    }
    else
    {
      LOBYTE(v27) = v31 + v10[v30];
      *(_BYTE *)a1++ ^= v10[(unsigned __int8)v27] ^ 0xD5;
    }
  }
  return (char)v27;
}
