/*
 * XREFs of sub_14027E810 @ 0x14027E810
 * Callers:
 *     sub_140366DA8 @ 0x140366DA8 (sub_140366DA8.c)
 *     sub_1403C84E4 @ 0x1403C84E4 (sub_1403C84E4.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 *     sub_140977DCC @ 0x140977DCC (sub_140977DCC.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140229640 @ 0x140229640 (sub_140229640.c)
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 *     sub_14024B768 @ 0x14024B768 (sub_14024B768.c)
 *     sub_14026ED30 @ 0x14026ED30 (sub_14026ED30.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_140274D10 @ 0x140274D10 (sub_140274D10.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_1402802DC @ 0x1402802DC (sub_1402802DC.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_1402CCC80 @ 0x1402CCC80 (sub_1402CCC80.c)
 *     sub_1402CF100 @ 0x1402CF100 (sub_1402CF100.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     sub_14033BEC0 @ 0x14033BEC0 (sub_14033BEC0.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403B2AB0 @ 0x1403B2AB0 (sub_1403B2AB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405905CC @ 0x1405905CC (sub_1405905CC.c)
 */

__int64 __fastcall sub_14027E810(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, char a5, _QWORD *a6)
{
  _QWORD *v6; // r15
  __int64 v9; // r14
  char v11; // r13
  int v12; // eax
  unsigned __int64 v13; // rdi
  char v14; // r8
  int v15; // r9d
  unsigned __int64 v16; // r12
  unsigned __int8 v17; // bl
  signed __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // rdi
  unsigned __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r15
  int v26; // edi
  _QWORD *v27; // r14
  bool v28; // cf
  int v30; // eax
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  char v39; // rdx^7
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned __int8 v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh]
  signed __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v50; // [rsp+50h] [rbp-B0h]
  _QWORD *v51; // [rsp+58h] [rbp-A8h]
  int v52; // [rsp+60h] [rbp-A0h]
  int v53; // [rsp+64h] [rbp-9Ch]
  int v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  int v56; // [rsp+78h] [rbp-88h] BYREF
  int v57; // [rsp+7Ch] [rbp-84h]
  __int128 v58; // [rsp+80h] [rbp-80h] BYREF
  __int128 v59; // [rsp+90h] [rbp-70h]
  _QWORD v60[3]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v61; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  _QWORD v64[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v65; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v66; // [rsp+E4h] [rbp-1Ch]
  __int16 v67; // [rsp+E6h] [rbp-1Ah]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  __int64 v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  _BYTE v71[152]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a6;
  v63 = a2;
  v49 = a1;
  v9 = a1;
  v51 = a6;
  v67 = 0;
  v61 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  memset(v71, 0, sizeof(v71));
  v11 = a5;
  v47 = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 56) & 0x800) == 0 )
      goto LABEL_3;
  }
  else if ( (a5 & 0x20) == 0 )
  {
    goto LABEL_3;
  }
  v47 = 1;
