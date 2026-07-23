/*
 * XREFs of sub_140323D70 @ 0x140323D70
 * Callers:
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 *     sub_14033C5F0 @ 0x14033C5F0 (sub_14033C5F0.c)
 *     sub_14033E280 @ 0x14033E280 (sub_14033E280.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1405C37D0 @ 0x1405C37D0 (sub_1405C37D0.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140222280 @ 0x140222280 (sub_140222280.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14023261C @ 0x14023261C (sub_14023261C.c)
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402680C0 @ 0x1402680C0 (sub_1402680C0.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_14027DAD4 @ 0x14027DAD4 (sub_14027DAD4.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     sub_1405ADCD4 @ 0x1405ADCD4 (sub_1405ADCD4.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 *     sub_14062E40C @ 0x14062E40C (sub_14062E40C.c)
 *     sub_140AF4308 @ 0x140AF4308 (sub_140AF4308.c)
 */

__int64 __fastcall sub_140323D70(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        unsigned __int64 *a8)
{
  unsigned int v8; // r15d
  __int64 v11; // r11
  __int64 CurrentIrql; // r8
  unsigned int v13; // ebx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int v15; // eax
  int v16; // r10d
  volatile signed __int32 *v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // ebp
  __int64 v21; // r13
  unsigned __int64 v22; // rdi
  int v23; // r15d
  unsigned __int8 v24; // r14
  unsigned __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // si
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  int v33; // eax
  bool v34; // zf
  __int64 v35; // r12
  signed __int32 v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rcx
  __int64 v42; // rsi
  int v43; // eax
  __int64 v44; // rsi
  unsigned int v45; // r9d
  unsigned __int8 *v46; // rbx
  unsigned int v47; // ebp
  ULONG_PTR v48; // rdi
  int v49; // eax
  unsigned __int64 v50; // rbx
  signed __int64 v51; // rdx
  unsigned __int64 v52; // r9
  signed __int64 v53; // r8
  signed __int64 v54; // rcx
  ULONG_PTR v55; // r12
  struct _KPRCB *v56; // rax
  __int64 v57; // rax
  char v58; // cl
  int v59; // eax
  unsigned __int64 v60; // rdi
  unsigned __int8 v61; // r14
  __int64 v62; // r9
  struct _KPRCB *v63; // rbp
  __int64 v64; // rsi
  unsigned __int64 v65; // rbx
  unsigned __int64 *v66; // rdx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rdi
  unsigned __int64 *v69; // r15
  unsigned __int64 v70; // rbx
  int v71; // eax
  signed __int64 v72; // rdx
  signed __int64 v73; // r8
  signed __int64 v74; // rcx
  signed __int64 v75; // rdx
  __int64 v76; // r12
  signed __int64 v77; // r8
  signed __int64 v78; // rcx
  _DWORD *v79; // rax
  struct _KPRCB *v80; // rcx
  int v81; // r8d
  unsigned int v82; // r9d
  unsigned int v83; // r10d
  int v84; // edx
  unsigned int v85; // ebx
  __int64 v86; // rax
  unsigned int v87; // ecx
  __int64 v88; // rax
  signed __int32 v90[8]; // [rsp+0h] [rbp-238h] BYREF
  unsigned int v91; // [rsp+44h] [rbp-1F4h]
  unsigned int v92; // [rsp+48h] [rbp-1F0h]
  unsigned int v93; // [rsp+4Ch] [rbp-1ECh]
  int v94; // [rsp+50h] [rbp-1E8h]
  __int64 v95; // [rsp+58h] [rbp-1E0h]
  unsigned int v96; // [rsp+60h] [rbp-1D8h]
  int v97; // [rsp+64h] [rbp-1D4h]
  unsigned int v98; // [rsp+68h] [rbp-1D0h]
  unsigned __int64 v99; // [rsp+70h] [rbp-1C8h]
  unsigned __int64 v100; // [rsp+78h] [rbp-1C0h]
  __int64 v101; // [rsp+80h] [rbp-1B8h]
  unsigned __int64 v102; // [rsp+88h] [rbp-1B0h]
  volatile signed __int32 *v103; // [rsp+90h] [rbp-1A8h]
  __int64 v104; // [rsp+98h] [rbp-1A0h]
  __int64 v105; // [rsp+A0h] [rbp-198h]
  __int64 v106; // [rsp+A8h] [rbp-190h]
  ULONG_PTR v107; // [rsp+B0h] [rbp-188h]
  __int64 v108; // [rsp+B8h] [rbp-180h]
  unsigned __int64 *v109; // [rsp+C0h] [rbp-178h]
  __int64 v110; // [rsp+C8h] [rbp-170h]
  _OWORD v111[8]; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v112; // [rsp+150h] [rbp-E8h]
  int v113; // [rsp+158h] [rbp-E0h]
  _QWORD v114[16]; // [rsp+160h] [rbp-D8h] BYREF

  v8 = a5;
  v109 = a8;
  memset(v111, 0, sizeof(v111));
  v112 = 0LL;
  v113 = 0;
  v11 = a1;
  v108 = a2;
  v95 = a1;
  v91 = a5;
  CurrentIrql = KeGetCurrentIrql();
  v101 = CurrentIrql;
  v13 = a4 - 1;
  if ( a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = v13 << byte_140C506CC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)];
    v15 = *((_DWORD *)CurrentPrcb + 8342);
  }
  v16 = (1 << byte_140C506CD) - 1;
  v96 = v15;
  v94 = v16;
  if ( a2 && (*(_BYTE *)(a2 + 184) & 7u) < 2 )
    v17 = (volatile signed __int32 *)a2;
  else
    v17 = (volatile signed __int32 *)((char *)CurrentPrcb + 33360);
  v103 = v17;
  if ( !a4 )
    v13 = *(_DWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 33364);
  v18 = *a8;
  v19 = a7;
  v20 = a6 & 0xFFFFF0FF;
  v99 = 0x3FFFFFFFFFLL;
  v92 = a6 & 0xFFFFF0FF;
  v21 = 0LL;
  v102 = v18;
  v22 = 0LL;
  v104 = 0LL;
  v93 = 0;
  v100 = 0LL;
  if ( a7 != -1 )
  {
    v20 = a6 & 0xFFFFB0FF | 0x4000;
    goto LABEL_45;
  }
  if ( v18 >= 0x10 )
  {
    DWORD2(v111[0]) = 16;
    *(_QWORD *)&v111[0] = 1LL;
    v23 = 1;
    v24 = 17;
    v25 = v18;
    while ( 1 )
    {
      _InterlockedIncrement(v17);
      if ( (unsigned __int8)CurrentIrql < 2u )
      {
        v24 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && v24 <= 0xFu )
          {
            v26 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v26 + 20) |= (-1 << (v24 + 1)) & 4;
          }
        }
      }
      if ( v25 < 0x200 || v23 != 1 )
        goto LABEL_24;
      v27 = sub_140267060(v11, a3, 1u, v13, v91, 4, v111);
      if ( !v27 )
        break;
