/*
 * XREFs of sub_14091EEC4 @ 0x14091EEC4
 * Callers:
 *     sub_14091EE14 @ 0x14091EE14 (sub_14091EE14.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_140718244 @ 0x140718244 (sub_140718244.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F12C @ 0x14082F12C (sub_14082F12C.c)
 *     sub_14091F960 @ 0x14091F960 (sub_14091F960.c)
 *     sub_14091F9DC @ 0x14091F9DC (sub_14091F9DC.c)
 *     sub_14091FCD8 @ 0x14091FCD8 (sub_14091FCD8.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 *     sub_140920AB4 @ 0x140920AB4 (sub_140920AB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14091EEC4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        __int16 a6,
        int a7)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned int v10; // esi
  _DWORD *v11; // r13
  unsigned int *v13; // r12
  ULONG_PTR v14; // rdx
  _DWORD *v15; // rax
  unsigned int v16; // r8d
  int v17; // edi
  unsigned int v18; // r14d
  char v19; // di
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // r14
  ULONG_PTR v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r13d
  __int64 v25; // rax
  char v26; // al
  int v27; // ecx
  bool v28; // zf
  char v29; // dl
  ULONG_PTR v30; // rdx
  __int64 v31; // rax
  int v32; // ecx
  char v33; // cl
  int v34; // edx
  __int64 v35; // rdx
  unsigned int v36; // esi
  _BYTE *v37; // r13
  PVOID PoolWithTag; // rdi
  unsigned int v39; // eax
  int v40; // r14d
  __int64 v41; // rcx
  int v42; // edx
  __int64 v43; // rdi
  __int64 v44; // rax
  size_t v45; // r8
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rsi
  int v50; // eax
  ULONG_PTR v51; // rdx
  __int64 v52; // rax
  unsigned int v53; // ecx
  char v54; // si
  int v55; // edx
  __int64 v56; // rcx
  char v57; // al
  unsigned int v58; // r9d
  ULONG_PTR v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  unsigned __int16 v63; // cx
  unsigned int v64; // eax
  ULONG_PTR v65; // [rsp+30h] [rbp-99h]
  __int16 v66; // [rsp+38h] [rbp-91h]
  int v67; // [rsp+48h] [rbp-81h]
  _BYTE *Src; // [rsp+50h] [rbp-79h]
  int v69; // [rsp+58h] [rbp-71h]
  ULONG_PTR v70; // [rsp+5Ch] [rbp-6Dh] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+64h] [rbp-65h] BYREF
  int v72; // [rsp+6Ch] [rbp-5Dh]
  __int64 v73; // [rsp+70h] [rbp-59h] BYREF
  __int64 v74; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v75; // [rsp+80h] [rbp-49h]
  _DWORD *v76; // [rsp+88h] [rbp-41h]
  __int64 v77; // [rsp+90h] [rbp-39h] BYREF
  __int64 v78; // [rsp+98h] [rbp-31h] BYREF
  int v79; // [rsp+A0h] [rbp-29h]
  int v80; // [rsp+A4h] [rbp-25h]
  __int64 v81; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-11h] BYREF
  PVOID P; // [rsp+C0h] [rbp-9h]
  UNICODE_STRING v85; // [rsp+C8h] [rbp-1h] BYREF
  char v87; // [rsp+120h] [rbp+57h]
  bool v88; // [rsp+128h] [rbp+5Fh]

  P = 0LL;
  LODWORD(v7) = 0;
  BugCheckParameter4 = 0xFFFFFFFF00000000uLL;
  v8 = a1;
  v70 = 0x100000000LL;
  v10 = -1;
  v72 = 0;
  v67 = 0;
  v79 = a6 & 1;
  v87 = 0;
  v74 = 0xFFFFFFFFLL;
  v85 = 0LL;
  v78 = 0xFFFFFFFFLL;
  v77 = 0xFFFFFFFFLL;
  Src = 0LL;
  v11 = 0LL;
  v81 = 0xFFFFFFFFLL;
  v80 = -1;
  v88 = (unsigned int)(a7 - 1) <= 1;
  v73 = 0xFFFFFFFFLL;
  v75 = 0;
  v69 = -1;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    P = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E5A6D43u);
    if ( !P )
      return 3221225626LL;
    LODWORD(v7) = 0;
  }
  while ( 2 )
  {
    v13 = (unsigned int *)(v8 + 20LL * (unsigned int)v7);
    v13[2] = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v11 )
        {
          if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
            sub_1406BF450(a4, &v77);
          else
            sub_1407C97C0(a4, (unsigned int *)&v77);
        }
        v14 = *v13;
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          v15 = (_DWORD *)sub_1406BF400(a4, v14, &v77);
        else
          v15 = (_DWORD *)sub_1407C9820(a4, v14, (unsigned int *)&v77);
        v16 = v13[2];
        v76 = v15;
        v11 = v15;
        v17 = sub_1406BF278(a4, v15, v16, &BugCheckParameter4);
        if ( v17 < 0 )
          goto LABEL_151;
        ++v13[2];
        v18 = BugCheckParameter4;
        v19 = v79;
        if ( (_DWORD)BugCheckParameter4 != -1 && ((_BYTE)v79 || (BugCheckParameter4 & 0x80000000) == 0LL) )
          break;
        if ( v88 && a7 != 2 )
        {
          v30 = v13[1];
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v31 = sub_1406BF400(BugCheckParameter3, v30, (_DWORD *)&BugCheckParameter4 + 1);
          else
            v31 = sub_1407C9820(BugCheckParameter3, v30, (unsigned int *)&BugCheckParameter4 + 1);
          if ( v19 )
            v32 = v11[6];
          else
            v32 = 0;
          if ( *(_DWORD *)(v31 + 20) + *(_DWORD *)(v31 + 24) > (unsigned int)(v11[5] + v32) )
            sub_140920AB4(a4, (__int64)P);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, (ULONG_PTR *)((char *)&BugCheckParameter4 + 4));
          else
            sub_1407C97C0(BugCheckParameter3, (unsigned int *)&BugCheckParameter4 + 1);
        }
        v33 = *((_BYTE *)v13 + 16);
        if ( (v33 & 1) != 0 )
        {
          v69 = ++v10;
          if ( v10 < v75 )
          {
            v37 = Src;
          }
          else
          {
            v34 = 1;
            if ( v75 + 1 <= (v75 >> 1) + v75 )
              v34 = v75 >> 1;
            v35 = v75 + v34;
            v36 = v35;
            v37 = Src;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v35, 0x20204D43u);
            if ( !PoolWithTag )
            {
              v17 = -1073741670;
LABEL_147:
              v49 = 0LL;
              v21 = 0LL;
              goto LABEL_153;
            }
            memmove(PoolWithTag, Src, 20LL * v75);
            if ( Src )
              ExFreePoolWithTag(Src, 0);
            v33 = *((_BYTE *)v13 + 16);
            v37 = PoolWithTag;
            v75 = v36;
            v10 = v69;
            Src = PoolWithTag;
          }
          v39 = v13[3];
          v13[2] = 0;
          v40 = HIDWORD(v70);
          v13[3] ^= (BYTE4(v70) ^ (unsigned __int8)v39) & 7;
          *((_BYTE *)v13 + 16) = v33 & 0xFE;
          v41 = 5LL * v10;
          *(_OWORD *)&v37[4 * v41] = *(_OWORD *)v13;
          *(_DWORD *)&v37[4 * v41 + 16] = v13[4];
        }
        else
        {
          v37 = Src;
          v40 = HIDWORD(v70);
        }
        v42 = v67;
        if ( v67 )
        {
          v43 = a1;
        }
        else
        {
          if ( v10 == -1 )
          {
            if ( (a6 & 0x40) != 0 )
              *(_DWORD *)(BugCheckParameter3 + 4760) = *(_DWORD *)(BugCheckParameter3 + 280);
            v17 = 0;
            goto LABEL_147;
          }
          v43 = a1;
          v44 = v10--;
          v69 = v10;
          v45 = 20 * v44;
          if ( ((v37[12] ^ v37[20 * v44 + 12]) & 7) != 0 )
          {
            *(_OWORD *)a1 = *(_OWORD *)v37;
            *(_DWORD *)(a1 + 16) = *((_DWORD *)v37 + 4);
            memmove(v37, v37 + 20, v45);
          }
          else
          {
            *(_OWORD *)a1 = *(_OWORD *)&v37[v45];
            *(_DWORD *)(a1 + 16) = *(_DWORD *)&v37[v45 + 16];
          }
          v42 = 1;
          if ( v40 == (int)(*(_DWORD *)(a1 + 12) << 29) >> 29 )
          {
            v46 = *(_DWORD *)(BugCheckParameter3 + 280);
            HIDWORD(v70) = v40 + 1;
            v69 = v10;
            if ( v40 == 1 )
              *(_DWORD *)(BugCheckParameter3 + 4752) = v46;
            else
              *(_DWORD *)(BugCheckParameter3 + 4756) = v46;
          }
        }
        v11 = v76;
        v47 = (unsigned int)(v42 - 1);
        v67 = v47;
        v13 = (unsigned int *)(v43 + 20 * v47);
        if ( v87 && (_DWORD)v47 == v80 )
        {
          v88 = 1;
          v87 = 0;
        }
      }
      if ( v88 )
        break;
LABEL_32:
      if ( (a6 & 0x40) == 0 )
        goto LABEL_118;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        v25 = sub_1406BF400(a4, v18, &v73);
      else
        v25 = sub_1407C9820(a4, v18, (unsigned int *)&v73);
      v26 = *(_BYTE *)(v25 + 12);
      if ( (v26 & 2) != 0 )
        v27 = 1;
      else
        v27 = ((v26 & 1) == 0) | 2;
      if ( v27 <= SHIDWORD(v70) )
      {
        v29 = *(_BYTE *)(a4 + 140) & 1;
        if ( v27 <= (int)(v13[3] << 29) >> 29 )
        {
          v28 = v29 == 0;
          goto LABEL_43;
        }
        if ( v29 )
          sub_1406BF450(a4, &v73);
        else
          sub_1407C97C0(a4, (unsigned int *)&v73);
LABEL_118:
        v17 = sub_1406D3BF0(a4, v18, BugCheckParameter3, v13[1], a6 | 4u, v65, 2u, (unsigned int *)&v70);
        if ( v17 >= 0 )
        {
          v54 = 1;
          if ( (v13[4] & 2) != 0 )
            goto LABEL_122;
          v17 = sub_14071F300(BugCheckParameter3, v13[1], 0);
          if ( v17 >= 0 )
          {
            *((_BYTE *)v13 + 16) |= 2u;
LABEL_122:
            v58 = v11[((unsigned __int64)v18 >> 31) + 5];
            v24 = v70;
            v17 = sub_140718244(BugCheckParameter3, v13[1], v70, v58);
            if ( v17 >= 0 )
            {
              v59 = v13[1];
              v83 = 0xFFFFFFFFLL;
              v82 = 0xFFFFFFFFLL;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v60 = sub_1406BF400(BugCheckParameter3, v59, &v83);
              else
                v60 = sub_1407C9820(BugCheckParameter3, v59, (unsigned int *)&v83);
              v61 = v60;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v62 = sub_1406BF400(BugCheckParameter3, v24, &v82);
              else
                v62 = sub_1407C9820(BugCheckParameter3, v24, (unsigned int *)&v82);
              v63 = 2 * *(_WORD *)(v62 + 72);
              if ( (*(_BYTE *)(v62 + 2) & 0x20) == 0 )
                v63 = *(_WORD *)(v62 + 72);
              if ( (unsigned __int16)*(_DWORD *)(v61 + 52) < (unsigned int)v63 )
                *(_WORD *)(v61 + 52) = v63;
              v64 = *(unsigned __int16 *)(v62 + 74);
              if ( *(_DWORD *)(v61 + 56) < v64 )
                *(_DWORD *)(v61 + 56) = v64;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                sub_1406BF450(BugCheckParameter3, &v82);
              else
                sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v82);
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                sub_1406BF450(BugCheckParameter3, &v83);
              else
                sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v83);
              if ( !v88 || !v87 )
                goto LABEL_112;
              v17 = sub_14091F9DC(BugCheckParameter3, v24);
              if ( v17 >= 0 )
              {
                v55 = v67;
                v80 = v67;
                v88 = 0;
                goto LABEL_113;
              }
            }
          }
        }
LABEL_151:
        v49 = 0LL;
        v21 = 0LL;
        goto LABEL_152;
      }
      *((_BYTE *)v13 + 16) |= 1u;
      v28 = (*(_BYTE *)(a4 + 140) & 1) == 0;
LABEL_43:
      if ( v28 )
        sub_1407C97C0(a4, (unsigned int *)&v73);
      else
        sub_1406BF450(a4, &v73);
    }
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      v20 = sub_1406BF400(a4, (unsigned int)BugCheckParameter4, &v74);
    else
      v20 = sub_1407C9820(a4, BugCheckParameter4, (unsigned int *)&v74);
    v21 = v20;
    sub_14091F960(v20);
    v22 = v13[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v23 = sub_1406BF400(BugCheckParameter3, v22, &v81);
    else
      v23 = sub_1407C9820(BugCheckParameter3, v22, (unsigned int *)&v81);
    LODWORD(v70) = 0;
    sub_14082F12C(BugCheckParameter3, v23, &v85, &v70);
    v24 = v70;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v81);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v81);
    if ( v24 == -1 )
    {
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        sub_1406BF450(a4, &v74);
      else
        sub_1407C97C0(a4, (unsigned int *)&v74);
      v18 = BugCheckParameter4;
      v11 = v76;
      v87 = 1;
      goto LABEL_32;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v48 = sub_1406BF400(BugCheckParameter3, v24, &v78);
    else
      v48 = sub_1407C9820(BugCheckParameter3, v24, (unsigned int *)&v78);
    v49 = v48;
    if ( a7 != 2 && *(_QWORD *)(v48 + 4) >= *(_QWORD *)(v21 + 4) )
      goto LABEL_105;
    if ( (v13[4] & 2) == 0 && *(_WORD *)(v21 + 74) > *(_WORD *)(v48 + 74) )
    {
      v17 = sub_14071F300(BugCheckParameter3, v13[1], 0);
      if ( v17 < 0 )
        break;
      *((_BYTE *)v13 + 16) |= 2u;
    }
    if ( a7 == 2 )
      v50 = sub_14091FCD8(a4, v24, v49);
    else
      v50 = sub_1409207EC(a4, v24, v49, v66);
    v17 = v50;
    if ( v50 >= 0 )
    {
      v51 = v13[1];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v52 = sub_1406BF400(BugCheckParameter3, v51, (_DWORD *)&BugCheckParameter4 + 1);
      else
        v52 = sub_1407C9820(BugCheckParameter3, v51, (unsigned int *)&BugCheckParameter4 + 1);
      v53 = *(unsigned __int16 *)(v49 + 74);
      if ( v53 > *(_DWORD *)(v52 + 56) )
        *(_DWORD *)(v52 + 56) = v53;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, (ULONG_PTR *)((char *)&BugCheckParameter4 + 4));
      else
        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&BugCheckParameter4 + 1);
      *(_QWORD *)(v49 + 4) = *(_QWORD *)(v21 + 4);
LABEL_105:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v78);
      else
        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v78);
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        sub_1406BF450(a4, &v74);
      else
        sub_1407C97C0(a4, (unsigned int *)&v74);
      v18 = BugCheckParameter4;
      v54 = 0;
LABEL_112:
      v55 = v67;
LABEL_113:
      v7 = (unsigned int)(v55 + 1);
      v67 = v7;
      if ( (unsigned int)v7 < 0x200 )
      {
        v8 = a1;
        v56 = 5 * v7;
        v57 = *(_BYTE *)(a1 + 20 * v7 + 16);
        *(_DWORD *)(a1 + 4 * v56 + 12) &= 0xFFFFFFF8;
        *(_DWORD *)(a1 + 4 * v56 + 4) = v24;
        v11 = v76;
        *(_BYTE *)(a1 + 4 * v56 + 16) = v57 & 0xFC | (2 * v54);
        v10 = v69;
        *(_DWORD *)(a1 + 4 * v56) = v18;
        continue;
      }
      v21 = 0LL;
      v17 = -1073741670;
      v49 = 0LL;
    }
    break;
  }
LABEL_152:
  v37 = Src;
LABEL_153:
  if ( v76 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      sub_1406BF450(a4, &v77);
    else
      sub_1407C97C0(a4, (unsigned int *)&v77);
  }
  if ( v21 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      sub_1406BF450(a4, &v74);
    else
      sub_1407C97C0(a4, (unsigned int *)&v74);
  }
  if ( v49 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v78);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v78);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  return (unsigned int)v17;
}