LABEL_3:
  v50 = 0LL;
  v52 = 0;
  v12 = 10;
  v57 = a5 & 1;
  v13 = 0LL;
  DWORD2(v59) = 10;
  if ( (a5 & 1) == 0 )
  {
    v12 = 14;
    DWORD2(v59) = 14;
  }
  v54 = a5 & 4;
  if ( (a5 & 4) != 0 )
    DWORD2(v59) = v12 | 0x10;
  v14 = *(_BYTE *)(v9 + 184) & 7;
  v15 = 0;
  v62 = 0LL;
  v53 = 0;
  if ( (unsigned __int8)(v14 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 && dword_140C52B68 )
      v52 = 1;
    v15 = 2;
    v53 = 2;
  }
  v55 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v9 + 174));
  v68 = 20LL;
  v65 = v15;
  v66 = 0;
  v69 = 0LL;
  v70 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(xmmword_140D06900) & 1) != 0 )
  {
    v60[2] = (unsigned int)a4;
    v60[0] = 0LL;
    v60[1] = (__int64)(a3 << 25) >> 16;
    if ( v14 == 4 )
    {
      v60[0] = 6LL;
    }
    else if ( v14 == 3 )
    {
      v60[0] = 4LL;
    }
    else
    {
      v60[0] = v60[0] & 0xFFF0000000000007uLL | (16LL
                                               * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23)
                                                                             + 1368LL)
                                                                 + 8LL)) | 7;
    }
    v64[1] = 24LL;
    v64[0] = v60;
    sub_14035EDE4((unsigned int)v64, 1, 536870913, 633, 289413892);
  }
  v16 = a3 + 8 * a4;
  v46 = sub_1402CF4F0(v9);
  v17 = v46;
  if ( a3 < v16 )
  {
    while ( 1 )
    {
      if ( v13 )
      {
        if ( (a3 & 0xFFF) != 0 )
          goto LABEL_13;
        sub_14032F1B0(&v65);
        v6[1] += sub_14032F750(&v58);
        sub_14020D8D0(v9, v13);
      }
      v50 = sub_14027D6E0(v9, a3, &v61);
      if ( v50 != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        sub_14020D8D0(v9, v50);
        v50 = 0LL;
        a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_32:
        v28 = a3 < v16;
        goto LABEL_33;
      }
LABEL_13:
      v18 = *(_QWORD *)a3;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL
        && a3 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v35 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v35 + 8 * ((a3 >> 3) & 0x1FF));
          v37 = v18 | 0x20;
          if ( (v36 & 0x20) == 0 )
            v37 = *(_QWORD *)a3;
          v18 = v37;
          if ( (v36 & 0x42) != 0 )
            v18 = v37 | 0x42;
        }
      }
      v48 = v18;
      if ( v18 )
      {
        if ( (v18 & 1) != 0 )
        {
          v19 = (__int64)((a3 << 25) - v62) >> 16;
          v20 = 48 * (((unsigned __int64)sub_140317A10(&v48) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v21 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
          if ( (a5 & 8) != 0 )
          {
            if ( (unsigned int)sub_1403B2AB0(v20) )
            {
              v56 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
              {
                do
                  sub_1402F32E0(&v56);
                while ( *(__int64 *)(v20 + 24) < 0 );
              }
              *(_BYTE *)(v20 + 35) &= ~0x20u;
              _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v21 == v55 )
                ++v6[1];
            }
            goto LABEL_29;
          }
          LODWORD(v48) = 0;
          v22 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v23 = *(_QWORD *)v22;
          if ( (unsigned int)sub_140317A80(v22) )
          {
            if ( (dword_140D06880 & 0xC00000) != 0 )
            {
              v24 = *((_QWORD *)KeGetCurrentThread() + 23);
              if ( *(_BYTE *)(v24 + 912) != 1 && (v23 & 1) != 0 && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
              {
                v24 = *((_QWORD *)KeGetCurrentThread() + 23);
                v38 = *(_QWORD *)(v24 + 1928);
                if ( v38 )
                {
                  v39 = HIBYTE(v23);
                  v40 = *(_QWORD *)(v38 + 8 * ((v22 >> 3) & 0x1FF));
                  v24 = (unsigned __int8)v40;
                  LOBYTE(v24) = v40 & 0x20;
                  if ( (v40 & 0x20) == 0 )
                    v39 = HIBYTE(v23);
                  HIBYTE(v23) = v39;
                  if ( (v40 & 0x42) != 0 )
                    HIBYTE(v23) = v39;
                }
              }
            }
          }
          if ( (HIBYTE(v23) & 0xF) != 9 )
          {
            v25 = v49;
            if ( v52 )
              sub_140274D10(v49, (_BYTE *)a3);
            if ( (HIBYTE(v23) & 0xF) == 8 )
              v26 = 1;
            else
              v26 = v48;
            if ( (unsigned int)sub_1402CF100(&v58, v25, a3) )
            {
              v27 = v51;
            }
            else
            {
              v32 = sub_14032F750(&v58);
              v27 = v51;
              v51[1] += v32;
              sub_1402CF100(&v58, v25, a3);
            }
            if ( *(__int64 *)(v20 + 40) < 0 )
            {
              v34 = *(_QWORD *)(v20 + 16);
              if ( (v34 & 0x400) == 0 || (v18 & 0x200) != 0 )
                goto LABEL_75;
              if ( qword_140C50780 && (v34 & 0x10) == 0 )
                v34 &= ~qword_140C50780;
              if ( (*(_DWORD *)(*(_QWORD *)(v34 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_75:
                ++v27[4];
            }
            else
            {
              ++v51[4];
            }
            v6 = v51;
            if ( !v26 )
              goto LABEL_29;
            goto LABEL_61;
          }
          sub_14026ED30(v24, v19);
          v6 = v51;
          sub_14033BEC0(v49, a3, v54 | 0x10u, v51);
          if ( v57 )
          {
LABEL_60:
            sub_1402CF280(&v65, v19, 1LL, 0LL);
            goto LABEL_61;
          }
          v48 = 0LL;
          sub_1402CCC80(&v48);
          v41 = v48;
          if ( (unsigned int)sub_140317A80(a3) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              if ( !HIBYTE(word_140C51864) && (v41 & 1) != 0 )
                v41 |= 0x8000000000000000uLL;
              *(_QWORD *)a3 = v41;
              sub_1402294F0(a3, v41);
LABEL_131:
              v42 = v48;
              if ( qword_140C50780 && (v48 & 0x10) == 0 )
                v42 = v48 & ~qword_140C50780;
              if ( (v42 & 0xFFFFFFFF00000000uLL) == 0 )
                goto LABEL_60;
LABEL_61:
              ++*v6;
              if ( v53 == 2 )
                sub_140229640(v55, 1uLL, 1);
LABEL_29:
              v11 = a5;
              v9 = v49;
              goto LABEL_30;
            }
            if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v41 & 1) != 0 )
              v41 |= 0x8000000000000000uLL;
          }
          *(_QWORD *)a3 = v41;
          goto LABEL_131;
        }
        if ( (v18 & 0x400) != 0 )
        {
          if ( (a5 & 8) != 0 )
            goto LABEL_30;
          if ( (v18 & 2) != 0 )
          {
LABEL_50:
            ++v6[4];
          }
          else if ( (unsigned __int8)sub_1402802DC(v18) )
          {
            ++v6[4];
            if ( qword_140C50780 && (v18 & 0x10) == 0 )
              v18 &= ~qword_140C50780;
            v43 = **(_QWORD **)((((v18 >> 16) - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
            if ( (unsigned int)sub_1402399A8(v9, v18 >> 16) == 3 && v43 == v55 )
              ++v6[1];
          }
          else
          {
            if ( v47 )
              goto LABEL_50;
            if ( qword_140C50780 && (v18 & 0x10) == 0 )
              v18 &= ~qword_140C50780;
            if ( sub_14024B768(v63, v18 >> 16) )
              goto LABEL_50;
          }
          if ( (unsigned int)sub_140317A80(a3) && (unsigned int)sub_140229550() )
          {
            *(_QWORD *)a3 = 0LL;
            sub_1402294F0(a3, 0LL);
          }
          else
          {
            *(_QWORD *)a3 = 0LL;
          }
          goto LABEL_30;
        }
        if ( (v18 & 0x800) != 0 )
        {
          v33 = sub_140315D60(a3);
          if ( !v33 )
            goto LABEL_32;
          if ( (a5 & 8) != 0 )
          {
            if ( (unsigned int)sub_1403B2AB0(v33) )
            {
              *(_BYTE *)(v44 + 35) &= ~0x20u;
              ++v6[1];
            }
            _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            if ( v54 && (unsigned int)sub_1403B2AB0(v33) )
            {
              sub_1405905CC();
              *(_BYTE *)(v45 + 35) &= ~0x20u;
            }
            if ( (unsigned int)sub_1402C3100(a3) == 3 )
              ++v6[1];
            ++v6[4];
          }
        }
        else if ( (v18 & 0x3E0) != 0 && (v11 & 8) == 0 )
        {
          sub_140274E48(v55, v18, 1);
          if ( (unsigned int)sub_140317A80(a3) && (unsigned int)sub_140229550() )
          {
            *(_QWORD *)a3 = 0LL;
            sub_1402294F0(a3, 0LL);
          }
          else
          {
            *(_QWORD *)a3 = 0LL;
          }
          ++v6[4];
        }
      }
LABEL_30:
      a3 += 8LL;
      v28 = a3 < v16;
      if ( a3 != v16 )
      {
        if ( (a3 & 0x78) == 0 )
        {
          v30 = sub_1403531F0(v9);
          v31 = v50;
          if ( v30 || (unsigned int)sub_140274C80(v9, v50) || KeShouldYieldProcessor() )
          {
            sub_14032F1B0(&v65);
            v6[1] += sub_14032F750(&v58);
            sub_14020D8D0(v9, v31);
            sub_1402B0CE0(v9, v46);
            v50 = 0LL;
            sub_1402CF4F0(v9);
          }
        }
        goto LABEL_32;
      }
LABEL_33:
      v13 = v50;
      if ( !v28 )
      {
        v17 = v46;
        break;
      }
    }
  }
  sub_14032F1B0(&v65);
  if ( v13 )
  {
    v6[1] += sub_14032F750(&v58);
    sub_14020D8D0(v9, v13);
  }
  return sub_1402B0CE0(v9, v17);
}