LABEL_25:
      sub_1402C6AA0(v27, v23, 2, 1, 0LL, 0LL, 0LL);
LABEL_26:
      v30 = v101;
      if ( (unsigned __int8)v101 < 2u )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && v24 <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v17 = (volatile signed __int32 *)(-1LL << (v24 + 1));
              v29 = *((_QWORD *)v32 + 4375);
              v33 = ~(unsigned __int16)v17;
              v34 = (v33 & *(_DWORD *)(v29 + 20)) == 0;
              v28 = (unsigned int)v33 & *(_DWORD *)(v29 + 20);
              *(_DWORD *)(v29 + 20) = v28;
              if ( v34 )
                sub_140418E4C(v32);
            }
          }
        }
        __writecr8(v24);
      }
      if ( !v27 )
        goto LABEL_38;
      a3 += qword_14001C780[v23] << 12;
      sub_140313CA0(
        48 * (qword_14001C780[v23] - 0x5555555555555555LL * ((v27 + 0x220000000000LL) >> 4)) - 0x220000000030LL,
        v99,
        0);
      v21 = v27;
      v17 = v103;
      v11 = v95;
      v99 = 0xAAAAAAAAAAAAAAABuLL * ((v27 + 0x220000000000LL) >> 4);
      v22 = qword_14001C780[v23] + v100;
      v25 = v102 - v22;
      v100 = v22;
      if ( v102 - v22 < 0x10 )
      {
        v30 = v101;
LABEL_38:
        if ( DWORD1(v111[0]) )
          sub_1405B7E7C(v111, v17, v28, v29);
        if ( v30 >= 2u && ((unsigned int)sub_1403531F0(v108) || KeShouldYieldProcessor()) )
        {
          *v109 = v22;
          return v21;
        }
        v16 = v94;
        v18 = v102;
        v11 = v95;
        v20 = v92;
        v19 = -1LL;
        v8 = v91;
        goto LABEL_45;
      }
      LOBYTE(CurrentIrql) = v101;
    }
    v11 = v95;
