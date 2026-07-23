/*
 * XREFs of sub_14030C870 @ 0x14030C870
 * Callers:
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_140596904 @ 0x140596904 (sub_140596904.c)
 * Callees:
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_1402365F4 @ 0x1402365F4 (sub_1402365F4.c)
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     sub_1403747E4 @ 0x1403747E4 (sub_1403747E4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14030C870(__int64 a1, char a2, int a3, unsigned int a4)
{
  int v4; // r13d
  __int64 v7; // rdx
  int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rbx
  _DWORD *v17; // r12
  int *v18; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int i; // ecx
  unsigned __int64 v25; // rdi
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  _BYTE *v31; // rdi
  _QWORD *v32; // r8
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // r8
  unsigned __int64 j; // rdx
  __int64 v39; // rax
  int v40; // eax
  int v41; // r12d
  unsigned __int8 v42; // al
  int v43; // eax
  char v44; // al
  unsigned __int8 v45; // al
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // dl
  __int64 v50; // r15
  int v51; // r8d
  ULONG v52; // r9d
  __int64 v53; // r10
  char v55; // [rsp+48h] [rbp-C0h]
  char v56; // [rsp+49h] [rbp-BFh] BYREF
  int v57; // [rsp+4Ch] [rbp-BCh]
  int v58; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+54h] [rbp-B4h]
  int v60; // [rsp+58h] [rbp-B0h]
  int v61; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v62; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v63; // [rsp+68h] [rbp-A0h]
  __int64 v64; // [rsp+70h] [rbp-98h] BYREF
  __int64 v65; // [rsp+78h] [rbp-90h] BYREF
  __int64 v66; // [rsp+80h] [rbp-88h] BYREF
  __int64 v67; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v68[32]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v69[22]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v70[192]; // [rsp+248h] [rbp+140h] BYREF
  _DWORD v71[68]; // [rsp+308h] [rbp+200h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+418h] [rbp+310h] BYREF
  char *v73; // [rsp+438h] [rbp+330h]
  __int64 v74; // [rsp+440h] [rbp+338h]
  char v75[16]; // [rsp+448h] [rbp+340h] BYREF
  int *v76; // [rsp+458h] [rbp+350h]
  __int64 v77; // [rsp+460h] [rbp+358h]
  __int64 *v78; // [rsp+468h] [rbp+360h]
  __int64 v79; // [rsp+470h] [rbp+368h]
  __int64 *v80; // [rsp+478h] [rbp+370h]
  __int64 v81; // [rsp+480h] [rbp+378h]
  __int64 *v82; // [rsp+488h] [rbp+380h]
  __int64 v83; // [rsp+490h] [rbp+388h]
  __int64 *v84; // [rsp+498h] [rbp+390h]
  __int64 v85; // [rsp+4A0h] [rbp+398h]
  __int64 *v86; // [rsp+4A8h] [rbp+3A0h]
  __int64 v87; // [rsp+4B0h] [rbp+3A8h]
  void *retaddr; // [rsp+510h] [rbp+408h]

  v4 = a3;
  v57 = a3;
  v55 = a2;
  memset(v70, 0, 0xB8uLL);
  memset(v68, 0, sizeof(v68));
  memset(v69, 0, sizeof(v69));
  memset(v71, 0, 0x108uLL);
  v8 = 4;
  v9 = *(_QWORD *)(a1 + 144);
  v10 = 0;
  v63 = *(_QWORD **)(a1 + 16);
  v11 = v63[4];
  v12 = 1LL;
  if ( v9 > v11 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    v14 = v9 - v11;
    v15 = 10LL;
    if ( a4 )
      v15 = a4;
    v60 = v57 & 4;
    v59 = v15;
    if ( (v57 & 4) != 0 )
    {
      v16 = 0LL;
    }
    else
    {
      v17 = &unk_140C53D40;
      v18 = (int *)&unk_140C53D40;
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        v18 = (int *)(a1 + 256);
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        LOBYTE(v7) = -1;
        sub_140461A66(v18, v7);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v58 = 0;
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v20 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v21 = *(_DWORD *)(v20 + 24);
            *(_DWORD *)(v20 + 24) = v21 + 1;
            if ( v21 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset(v18, 0x1Fu) )
        {
          v22 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v22 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v23 = *(_DWORD *)(v22 + 24) - 1;
              *(_DWORD *)(v22 + 24) = v23;
              if ( !v23 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          v58 = sub_140220C30(v18, 0xFFu);
        }
        for ( i = *v18; (*v18 & 0xBFFFFFFF) != 0x80000000; i = *v18 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr(v18, 0x40000000u);
          sub_1402F32E0(&v58, v7, v15, v12);
        }
      }
      if ( (v57 & 2) != 0 )
      {
        v16 = *(unsigned int *)(v13 + 24);
        v25 = v16 + v14;
        *(_DWORD *)(v13 + 24) = (v16 + v14) % v59;
      }
      else
      {
        v16 = *(unsigned int *)(v13 + 28);
        v25 = v16 + v14;
        *(_DWORD *)(v13 + 28) = (v16 + v14) % v59;
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        v17 = (_DWORD *)(a1 + 256);
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
        sub_14063D8B0(v17, retaddr);
      else
        *v17 = 0;
      v26 = KeGetCurrentPrcb();
      v27 = *((_QWORD *)v26 + 4375);
      if ( v27 )
      {
        if ( *((_BYTE *)v26 + 32) <= 1u )
        {
          v28 = *(_DWORD *)(v27 + 24) - 1;
          *(_DWORD *)(v27 + 24) = v28;
          if ( !v28 )
            sub_140418E4C(v26);
        }
      }
      LODWORD(v15) = v59;
      if ( v25 < v14 )
        v16 = 0LL;
    }
    v29 = (unsigned int)v15 * (v14 + v16) / 0x3E8;
    if ( v29 > v14 )
      v29 = v14 * (unsigned int)v15 / 0x3E8;
    v30 = *(unsigned __int16 *)(a1 + 174);
    v31 = 0LL;
    v4 = v57;
    HIDWORD(v68[1]) = v15;
    v32 = *(_QWORD **)(qword_140C51F48 + 8 * v30);
    v33 = v32[2075];
    if ( (v57 & 3) != 0 )
    {
      v34 = v32[328];
      v35 = v32 + 360;
      v36 = v32[312];
      v37 = v32 + 415;
      for ( j = v36 + v34; v35 < v37; j += v39 )
      {
        v39 = *v35;
        v35 += 11;
      }
      if ( j + *v37 < *(_QWORD *)(v33 + 72) )
      {
        if ( *(_BYTE *)(a1 + 186) != 2 )
        {
          v40 = 3;
          if ( j >= *(_QWORD *)(v33 + 64) )
            v40 = 5;
          LODWORD(v68[1]) = v40;
        }
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0 || !(unsigned int)sub_1402365F4(a1 - 1664) )
          WORD2(v68[0]) = *(_WORD *)(v33 + 2350);
      }
      if ( v29 <= 0x100 )
        goto LABEL_93;
      v41 = 509;
      if ( v29 < 0x1FD )
        v41 = v29;
      v31 = sub_1402828F0(64, 8LL * (unsigned int)(v41 - 256) + 2072, 0x73576D4Du);
      if ( !v31 )
      {
LABEL_93:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 124), 1, 0) )
        {
          v31 = v70;
          v41 = 20;
        }
        else
        {
          v31 = (_BYTE *)(v33 + 128);
          v41 = 256;
        }
      }
      v42 = *(_BYTE *)(a1 + 184) & 7;
      if ( v42 )
        v43 = v42 < 2u ? 2 : 0;
      else
        v43 = 1;
      *((_DWORD *)v31 + 3) = 0;
      *(_DWORD *)v31 = v43;
      *((_WORD *)v31 + 2) = 0;
      *((_QWORD *)v31 + 2) = 0LL;
      *((_DWORD *)v31 + 2) = v41;
      *((_QWORD *)v31 + 3) = 0LL;
      if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) )
      {
        v71[1] = 32;
        v68[31] = v71;
      }
    }
    HIBYTE(v69[0]) = v55;
    v44 = *(_BYTE *)(a1 + 184);
    v69[3] = a1;
    LODWORD(v68[0]) = v4;
    v68[6] = v29;
    v68[7] = v31;
    v45 = v44 & 7;
    if ( v45 )
      v46 = v45 < 2u ? 2 : 0;
    else
      v46 = 1;
    LODWORD(v68[8]) = v46;
    v69[21] = v68;
    v69[19] = sub_140332110;
    v69[20] = sub_1402F3AD0;
    v68[9] = 20LL;
    WORD2(v68[8]) = 4;
    v68[10] = 0LL;
    v68[11] = 0LL;
    LODWORD(v69[0]) = 14;
    if ( v60 )
    {
      v47 = sub_1403747E4(v69);
      v69[7] = v47;
    }
    else
    {
      if ( (v4 & 2) != 0 )
        v47 = v63[2];
      else
        v47 = v63[1];
      v69[7] = v47;
    }
    v48 = v69[5];
    if ( !v47 )
      v48 = -1LL;
    v69[5] = v48;
    v8 = sub_14030CF90(v69);
    if ( v31 )
    {
      if ( v31 == (_BYTE *)(v33 + 128) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v33 + 124), 0);
      }
      else if ( v31 != v70 )
      {
        ExFreePoolWithTag(v31, 0);
      }
    }
    if ( v8 == 5 )
      ++*(_DWORD *)(v33 + 2568);
  }
  if ( *(_QWORD *)&qword_140C53448 )
  {
    v49 = *(_BYTE *)(a1 + 184) & 7;
    if ( v49 )
      v50 = 0LL;
    else
      v50 = a1 - 216;
    if ( **(_DWORD **)&qword_140C53448 > 5u
      && (*(_BYTE *)(*(_QWORD *)&qword_140C53448 + 16LL) & 1) != 0
      && (*(_QWORD *)(*(_QWORD *)&qword_140C53448 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140C53448 + 24LL) )
    {
      v56 = v49;
      v73 = &v56;
      v74 = 1LL;
      sub_1403699D0(v75, v50);
      v61 = v51;
      v76 = &v61;
      v64 = v68[5];
      v77 = 4LL;
      v78 = &v64;
      v65 = v68[2];
      v80 = &v65;
      v66 = v68[4];
      v82 = &v66;
      v67 = v68[3];
      v84 = &v67;
      v86 = &v62;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 8LL;
      LODWORD(v62) = v4;
      v87 = 4LL;
      sub_14024A9B0(v53, (unsigned __int8 *)&word_14002CD5A, 0LL, v52, 0, 0, 0xAu, &v72);
    }
  }
  LOBYTE(v10) = v8 == 5;
  return v10;
}
