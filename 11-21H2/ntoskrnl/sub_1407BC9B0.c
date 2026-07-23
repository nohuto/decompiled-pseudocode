/*
 * XREFs of sub_1407BC9B0 @ 0x1407BC9B0
 * Callers:
 *     sub_14079EF3C @ 0x14079EF3C (sub_14079EF3C.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_14097A358 @ 0x14097A358 (sub_14097A358.c)
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 * Callees:
 *     sub_14028CDA0 @ 0x14028CDA0 (sub_14028CDA0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1403107F0 @ 0x1403107F0 (sub_1403107F0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_1405C1CE0 @ 0x1405C1CE0 (sub_1405C1CE0.c)
 */

__int64 __fastcall sub_1407BC9B0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // rbp
  ULONG_PTR v7; // rsi
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v22[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v23; // [rsp+60h] [rbp-48h]
  __int64 v24; // [rsp+70h] [rbp-38h]
  __int64 v25; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+20h] BYREF

  v24 = 0LL;
  memset(v22, 0, sizeof(v22));
  v4 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  v7 = sub_140313C70(a3);
  v8 = sub_1402CE240(a2, v7, v6, a1, 1, v22);
  v9 = sub_140313C70(a2);
  v10 = v24;
  v11 = ((__int64)(v7 - v9) >> 3) - v23 + 1;
  v25 = 0LL;
  if ( v24 )
  {
    v18 = sub_14032A72C(v6);
    v20 = sub_1405C1CE0(v18, v19, &v25, &v26, 0);
    v10 = v24;
    v4 = v25;
    *((_QWORD *)&v22[0] + 1) = v20;
  }
  v12 = *(_DWORD *)(a1 + 52);
  v13 = v12;
  LODWORD(v13) = v12 & 0x7FFFFFFF;
  v14 = (v13 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) - v11;
  *(_BYTE *)(a1 + 34) = v14 >> 31;
  *(_DWORD *)(a1 + 52) = v12 ^ (v14 ^ v12) & 0x7FFFFFFF;
  if ( (*(_DWORD *)(a1 + 48) & 0xA00000) == 0xA00000 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2032), -v11);
    v4 = v25;
    v10 = v24;
  }
  if ( v10 )
    v11 = v4 + *((_QWORD *)&v22[0] + 1);
  sub_1403107F0(v11, (__int64)v22, &v21);
  if ( (_QWORD)v21 )
    sub_14028CDA0(v6, v21);
  if ( *((_QWORD *)&v21 + 1) && *((_QWORD *)&v21 + 1) != v4 )
  {
    v15 = sub_14032A72C(v6);
    sub_14028CE10(v15, v16);
  }
  return v8;
}
