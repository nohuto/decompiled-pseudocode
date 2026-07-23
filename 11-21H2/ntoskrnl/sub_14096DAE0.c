/*
 * XREFs of sub_14096DAE0 @ 0x14096DAE0
 * Callers:
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 * Callees:
 *     sub_140229640 @ 0x140229640 (sub_140229640.c)
 *     sub_14027D190 @ 0x14027D190 (sub_14027D190.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_14057F538 @ 0x14057F538 (sub_14057F538.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 */

__int64 __fastcall sub_14096DAE0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  int v12; // r9d
  int v13; // r12d
  unsigned __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  int v18; // r15d
  int *v19; // r14
  int *v20; // r13
  unsigned __int64 v21; // rdi
  unsigned int v22[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h]
  unsigned __int64 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+38h] [rbp-48h]
  int v26; // [rsp+40h] [rbp-40h]
  int v27; // [rsp+44h] [rbp-3Ch]
  __int64 v28; // [rsp+48h] [rbp-38h]
  __int64 v29; // [rsp+50h] [rbp-30h]
  unsigned __int64 v30; // [rsp+58h] [rbp-28h]
  __int128 v31; // [rsp+60h] [rbp-20h]
  __int64 v32; // [rsp+70h] [rbp-10h]

  v22[1] = 0;
  v29 = 0LL;
  v31 = 0LL;
  sub_140313C70(a2);
  v4 = sub_140313C70(v3);
  v8 = v7 & (v4 + 8);
  if ( v5 >= v8 )
    return 1075380276LL;
  v10 = *(_QWORD *)(a1 + 96);
  v11 = v8 - v5;
  v12 = *(_DWORD *)(a1 + 128);
  v13 = 0;
  v14 = v11 >> 3;
  if ( (v12 & 8) == 0 && *(_QWORD *)(v10 + 17496) )
  {
    if ( !(unsigned int)sub_14027D190(*(_QWORD *)(a1 + 96), v14, *(_DWORD *)(a1 + 120)) )
      return 3221225626LL;
    *(_QWORD *)(a1 + 104) += v14;
    v13 = 1;
    v12 = *(_DWORD *)(a1 + 128);
    v6 = a2;
  }
  v15 = *(_DWORD *)(a1 + 124);
  if ( v15 )
    v16 = v15 - 1;
  else
    v16 = sub_14057F538();
  v17 = (unsigned __int16)word_140D05000;
  v22[0] = 16;
  v23 = v10;
  if ( (v12 & 0x400) != 0 )
    v17 = 1LL;
  v24 = v14;
  v18 = 0;
  v25 = 512LL;
  v28 = -1LL;
  v27 = 4;
  v30 = v6;
  v19 = (int *)(qword_140C506D8 + 4LL * v16 * (unsigned int)(unsigned __int16)word_140D05000);
  v32 = a1;
  v20 = &v19[v17];
  while ( 1 )
  {
    v26 = v16;
    sub_1405C0D40(v22);
    if ( v24 == *((_QWORD *)&v31 + 1) )
      break;
    if ( ++v19 == v20 )
      goto LABEL_18;
    v16 = *v19;
  }
  v18 = 1;
LABEL_18:
  if ( v13 )
  {
    v21 = v24 - *((_QWORD *)&v31 + 1);
    if ( v24 != *((_QWORD *)&v31 + 1) )
    {
      sub_14028CE10(v10, v21);
      sub_140229640(v10, v21, *(_DWORD *)(a1 + 120));
      *(_QWORD *)(a1 + 104) -= v21;
    }
  }
  return v18 == 0 ? 0xC0000017 : 0;
}
