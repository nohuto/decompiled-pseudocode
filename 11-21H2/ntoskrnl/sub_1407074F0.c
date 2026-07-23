/*
 * XREFs of sub_1407074F0 @ 0x1407074F0
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028DA5C @ 0x14028DA5C (sub_14028DA5C.c)
 *     sub_14028DC08 @ 0x14028DC08 (sub_14028DC08.c)
 *     sub_14029C6F4 @ 0x14029C6F4 (sub_14029C6F4.c)
 *     sub_14029C790 @ 0x14029C790 (sub_14029C790.c)
 *     sub_14029E74C @ 0x14029E74C (sub_14029E74C.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058C1D4 @ 0x14058C1D4 (sub_14058C1D4.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 *     sub_1407070B0 @ 0x1407070B0 (sub_1407070B0.c)
 *     sub_140707460 @ 0x140707460 (sub_140707460.c)
 *     sub_140707CF0 @ 0x140707CF0 (sub_140707CF0.c)
 *     sub_1407091D8 @ 0x1407091D8 (sub_1407091D8.c)
 *     sub_1407092C0 @ 0x1407092C0 (sub_1407092C0.c)
 *     sub_1407FB090 @ 0x1407FB090 (sub_1407FB090.c)
 *     sub_1407FB114 @ 0x1407FB114 (sub_1407FB114.c)
 *     sub_14097023C @ 0x14097023C (sub_14097023C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407074F0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // r11d
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // r14d
  unsigned int v16; // r14d
  int v17; // eax
  unsigned __int64 v18; // r15
  __int16 v19; // ax
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // r12
  SIZE_T v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  int v26; // edx
  char *v27; // rdi
  _QWORD *v28; // rsi
  __int64 v29; // r8
  ULONG_PTR v30; // r13
  int v31; // edi
  _OWORD *v32; // rsi
  __int64 v33; // rax
  _QWORD *v34; // rcx
  unsigned __int64 v35; // r14
  int v36; // edi
  int v37; // edi
  __int64 v38; // r13
  __int64 v39; // rdx
  unsigned int v40; // r15d
  unsigned int v41; // r12d
  __int64 v42; // rsi
  unsigned __int64 v43; // rdi
  __int64 v44; // rcx
  int v45; // r14d
  __int64 v46; // r15
  __int64 *v47; // r9
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // r15
  unsigned int v51; // r14d
  int v52; // r12d
  __int64 v53; // r14
  __int64 v55; // rcx
  unsigned int v56; // r8d
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned int v59; // edx
  unsigned __int16 v60; // r8
  _WORD *v61; // rcx
  unsigned int v62; // edx
  _QWORD *P; // [rsp+30h] [rbp-128h]
  __int64 v64; // [rsp+38h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-118h]
  unsigned int v66; // [rsp+48h] [rbp-110h]
  unsigned int Size; // [rsp+4Ch] [rbp-10Ch]
  int Size_4; // [rsp+50h] [rbp-108h]
  unsigned int v69; // [rsp+54h] [rbp-104h]
  __int64 v71; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v72; // [rsp+68h] [rbp-F0h]
  ULONG_PTR v73; // [rsp+70h] [rbp-E8h]
  __int64 v74; // [rsp+78h] [rbp-E0h] BYREF
  PVOID v75; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v76; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+90h] [rbp-C8h]
  struct _KTHREAD *v78; // [rsp+98h] [rbp-C0h]
  __int64 v79; // [rsp+A0h] [rbp-B8h]
  __int64 v80; // [rsp+A8h] [rbp-B0h]
  __int64 v81; // [rsp+B0h] [rbp-A8h]
  ULONG_PTR v82[10]; // [rsp+C0h] [rbp-98h] BYREF

  v77 = a1;
  memset(v82, 0, sizeof(v82));
  v74 = 0LL;
  v10 = 2;
  v75 = 0LL;
  v81 = *(_QWORD *)(a1 + 56);
  if ( sub_14029E74C(*(_WORD *)(v81 + 48)) )
  {
    v10 = 66;
    if ( (*(_BYTE *)(v11 + 44) & 1) != 0 )
      return 0LL;
    v12 = (*(_WORD *)(v11 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v12 = -1073741701;
  }
  v66 = v12;
  v13 = *(unsigned int *)(a2 + 88);
  LODWORD(v74) = v13;
  v14 = *(unsigned int *)(a2 + 92);
  Size = *(_DWORD *)(a2 + 92);
  HIDWORD(v74) = Size;
  if ( (_DWORD)v13 )
  {
    if ( !(_DWORD)v14 )
      return v12;
  }
  else
  {
    if ( (_DWORD)v14 )
      return v12;
    v10 &= ~2u;
  }
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v64 = *(_QWORD *)a1;
  v79 = v64;
  v80 = *(_QWORD *)(v64 + 96);
  v15 = 52;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) == 0 )
    v15 = 48;
  v16 = a3 + v15;
  v17 = 3;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) == 0 )
    v17 = 7;
  if ( (v17 & v16) != 0 )
    return v12;
  v18 = *(_QWORD *)(a1 + 32);
  if ( v10 >= 0x40 && !a4 )
  {
    v19 = *(_WORD *)(v11 + 46);
    if ( (v19 & 0x40) == 0 && dword_140D051B0 != -1 && (v19 & 0x1000) == 0 )
      return 0LL;
  }
  v20 = *(_DWORD *)(a1 + 8);
  v21 = v20;
  v69 = v20;
  if ( (v10 & 2) == 0 )
  {
    v21 = (v16 >> 12) + 1;
    v69 = v21;
  }
  v72 = v20 << 12;
  if ( (int)v13 + (int)v14 > v20 << 12 )
    return v12;
  if ( (v10 & 2) != 0 )
  {
    if ( (int)v13 + (int)v14 <= (unsigned int)v13 )
      return v12;
    v22 = v13;
    if ( v13 + v18 <= v18 )
      return v12;
  }
  else
  {
    v22 = v13;
  }
  if ( (v10 & 2) != 0 && v18 + v22 + v14 <= v18 )
    return v12;
  v76 = 8LL * v21;
  v23 = v76 + v14 + 96;
  v71 = 0LL;
  v73 = 0LL;
  Size_4 = 0;
  CurrentThread = KeGetCurrentThread();
  v78 = CurrentThread;
  v24 = sub_1402828F0(256, v23, 0x65526D4Du);
  P = v24;
  if ( !v24 )
    return 3221225626LL;
  v25 = v24;
  do
    v25 += 512;
  while ( v25 < (_QWORD *)((char *)v24 + v23) );
  v26 = (int)v24;
  *((_BYTE *)v24 + 64) = 0;
  *((_DWORD *)v24 + 14) = v69;
  v24[3] = 0LL;
  if ( (v10 & 2) == 0 )
  {
    v28 = v24 + 9;
    v30 = v64;
    goto LABEL_30;
  }
  if ( (int)sub_1406F3884((__int64 *)v64, 3, (__int64)v82) < 0 )
  {
    ExFreePoolWithTag(P, 0);
    sub_14058C1D4(v64, 0);
    return 0LL;
  }
  v27 = (char *)v82[0];
  v73 = v82[0];
  Size_4 = sub_14029C6F4((__int64)CurrentThread, 1);
  v10 |= 1u;
  v28 = P + 9;
  v29 = a2;
  v30 = v64;
  v31 = sub_140706ABC(v64, v27, v29, LODWORD(v82[2]) << 12, (__int64)(P + 9));
  if ( v31 < 0 )
  {
    ExFreePoolWithTag(P, 0);
    v53 = (__int64)CurrentThread;
    goto LABEL_75;
  }
  v26 = (int)P;
LABEL_30:
  v31 = sub_1407092C0(v77, v26, a4, a6, (__int64)&v71);
  if ( v31 < 0 )
  {
    sub_1407FB114(v28);
    ExFreePoolWithTag(P, 0);
    v53 = (__int64)CurrentThread;
    if ( !a4 )
      v31 = v66;
    goto LABEL_75;
  }
  v31 = sub_1407091D8(v30, v71, v28);
  if ( v31 >= 0 )
  {
    v32 = P;
    *((_DWORD *)P + 15) = v16;
    P[5] = v71 - v18;
    if ( a5 == -1 )
      v33 = 0LL;
    else
      v33 = a5 - v18;
    P[6] = v33;
    v34 = P + 12;
    *P = P + 12;
    v35 = (unsigned __int64)P + v76 + 96;
    P[4] = v35;
    v36 = 24;
    if ( !P[11] )
      v36 = 16;
    v37 = v10 | v36;
    LOBYTE(v10) = v37;
    if ( (v37 & 2) != 0 )
    {
      memmove((void *)v35, (const void *)(v22 + v73), Size);
      LODWORD(v38) = 0;
      v39 = (__int64)P;
      if ( (v37 & 8) != 0 )
      {
        v55 = P[11];
        if ( v55 )
        {
          LODWORD(v38) = v82[2] & 0xFFFFF;
          if ( (v82[2] & 0xFFFFF) != 0 )
          {
            while ( 1 )
            {
              v38 = (unsigned int)(v38 - 1);
              if ( *(_QWORD *)(v55 + 8 * v38 + 56) )
                break;
              if ( !(_DWORD)v38 )
                goto LABEL_119;
            }
          }
          else
          {
LABEL_119:
            LODWORD(v38) = 0;
          }
        }
      }
      v40 = Size;
      v41 = 0;
      v10 = v37;
      if ( Size )
      {
        while ( v40 >= 0xA )
        {
          v42 = *(unsigned int *)(v35 + 4);
          if ( (unsigned int)v42 > v40 || (v42 & 1) != 0 || (unsigned int)v42 < 8 )
            goto LABEL_109;
          v43 = *(unsigned int *)v35;
          if ( (v43 & 0xFFF) != 0 )
            v10 &= ~0x10u;
          if ( (int)v43 + 4096 < (unsigned int)v43 || (int)v43 + 4096 > v72 || (unsigned int)v43 < v41 )
            goto LABEL_109;
          if ( (_DWORD)v42 == 8 )
          {
            v40 -= 8;
            v10 &= ~0x10u;
          }
          else
          {
            v44 = v64;
            if ( (dword_140D06880 & 0x20000) != 0 && (*(_DWORD *)(v64 + 92) & 0xC0000) != 0 )
            {
              v76 = 0LL;
              if ( (sub_140286F90(v64, v43, (unsigned __int64 *)&v76)[8] & 4) != 0 )
              {
                v31 = -1073741701;
                goto LABEL_125;
              }
              v39 = (__int64)P;
              v44 = v64;
            }
            if ( (unsigned int)v43 >> 12 > (unsigned int)v38 )
              LODWORD(v38) = (unsigned int)v43 >> 12;
            *(_QWORD *)(v39 + 8 * (v43 >> 12) + 96) |= v35;
            v41 = (v43 & 0xFFFFF000) + 4096;
            v40 -= v42;
            v31 = sub_140707CF0(v73, v43, (unsigned int)(v42 - 8) >> 1, (int)v35 + 8, v44, v39);
            if ( v31 < 0 )
            {
              v32 = P;
              v30 = v64;
              v53 = (__int64)CurrentThread;
              if ( v31 == -1073741207 )
              {
                v31 = 0;
              }
              else if ( v31 == -1073741701 )
              {
                v31 = v66;
              }
              goto LABEL_73;
            }
            v10 |= 4u;
          }
          v35 += v42;
          if ( !v40 )
            goto LABEL_56;
          v39 = (__int64)P;
        }
        if ( v40 == 8 )
        {
          v45 = Size - 8;
          goto LABEL_57;
        }
LABEL_109:
        v31 = v66;
LABEL_125:
        v32 = P;
        v30 = v64;
        goto LABEL_108;
      }
LABEL_56:
      v45 = Size;
LABEL_57:
      sub_1406F39F8(v82);
      v46 = (__int64)CurrentThread;
      sub_14029C790((__int64)CurrentThread, Size_4);
      LOBYTE(v10) = v10 & 0xFE;
      v32 = P;
      v47 = (__int64 *)P[2];
      if ( v47 )
      {
        while ( 1 )
        {
          v56 = *((_DWORD *)v47 + 3);
          v57 = P[((unsigned __int64)v56 >> 12) + 12];
          if ( v56 >> 12 > (unsigned int)v38 )
            LODWORD(v38) = *((_DWORD *)v47 + 3) >> 12;
          if ( v57 > 1 )
          {
            v58 = v57 & 0xFFFFFFFFFFFFFFFEuLL;
            v59 = *(_DWORD *)(v58 + 4) - 8;
            v60 = v56 & 0xFFF;
            v61 = (_WORD *)(v58 + 8);
            v62 = v59 >> 1;
            if ( v62 )
              break;
          }
LABEL_100:
          v47 = (__int64 *)*v47;
          if ( !v47 )
            goto LABEL_58;
        }
        while ( *v61 < 0x1000u || (unsigned __int16)(*v61 & 0xFFF) >= v60 )
        {
          ++v61;
          if ( !--v62 )
            goto LABEL_100;
        }
        v31 = v66;
        v30 = v64;
        v53 = (__int64)CurrentThread;
LABEL_73:
        if ( (v10 & 0x20) == 0 )
          sub_1407FB090(v30, v32);
        goto LABEL_75;
      }
LABEL_58:
      sub_140707460(v64, (unsigned int *)&v74, (__int64)P);
      *((_DWORD *)P + 14) = v38 + 1;
      if ( (v10 & 0x14) == 0x14 )
        v32 = sub_1407070B0((__int64)P, v45);
      v34 = v32 + 6;
      v30 = v64;
    }
    else
    {
      v46 = (__int64)CurrentThread;
    }
    v34[(unsigned __int64)*((unsigned int *)v32 + 15) >> 12] |= 1uLL;
    if ( (*(_BYTE *)(v30 + 62) & 0xC) == 4 && (v31 = sub_14097023C(v30, v32, &v75), v31 < 0) )
    {
LABEL_108:
      v53 = (__int64)CurrentThread;
    }
    else
    {
      LOBYTE(v10) = v10 | 0x20;
      sub_14028DC08(v46, (__int64)v32);
      v48 = v80;
      *(_QWORD *)(v80 + 32) = v32;
      v49 = v71;
      *(_QWORD *)(v77 + 32) = v71;
      v50 = v81;
      *(_QWORD *)v81 += *((_QWORD *)v32 + 5);
      *(_DWORD *)(v30 + 92) |= 0x400000u;
      if ( (*(_DWORD *)(v30 + 56) & 0x800) != 0 )
      {
        sub_14058C1D4(v30, 0);
        v49 = v71;
      }
      if ( (dword_140D06880 & 0x2000) != 0
        && (*(_DWORD *)(v30 + 92) & 0xC0000) != 0
        && (qword_140C1B920
          ? (v31 = sub_14042A5E0(*(_QWORD *)(v48 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v49))
          : (v31 = -1073741637),
            v31 < 0) )
      {
        v52 = a6;
      }
      else
      {
        if ( a4 )
          v51 = -1;
        else
          v51 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
        v52 = a6;
        if ( !a6 || (v10 & 8) != 0 )
        {
          if ( (*(_BYTE *)(v30 + 62) & 0xC) != 4 || (v31 = sub_140336B30(v30, (unsigned __int64)v75, 8u, v51), v31 >= 0) )
            v31 = sub_140336B30(v30, 0LL, 2u, v51);
        }
        else
        {
          v31 = 0;
        }
      }
      v53 = (__int64)CurrentThread;
      sub_14028DA5C((__int64)CurrentThread, (__int64)v32);
      if ( v31 >= 0 && !v52 )
        *(_BYTE *)(v50 + 51) |= 4u;
    }
    goto LABEL_73;
  }
  sub_1407FB090(v30, P);
  v53 = (__int64)CurrentThread;
LABEL_75:
  if ( (v10 & 1) != 0 )
  {
    sub_1406F39F8(v82);
    sub_14029C790(v53, Size_4);
  }
  if ( v75 )
    ExFreePoolWithTag(v75, 0);
  return (unsigned int)v31;
}