LABEL_24:
    v23 = 2;
    v27 = sub_140267060(v11, a3, 2u, v13, v91, 4, v111);
    if ( !v27 )
      goto LABEL_26;
    goto LABEL_25;
  }
LABEL_45:
  if ( v22 < v18 )
  {
    v35 = v99;
    while ( 1 )
    {
      v36 = v16 & _InterlockedExchangeAdd(v103, 1u);
      v37 = v36 | v96;
      if ( v19 != -1 )
      {
        v38 = 15LL;
        if ( (unsigned int)dword_140C50738 < 0xFuLL )
          v38 = (unsigned int)dword_140C50738;
        v39 = v38 & v19;
        v37 = v39 | v37 & 0xFFFFFFF0;
        v105 = sub_1403250B0(v11, v37, v20);
        v40 = v105;
        v41 = v39 + 1;
        if ( v105 != -1 )
        {
          v19 = v38 & v41;
          a7 = v38 & v41;
          goto LABEL_53;
        }
        v42 = (unsigned int)v38;
        v20 &= ~0x4000u;
        v22 = v100;
        v19 = v41 & v42;
        a7 = v19;
      }
      v105 = sub_1403250B0(v95, v37, v20);
      v40 = v105;
      if ( v105 == -1 )
        break;
LABEL_53:
      v43 = v20 | 0x4000;
      if ( v19 == -1 )
        v43 = v20;
      v20 = v43;
      v92 = v43;
      v21 = 48 * v40 - 0x220000000000LL;
      v44 = *(unsigned __int8 *)(v21 + 34) >> 6;
      v97 = v44;
      if ( (_DWORD)v44 == v8 || ((unsigned __int8)((1 << v44) | (1 << v8)) & (unsigned __int8)byte_140C50818) == 0 )
      {
        if ( (*(_DWORD *)(v21 + 16) & 0x3E0LL) == 0 || (a6 & 0x100) == 0 )
          goto LABEL_119;
        v46 = (unsigned __int8 *)(v21 + 34);
        v106 = v21 + 34;
        v47 = dword_140C507D8[4 * v44 + (int)v8];
        v98 = v47;
        if ( v47 != (_DWORD)v44 )
          sub_140267E78(48 * v40 - 0x220000000000LL, v47, 0);
        v48 = 0LL;
        if ( !*((_QWORD *)KeGetCurrentPrcb() + 4272) )
        {
          v48 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
          if ( v48 )
          {
            v49 = sub_14026C61C(4, 48 * v40 - 0x220000000000LL);
            v50 = sub_1402CBD10(v48, v40, v49 | 0xA0000000);
            if ( sub_140317A80(v48) )
            {
              if ( (unsigned int)sub_140229550() )
              {
                if ( !HIBYTE(word_140C51864) && (v50 & 1) != 0 )
                  v50 |= 0x8000000000000000uLL;
                *(_QWORD *)v48 = v50;
                sub_1402294F0(v48, v50);
                goto LABEL_76;
              }
              if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v50 & 1) != 0 )
                v50 |= 0x8000000000000000uLL;
            }
            *(_QWORD *)v48 = v50;
LABEL_76:
            sub_140424F50((__int64)(v48 << 25) >> 16, 4096LL);
            sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v48, 1u);
LABEL_77:
            if ( v47 != (_DWORD)v44 && v47 != v8 && v48 )
              sub_140267E78(v21, v44, 0);
            *(_QWORD *)(v21 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
            _InterlockedOr(v90, 0);
            v51 = *(_QWORD *)(v21 + 24);
            v52 = (unsigned __int64)(dword_140D31080 & 7) << 59;
            v53 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v21 + 24),
                    v52 | v51 & 0xC7FFFFFFFFFFFFFFuLL,
                    v51);
            if ( v51 != v53 )
            {
              do
              {
                v54 = v53;
                v53 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v21 + 24),
                        v52 | v53 & 0xC7FFFFFFFFFFFFFFuLL,
                        v53);
              }
              while ( v54 != v53 );
            }
            v20 = v92;
