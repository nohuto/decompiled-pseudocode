/*
 * XREFs of sub_1402D0500 @ 0x1402D0500
 * Callers:
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402336A8 @ 0x1402336A8 (sub_1402336A8.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14031D9B0 @ 0x14031D9B0 (sub_14031D9B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402D0500(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  char *v10; // rsi
  int v11; // eax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  int v14; // ecx
  __int64 v15; // rsi
  signed __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int64 v18; // rsi
  signed __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  bool v22; // zf
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int8 v27; // [rsp+20h] [rbp-148h]
  signed __int64 v28; // [rsp+28h] [rbp-140h] BYREF
  __int64 v29; // [rsp+30h] [rbp-138h]
  unsigned __int64 v30; // [rsp+38h] [rbp-130h]
  __int64 v31; // [rsp+40h] [rbp-128h]
  __int128 v32; // [rsp+48h] [rbp-120h] BYREF
  __int64 v33; // [rsp+58h] [rbp-110h]
  __int64 v34; // [rsp+60h] [rbp-108h]
  _QWORD v35[22]; // [rsp+70h] [rbp-F8h] BYREF

  v29 = a1;
  v28 = 0LL;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v31 = v5;
  v27 = sub_1402CF4F0(v5);
  if ( a2 > a3 )
  {
LABEL_22:
    v15 = v28;
    goto LABEL_23;
  }
  v6 = 0LL;
  v34 = 0LL;
  v7 = (__int64)(a3 << 25) >> 16;
  v33 = v7;
LABEL_3:
  v32 = 0LL;
  memset((char *)v35 + 4, 0, 0xACuLL);
  LODWORD(v35[0]) = 2145;
  v8 = (__int64)((a2 << 25) - v6) >> 16;
  v9 = sub_1402CFEB0(v8);
  if ( v9 < 0xFFFF800000000000uLL || v9 >= qword_140C540C0 && v9 <= qword_140C51BF0 )
    v10 = (char *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL);
  else
    v10 = sub_14026DFC0(1);
  v11 = sub_14031D9B0(v10, v8, 0LL);
  if ( v11 )
  {
    LODWORD(v32) = v11 - 1;
    v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v32 + 1) = v12;
  }
  else
  {
    LODWORD(v35[0]) |= 4u;
    v35[21] = &v32;
    v35[2] = 0LL;
    v35[3] = v10;
    BYTE4(v35[0]) = BYTE4(v35[0]) & 0xE3 | 4;
    v35[20] = sub_14023E500;
    HIBYTE(v35[0]) = v27;
    v35[4] = (__int64)((a2 << 25) - v6) >> 16;
    v35[5] = v7;
    sub_14030CF90(v35);
    v12 = *((_QWORD *)&v32 + 1);
  }
  if ( v12 )
  {
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v13 = 0LL;
    v12 = a3 + 8;
  }
  v30 = v13;
  v14 = *(_DWORD *)(v29 + 48) >> 7;
  if ( (*(_DWORD *)(v29 + 48) & 0x70) != 0x20 || (v14 & 0x1F) == 1 )
  {
    v15 = v28;
    if ( (v14 & 5) != 5 )
    {
      v15 = ((__int64)(v12 - a2) >> 3) + v28;
      v28 = v15;
    }
    a2 = v12;
  }
  else
  {
    v15 = v28;
    if ( a2 < v12 )
    {
      v23 = v29;
      do
      {
        if ( sub_1402336A8(v23, a2) )
          ++v15;
        a2 += 8LL;
      }
      while ( a2 < v12 );
      v5 = v31;
      v28 = v15;
    }
  }
  if ( a2 != a3 + 8 )
  {
    v16 = v28;
    v17 = v29;
    v18 = (__int64)((a2 << 25) - v6) >> 16;
    while ( 1 )
    {
      v19 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v24 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 8 * ((a2 >> 3) & 0x1FF));
          v26 = v19 | 0x20;
          if ( (v25 & 0x20) == 0 )
            v26 = *(_QWORD *)a2;
          v19 = v26;
          if ( (v25 & 0x42) != 0 )
            v19 = v26 | 0x42;
        }
      }
      v28 = v19;
      if ( !v19 )
        break;
      if ( (v19 & 1) != 0 )
      {
        if ( (v19 & 0x200) != 0 )
          goto LABEL_19;
        v20 = 48 * (((unsigned __int64)sub_140317A10(&v28) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( *(__int64 *)(v20 + 40) >= 0
          || (*(_QWORD *)(v20 + 8) | 0x8000000000000000uLL) != sub_140319600(v17, v18 >> 12, 0LL, &v28) )
        {
          goto LABEL_19;
        }
        goto LABEL_26;
      }
      if ( (v19 & 0x400) != 0 )
      {
        if ( sub_1402806A0(v19) )
        {
          v22 = (v19 & 0xA0) == 0xA0;
          goto LABEL_25;
        }
        if ( qword_140C50780 && (v19 & 0x10) == 0 )
          v19 &= ~qword_140C50780;
        if ( v19 >> 16 != sub_140319600(v17, v18 >> 12, 0LL, &v28)
          || (*(_DWORD *)(v17 + 48) & 0x70) == 0x20 && !sub_1402336A8(v17, a2) )
        {
          goto LABEL_19;
        }
LABEL_26:
        ++v16;
      }
LABEL_19:
      a2 += 8LL;
      v18 += 4096LL;
      if ( (a2 & 0xFFF) == 0 || a2 > a3 )
      {
        v28 = v16;
        v5 = v31;
        sub_14020D8D0(v31, v30);
        v7 = v33;
        v6 = v34;
        if ( a2 > a3 )
          goto LABEL_22;
        goto LABEL_3;
      }
    }
    v22 = !sub_1402336A8(v17, a2);
LABEL_25:
    if ( v22 )
      goto LABEL_19;
    goto LABEL_26;
  }
  if ( v13 )
    sub_14020D8D0(v5, v13);
LABEL_23:
  sub_1402B0CE0(v5, v27);
  return v15;
}
