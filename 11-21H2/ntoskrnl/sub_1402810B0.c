/*
 * XREFs of sub_1402810B0 @ 0x1402810B0
 * Callers:
 *     sub_1406F77DC @ 0x1406F77DC (sub_1406F77DC.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14031D9B0 @ 0x14031D9B0 (sub_14031D9B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402810B0(unsigned __int64 a1, __int64 a2)
{
  signed __int64 *v4; // rsi
  __int64 v5; // rbp
  unsigned __int8 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned int v9; // r14d
  char *v10; // rdi
  __int64 v11; // rbx
  signed __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  signed __int64 v20; // [rsp+20h] [rbp-118h] BYREF
  __int128 v21; // [rsp+28h] [rbp-110h] BYREF
  int v22; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v23; // [rsp+44h] [rbp-F4h]
  char v24; // [rsp+46h] [rbp-F2h]
  unsigned __int8 v25; // [rsp+47h] [rbp-F1h]
  __int64 v26; // [rsp+48h] [rbp-F0h]
  __int64 v27; // [rsp+50h] [rbp-E8h]
  char *v28; // [rsp+58h] [rbp-E0h]
  __int64 v29; // [rsp+60h] [rbp-D8h]
  __int64 v30; // [rsp+68h] [rbp-D0h]
  _BYTE v31[112]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 (__fastcall *v32)(__int64); // [rsp+E0h] [rbp-58h]
  __int128 *v33; // [rsp+E8h] [rbp-50h]

  v4 = (signed __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v6 = sub_1402CF4F0(v5);
  v23 = 0;
  v21 = 0LL;
  v24 = 0;
  v26 = 0LL;
  memset(v31, 0, sizeof(v31));
  v22 = 2145;
  v7 = (__int64)((_QWORD)v4 << 25) >> 16;
  v8 = sub_1402CFEB0(v7);
  v9 = 1;
  if ( v8 < 0xFFFF800000000000uLL || v8 >= qword_140C540C0 && v8 <= qword_140C51BF0 )
    v10 = (char *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL);
  else
    v10 = sub_14026DFC0(1);
  if ( (unsigned int)sub_14031D9B0(v10, v7, 0LL) )
  {
    v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v22 |= 4u;
    v33 = &v21;
    v27 = 0LL;
    v28 = v10;
    LOBYTE(v23) = v23 & 0xE3 | 4;
    v32 = sub_14023E500;
    v25 = v6;
    v29 = (__int64)((_QWORD)v4 << 25) >> 16;
    v30 = v29;
    sub_14030CF90(&v22);
    v11 = *((_QWORD *)&v21 + 1);
  }
  if ( v4 != (signed __int64 *)v11 )
  {
    v9 = 3;
    goto LABEL_11;
  }
  v12 = *v4;
  v13 = (((unsigned __int64)v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)sub_140317A80(v4)
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v17 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v17 )
    {
      v18 = v12 | 0x20;
      v19 = *(_QWORD *)(v17 + 8 * (((unsigned __int64)v4 >> 3) & 0x1FF));
      if ( (v19 & 0x20) == 0 )
        v18 = v12;
      v12 = v18;
      if ( (v19 & 0x42) != 0 )
        v12 = v18 | 0x42;
    }
  }
  v20 = v12;
  if ( !v12 )
  {
    v9 = 2;
    goto LABEL_9;
  }
  v15 = sub_140319600(a2, a1 >> 12, 0LL, &v21);
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 0x400) != 0 )
    {
      if ( sub_1402806A0(v12) )
        goto LABEL_9;
      if ( qword_140C50780 && (v12 & 0x10) == 0 )
        v12 &= ~qword_140C50780;
      if ( v15 == v12 >> 16 )
        goto LABEL_9;
    }
    goto LABEL_18;
  }
  v16 = 48 * (((unsigned __int64)sub_140317A10(&v20) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( *(__int64 *)(v16 + 40) >= 0 || (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) != v15 )
LABEL_18:
    v9 = 0;
LABEL_9:
  if ( v13 )
    sub_14020D8D0(v5, v13);
LABEL_11:
  sub_1402B0CE0(v5, v6);
  return v9;
}