LABEL_119:
            v71 = *(unsigned __int8 *)(v21 + 34) >> 6;
            if ( v71 != v8 )
            {
              if ( v71 == 1
                || v71 != 3
                && ((v86 = (*(_QWORD *)(v21 + 24) >> 59) & 7LL, ((*(_QWORD *)(v21 + 24) >> 59) & 7) == 0)
                 || (_InterlockedOr(v90, 0), v87 = ((_BYTE)dword_140D31080 - (_BYTE)v86) & 7, v87 <= 2)
                 && ((v86 & 1) != 0 || v87 < 2)) )
              {
                if ( (*(_DWORD *)(v21 + 16) & 0x3E0LL) != 0 )
                  sub_1402359C4(v40, 1, v8);
                *(_QWORD *)(v21 + 16) = v104;
                v104 = v21;
LABEL_125:
                v35 = v99;
                goto LABEL_126;
              }
              sub_140267E78(v21, v8, 4);
            }
            v72 = *(_QWORD *)(v21 + 24);
            v73 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 24), v72 & 0xC7FFFFFFFFFFFFFFuLL, v72);
            if ( v72 != v73 )
            {
              do
              {
                v74 = v73;
                v73 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v21 + 24),
                        v73 & 0xC7FFFFFFFFFFFFFFuLL,
                        v73);
              }
              while ( v74 != v73 );
            }
            goto LABEL_125;
          }
        }
        v55 = v40;
        v56 = KeGetCurrentPrcb();
        if ( *((_QWORD *)v56 + 4272) )
          v48 = 1LL;
        v107 = v48;
        v57 = *((_QWORD *)v56 + 4272);
        v110 = v57;
        while ( 2 )
        {
          if ( v57 )
          {
            v58 = 4;
            v59 = *v46 >> 6;
            if ( !v59 || v59 == 3 )
            {
              v58 = 12;
            }
            else if ( v59 == 2 )
            {
              v58 = 28;
            }
            v60 = ((v55 & 0xFFFFFFFFFFLL) << 12) & 0xFAFFFFFFFFFFFEFFuLL | qword_140016200[v58 & 0x1F] & 0xFAF0000000000E7FuLL | 0x21 | ((unsigned __int64)(word_140C51864 & 1) << 8) | 0xA00000000000042LL;
            v61 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v61 <= 0xFu )
            {
              v62 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v62 + 20) |= (-1 << (v61 + 1)) & 4;
            }
            v63 = KeGetCurrentPrcb();
            v64 = *((_QWORD *)v63 + 4199);
            if ( !v64
              || (v65 = sub_1402C6260((unsigned __int64 *)(v64 + 12448), 3u, 1LL, 0),
                  v66 = (unsigned __int64 *)(((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                  *(_QWORD *)(v64 + 12344) = v66,
                  !v65) )
            {
              v65 = (*((_QWORD *)v63 + 4272) & 0xFFFFFFFFFFFFF000uLL) + ((*((_QWORD *)v63 + 4272) & 0xFFFLL) << 12);
              v66 = (unsigned __int64 *)(((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            }
            *v66 = v60;
            sub_140424F50(v65, 4096LL);
            sub_1402BEDD0(v65, v61);
            v40 = v105;
LABEL_117:
            ++v55;
            v46 = (unsigned __int8 *)(v106 + 48);
            v106 += 48LL;
            v57 = v110;
            if ( v55 != v40 )
            {
              v48 = v107;
              LODWORD(v44) = v97;
              v47 = v98;
              v8 = v91;
              goto LABEL_77;
            }
            continue;
          }
          break;
        }
        v67 = sub_140AF4308();
        v68 = v67;
        if ( !v67 )
          KeBugCheckEx(0x1Au, 0x3030305uLL, v55, 0LL, 0LL);
        v69 = (unsigned __int64 *)(((v67 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v70 = sub_1402CBD10((unsigned __int64)v69, v55, -1610612732);
        if ( sub_140317A80((unsigned __int64)v69) )
        {
          if ( (unsigned int)sub_140229550() )
          {
            if ( !HIBYTE(word_140C51864) && (v70 & 1) != 0 )
              v70 |= 0x8000000000000000uLL;
            *v69 = v70;
            sub_1402294F0((__int64)v69, v70);
            goto LABEL_112;
          }
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v70 & 1) != 0 )
            v70 |= 0x8000000000000000uLL;
        }
        *v69 = v70;
LABEL_112:
        sub_140424F50(v68, 4096LL);
        if ( sub_140317A80((unsigned __int64)v69) && (unsigned int)sub_140229550() )
        {
          *v69 = 0LL;
          sub_1402294F0((__int64)v69, 0LL);
        }
        else
        {
          *v69 = 0LL;
        }
        std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v68, 0, 1u);
        goto LABEL_117;
      }
      v45 = v93;
      v114[v93] = v40;
      v93 = v45 + 1;
      if ( v45 == 15 )
      {
        sub_1405ADCD4(v114, 16LL, v8);
        v93 = 0;
      }
LABEL_126:
      v75 = *(_QWORD *)(v21 + 24);
      v76 = v35 & 0xFFFFFFFFFFLL;
      v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 24), v76 | v75 & 0xFFFFFF0000000000uLL, v75);
      if ( v75 != v77 )
      {
        do
        {
          v78 = v77;
          v77 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v21 + 24),
                  v76 | v77 & 0xFFFFFF0000000000uLL,
                  v77);
        }
        while ( v78 != v77 );
      }
      v35 = v40;
      v22 = v100 + 1;
      v99 = v40;
      ++v100;
      if ( (unsigned __int8)v101 < 2u )
        goto LABEL_160;
      v79 = &unk_140C53D00;
      if ( (*(_BYTE *)(v108 + 184) & 7) != 2 )
        v79 = (_DWORD *)(v108 + 192);
      if ( (*v79 & 0x40000000) != 0 )
        break;
      v80 = KeGetCurrentPrcb();
      v81 = *((_DWORD *)v80 + 3311);
      v82 = *((_DWORD *)v80 + 8107);
      v83 = *((_DWORD *)v80 + 8279);
      if ( (v81 & 1) == 0 )
      {
        v84 = 0;
        if ( (v81 & 0x1E) != 0 )
        {
          v85 = 2;
          goto LABEL_157;
        }
        if ( *((_BYTE *)v80 + 13241) )
        {
          v85 = 3;
          goto LABEL_157;
        }
        v88 = *((_QWORD *)v80 + 2);
        if ( v88 && v88 != *((_QWORD *)v80 + 1) )
        {
          v85 = 4;
          goto LABEL_157;
        }
LABEL_150:
        if ( v82 <= 7 )
          goto LABEL_160;
        if ( !v84 )
          goto LABEL_156;
        goto LABEL_152;
      }
      v84 = 1;
      if ( v83 <= 7 )
        goto LABEL_150;
      if ( *((_BYTE *)v80 + 13241) )
      {
        v85 = 1;
        goto LABEL_157;
      }
LABEL_152:
      if ( (v81 & 0x1E) != 0 )
      {
        v85 = 5;
        goto LABEL_157;
      }
      if ( *((_QWORD *)v80 + 1) != *((_QWORD *)v80 + 3) )
      {
        v85 = 6;
        goto LABEL_157;
      }
LABEL_156:
      _disable();
      *((_DWORD *)v80 + 8107) = 0;
      *((_DWORD *)v80 + 8279) = 0;
      sub_140222280((__int64)v80);
      _enable();
      v85 = 0;
LABEL_157:
      if ( (DWORD1(xmmword_140D06900) & 0x4000000) != 0 )
        sub_14062E40C(v85, v82, v83);
      if ( v85 )
        break;
LABEL_160:
      if ( v22 >= v102 )
        break;
      v19 = a7;
      v11 = v95;
      v16 = v94;
    }
  }
  *v109 = v22;
  if ( v93 )
    sub_1405ADCD4(v114, v93, v8);
  if ( v104 )
    sub_1402680C0(v104, v8, 0LL);
  return v21;
}
