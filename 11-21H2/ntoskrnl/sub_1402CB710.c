/*
 * XREFs of sub_1402CB710 @ 0x1402CB710
 * Callers:
 *     sub_140270A00 @ 0x140270A00 (sub_140270A00.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_14022FC80 @ 0x14022FC80 (sub_14022FC80.c)
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CD7F0 @ 0x1402CD7F0 (sub_1402CD7F0.c)
 *     sub_1402CD940 @ 0x1402CD940 (sub_1402CD940.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_140366094 @ 0x140366094 (sub_140366094.c)
 *     sub_140366BE8 @ 0x140366BE8 (sub_140366BE8.c)
 */

__int64 __fastcall sub_1402CB710(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  unsigned int v7; // ebp
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // r13d
  __int64 *v14; // rax
  __int64 v15; // r15
  _QWORD *v16; // rbp
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  unsigned __int64 v19; // r12
  __int64 v20; // r14
  unsigned int v21; // eax
  int v22; // eax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v24; // rax
  struct _EX_RUNDOWN_REF *v25; // rdi
  unsigned __int64 v26; // r12
  __int64 v27; // rbx
  char v28; // al
  unsigned __int64 v29; // rbx
  int v30; // ecx
  __int16 v31; // ax
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rax
  char v36; // cl
  char v37; // cl
  int v38; // eax
  int v39; // r8d
  _QWORD *v40; // [rsp+40h] [rbp-78h]
  unsigned __int64 v41; // [rsp+48h] [rbp-70h]
  __int64 v42; // [rsp+50h] [rbp-68h]
  int v43; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h]
  unsigned __int64 v45; // [rsp+C0h] [rbp+8h]
  _QWORD *v47; // [rsp+D0h] [rbp+18h]
  unsigned int v48; // [rsp+D8h] [rbp+20h] BYREF

  v48 = a4;
  v47 = a3;
  v4 = a4;
  v44 = *(_QWORD *)a1;
  v5 = a2;
  v7 = 1;
  v8 = *(_QWORD *)(48LL * *a3 - 0x220000000000LL + 8) | 0x8000000000000000uLL;
  v9 = *(_QWORD *)(48LL * *a3 - 0x220000000000LL + 16);
  v41 = v8;
  if ( qword_140C50780 && (v9 & 0x10) == 0 )
    v9 &= ~qword_140C50780;
  v10 = *(_QWORD *)(v9 >> 16);
  v42 = v10;
  if ( dword_140C4EEF0 )
  {
    v11 = sub_14027A794(v10, 1666411853LL);
    v8 = v41;
    v12 = v11;
    a3 = v47;
  }
  else
  {
    v12 = 0LL;
  }
  v45 = v12;
  v13 = 0;
  if ( v4 )
  {
    v14 = a3;
    v40 = a3;
    while ( 1 )
    {
      v15 = *v14;
      v16 = (_QWORD *)(48 * *v14 - 0x220000000000LL);
      v17 = v16[2];
      v18 = v17;
      if ( qword_140C50780 && (v17 & 0x10) == 0 )
        v18 = v17 & ~qword_140C50780;
      v19 = v16[1] | 0x8000000000000000uLL;
      v20 = v5 + 8 * ((__int64)(v19 - v8) >> 3);
      if ( !v12 )
        goto LABEL_14;
      v21 = sub_1402CD940(v12, v20 << 25 >> 16);
      v22 = sub_1403342D0(v18 >> 16, v19, v21);
      CurrentThread = KeGetCurrentThread();
      v43 = v22;
      v24 = sub_1402CD7F0(*((_QWORD *)CurrentThread + 23));
      v25 = (struct _EX_RUNDOWN_REF *)v24;
      if ( v24 )
      {
        v38 = sub_140366BE8(CurrentThread, v24, 1LL);
        v26 = v45;
        if ( v38 )
          sub_140366094((_DWORD)v25, v45, *(_QWORD *)(v45 + 24), v43, v39);
        sub_1402AD030(v25 + 45);
      }
      else
      {
LABEL_14:
        v26 = v45;
      }
      v27 = sub_1402CBD10(v20, v15, (v17 >> 5) & 0x1F);
      v28 = *(_BYTE *)(a1 + 13);
      v29 = v27 & 0xFFFFFFFFFFFFFFDFuLL;
      if ( (v28 & 5) == 4 && (v28 & 2) == 0 )
        break;
LABEL_23:
      v32 = sub_140322F10(v44, v20, (_DWORD)v16, 0, v29, 12, 0LL);
      v4 = v48;
      v5 = a2;
      if ( !v32 )
      {
        v10 = v42;
        v7 = 0;
        goto LABEL_26;
      }
      ++v13;
      v8 = v41;
      v14 = ++v40;
      if ( v13 >= v48 )
      {
        v10 = v42;
        v7 = 1;
        goto LABEL_26;
      }
      v12 = v45;
    }
    v30 = *(unsigned __int16 *)(a1 + 10);
    if ( (_WORD)v30 )
    {
      if ( v30 + *(unsigned __int16 *)(a1 + 8) != (((unsigned int)v20 >> 3) & 0x1FF) )
        goto LABEL_38;
      if ( (__int64)v16[5] < 0 )
      {
        if ( (v28 & 0x10) == 0 )
          goto LABEL_21;
        goto LABEL_38;
      }
      if ( (v28 & 0x10) == 0 )
LABEL_38:
        sub_14022FC80((__int64 *)a1);
    }
LABEL_21:
    v31 = *(_WORD *)(a1 + 10);
    if ( v31 )
    {
      *(_WORD *)(a1 + 10) = v31 + 1;
    }
    else
    {
      *(_WORD *)(a1 + 10) = 1;
      v36 = *(_BYTE *)(a1 + 13);
      *(_WORD *)(a1 + 8) = ((unsigned int)v20 >> 3) & 0x1FF;
      if ( (__int64)v16[5] >= 0 )
        v37 = v36 | 0x10;
      else
        v37 = v36 & 0xEF;
      *(_BYTE *)(a1 + 13) = v37;
    }
    goto LABEL_23;
  }
  v26 = v12;
LABEL_26:
  if ( v13 )
  {
    if ( *(_WORD *)(a1 + 10) )
      sub_14022FC80((__int64 *)a1);
    v33 = 48 * sub_14033AC10(v5) - 0x220000000000LL;
    v48 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v48);
      while ( *(__int64 *)(v33 + 24) < 0 );
    }
    *(_QWORD *)(v33 + 24) ^= (*(_QWORD *)(v33 + 24) ^ (*(_QWORD *)(v33 + 24) + v13)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v34 = sub_1402D03D0(v5 << 25 >> 16);
    sub_14028FB74(v34, v13);
  }
  else
  {
    *(_WORD *)(a1 + 10) = 0;
  }
  for ( ; v13 != v4; ++v13 )
    sub_140228660(48LL * v47[v13] - 0x220000000000LL, 0);
  if ( v26 )
    sub_140230680((signed __int64 *)(v10 + 64), v26, 0x63536D4Du);
  return v7;
}
