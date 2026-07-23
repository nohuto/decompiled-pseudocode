/*
 * XREFs of sub_1407BC750 @ 0x1407BC750
 * Callers:
 *     sub_14030FEC0 @ 0x14030FEC0 (sub_14030FEC0.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028CDA0 @ 0x14028CDA0 (sub_14028CDA0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14031077C @ 0x14031077C (sub_14031077C.c)
 *     sub_1403107F0 @ 0x1403107F0 (sub_1403107F0.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_1406DD778 @ 0x1406DD778 (sub_1406DD778.c)
 *     sub_1407B97B0 @ 0x1407B97B0 (sub_1407B97B0.c)
 */

void __fastcall sub_1407BC750(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  BOOL v5; // ebp
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-28h]

  v15[0] = 0LL;
  v15[2] = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v4 = sub_14032A72C(a2);
  v5 = 0;
  if ( (unsigned int)sub_14031077C(a1) )
    v5 = (*(_BYTE *)(a1 + 48) & 0x70) != 80;
  v6 = *(unsigned int *)(a1 + 52);
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v7 = v6 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v7 < 0x7FFFFFFFDLL )
  {
    v15[1] = *(_QWORD *)(a1 + 8);
    v15[3] = *(_QWORD *)a1;
    sub_1403107F0(v7, (__int64)v15, &v14);
    v8 = v14;
    if ( (_QWORD)v14 )
    {
      sub_14028CDA0(a2, v14);
      if ( v5 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 2032), -v8);
    }
    if ( !*((_QWORD *)&v14 + 1) )
      goto LABEL_11;
    v9 = sub_140282AD0(a2 + 1664);
    v11 = v9[1];
    if ( v11 )
    {
      if ( v10 <= v11 )
      {
        v9[1] = v11 - v10;
LABEL_11:
        *(_DWORD *)(a1 + 52) &= 0x80000000;
        *(_BYTE *)(a1 + 34) = 0;
        goto LABEL_12;
      }
      v10 -= v11;
      v9[1] = 0LL;
    }
    if ( v10 )
      sub_14028CE10(v4, v10);
    goto LABEL_11;
  }
LABEL_12:
  v12 = *(_DWORD *)(a1 + 48) & 0x70;
  if ( v12 == 16 || v12 == 64 )
  {
    v13 = sub_1406DD778(
            (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
            ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF,
            0);
    if ( v13 )
      sub_140216E18(v4, v13);
  }
  sub_1407B97B0(a1, 1);
}
