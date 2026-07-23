/*
 * XREFs of sub_140367828 @ 0x140367828
 * Callers:
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402D0490 @ 0x1402D0490 (sub_1402D0490.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_140365C94 @ 0x140365C94 (sub_140365C94.c)
 */

void __fastcall sub_140367828(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v25; // [rsp+90h] [rbp+18h]

  LOBYTE(v24) = 0;
  v4 = a3;
  v6 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  v9 = 48 * v6 - 0x220000000000LL;
  v10 = 0;
  v11 = 48 * ((*(_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v12 = sub_1402F2700(v11);
  v13 = *(_QWORD *)(v11 + 24);
  v25 = v12;
  *(_QWORD *)(v11 + 24) = v13 ^ (v13 ^ (v13 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = sub_1402D0490(a1, a2, &v24);
  v15 = *(_QWORD *)a2;
  v24 = v14;
  if ( (v15 & 1) != 0 )
  {
    v18 = 0LL;
    v19 = 0LL;
LABEL_18:
    sub_140228660(v9, 0);
    sub_140228660(v11, 0);
    goto LABEL_7;
  }
  if ( (v15 & 8) != 0 )
    v4 = sub_1402CBD10(a2, v6, 536870913);
  v16 = v4 & 0xFFFFFFFFFFFFFEFBuLL;
  v17 = v16 | ((unsigned __int64)(word_140C51864 & 1) << 8);
  if ( (a4 & 8) != 0 && _bittest64((const signed __int64 *)(v9 + 40), 0x35u) )
    v17 = v16 & 0xFFFFFFFFFFFFFFBDuLL | ((unsigned __int64)(word_140C51864 & 1) << 8);
  v18 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  v19 = *(_QWORD *)(v9 + 16);
  if ( !(unsigned int)sub_140322F10(a1, a2, (_QWORD *)v9, 0, v17, 0, 0LL) )
    goto LABEL_18;
  if ( dword_140C4EEF0 && (v19 & 0x400) != 0 )
    v10 = 1;
LABEL_7:
  sub_14020D8D0(a1, v24);
  sub_1402B0CE0(a1, v25);
  if ( v10 )
  {
    if ( qword_140C50780 )
    {
      if ( (v19 & 0x10) == 0 )
        v19 &= ~qword_140C50780;
    }
    v20 = v19 >> 16;
    v21 = *(_QWORD *)v20;
    v22 = sub_14027A794(*(_QWORD *)v20, 1666411853LL);
    v23 = sub_1403342D0(v20, v18, 0xFFFFFFFF);
    sub_140365C94(v22, v23, 4u);
    sub_140230680((signed __int64 *)(v21 + 64), v22, 0x63536D4Du);
  }
}
