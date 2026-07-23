/*
 * XREFs of sub_1407350A0 @ 0x1407350A0
 * Callers:
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14068038C @ 0x14068038C (sub_14068038C.c)
 *     sub_140681174 @ 0x140681174 (sub_140681174.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_1406CE3EC @ 0x1406CE3EC (sub_1406CE3EC.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_140717780 @ 0x140717780 (sub_140717780.c)
 *     sub_14071B8C0 @ 0x14071B8C0 (sub_14071B8C0.c)
 *     sub_14071BADC @ 0x14071BADC (sub_14071BADC.c)
 *     sub_14071BB4C @ 0x14071BB4C (sub_14071BB4C.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_14071C050 @ 0x14071C050 (sub_14071C050.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_140853BB8 @ 0x140853BB8 (sub_140853BB8.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

__int64 __fastcall sub_1407350A0(
        volatile signed __int64 *BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        ULONG_PTR *a6,
        char *a7,
        _WORD *a8)
{
  unsigned int v8; // edi
  __int16 v9; // r8
  __int64 v10; // r14
  unsigned int v11; // r15d
  volatile signed __int64 *v12; // rbx
  char *v13; // rsi
  __int16 v14; // dx
  char v15; // r12
  signed __int64 v16; // rax
  ULONG_PTR v17; // r13
  unsigned int v18; // ebx
  unsigned int v19; // ebp
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rax
  int v24; // edi
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 i; // r15
  unsigned int v30; // ebp
  volatile signed __int32 *v31; // rbx
  ULONG_PTR v32; // rcx
  __int16 v33; // r8
  __int64 v35; // r14
  __int64 v36; // rax
  __int16 v37; // r10
  unsigned __int8 *v38; // rsi
  __int16 v39; // r11
  unsigned __int16 *v40; // rdi
  unsigned __int16 v41; // dx
  __int16 v42; // bp
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  unsigned int v45; // ebp
  ULONG_PTR v46; // rcx
  bool v47; // zf
  signed __int64 v48; // rax
  __int64 v49; // rcx
  signed __int64 v50; // rcx
  __int64 v51; // r10
  unsigned __int64 v52; // rdx
  signed __int64 v53; // r9
  bool v54; // r8
  unsigned __int64 v55; // rax
  __int64 v56; // rdi
  unsigned __int8 CurrentIrql; // si
  char v58; // al
  __int64 v59; // rcx
  _BYTE *v60; // rdx
  _QWORD *v61; // rax
  unsigned __int64 v62; // rdi
  signed __int32 v63; // eax
  _QWORD *v64; // rax
  unsigned __int16 v65; // dx
  unsigned __int8 v66; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v68; // r9
  int v69; // eax
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  int v74; // edx
  unsigned int v75; // ebx
  _QWORD *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rax
  signed __int32 v80[8]; // [rsp+0h] [rbp-D8h] BYREF
  char v81; // [rsp+30h] [rbp-A8h]
  __int16 v82; // [rsp+32h] [rbp-A6h]
  __int16 v83; // [rsp+34h] [rbp-A4h]
  unsigned int v84; // [rsp+38h] [rbp-A0h]
  unsigned int v85; // [rsp+3Ch] [rbp-9Ch]
  int v86; // [rsp+40h] [rbp-98h]
  PVOID P; // [rsp+50h] [rbp-88h]
  volatile signed __int64 *v88; // [rsp+58h] [rbp-80h]
  __int64 v89; // [rsp+60h] [rbp-78h]
  __int128 v90; // [rsp+68h] [rbp-70h] BYREF
  _LIST_ENTRY ListHead; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v93; // [rsp+E8h] [rbp+10h]

  v93 = a2;
  v88 = BugCheckParameter4;
  v8 = a3;
  v82 = 0;
  v9 = 0;
  v10 = a4;
  v11 = a2;
  v12 = BugCheckParameter4;
  while ( 1 )
  {
    v13 = (char *)*((_QWORD *)v12 + 4);
    v14 = 0;
    P = v13;
    v15 = 0;
    v83 = 0;
    v81 = 0;
    v16 = _InterlockedIncrement64(v12);
    if ( !v16 )
      KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)v12, 0LL, 0LL);
    if ( v16 == 1 )
      goto LABEL_128;
    v84 = v11;
    v17 = (ULONG_PTR)v12;
    v18 = *((_DWORD *)v12 + 4);
    v19 = v11;
    if ( v11 >= v8 )
    {
      v30 = 0;
      goto LABEL_17;
    }
    v20 = v11;
    v89 = v11;
LABEL_6:
    if ( v19 >= 8 )
    {
      v22 = *(_QWORD *)(v10 + 160) + 16 * (v19 - 8 + 6LL);
      v21 = *(_DWORD *)(*(_QWORD *)(v10 + 160) + 4LL * (v19 - 8));
    }
    else
    {
      v21 = *(_DWORD *)(v10 + 4 * v20);
      v22 = v10 + 16 * (v19 + 2LL);
    }
    v18 = v21 + 37 * v18;
    v86 = v18 ^ (v18 >> 9);
    v23 = *((_QWORD *)v13 + 206);
    v85 = 101027 * v86;
    v24 = v85 ^ (v85 >> 9);
    ExAcquirePushLockSharedEx(v23 + 24LL * (v24 & (unsigned int)(*((_DWORD *)v13 + 414) - 1)), 0LL);
    _m_prefetchw(v13 + 4232);
    v25 = *((_DWORD *)v13 + 1058);
    if ( !v25 )
LABEL_119:
      KeBugCheckEx(0x51u, 0x17uLL, (ULONG_PTR)v13, 9uLL, v18);
    while ( 1 )
    {
      v26 = v25;
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)v13 + 1058, v25 + 1, v25);
      if ( v26 == v25 )
        break;
      if ( !v25 )
        goto LABEL_119;
    }
    v27 = *((_QWORD *)v13 + 206);
    v28 = v24 & (unsigned int)(*((_DWORD *)v13 + 414) - 1);
    v90 = 0LL;
    for ( i = *(_QWORD *)(v27 + 24 * v28 + 16); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == v18 )
      {
        v35 = i - 16;
        if ( *(_QWORD *)(i + 56) == v17 )
        {
          v36 = *(_QWORD *)(v35 + 80);
          v37 = *(_WORD *)(v36 + 24);
          v38 = (unsigned __int8 *)(v36 + 26);
          if ( (*(_DWORD *)v36 & 1) != 0 )
          {
            v39 = *(_WORD *)v22 >> 1;
            v40 = *(unsigned __int16 **)(v22 + 8);
            if ( v39 )
            {
              while ( v37 )
              {
                v41 = *v40++;
                v42 = *v38++;
                if ( v41 != v42 )
                {
                  if ( v41 >= 0x61u )
                  {
                    if ( v41 > 0x7Au )
                    {
                      v64 = sub_140347DB0();
                      v41 = sub_1403477B0(v64[154], v65);
                    }
                    else
                    {
                      v41 -= 32;
                    }
                  }
                  if ( v41 != v42 )
                    goto LABEL_12;
                }
                --v37;
                if ( !--v39 )
                  break;
              }
            }
            if ( v39 == v37 )
            {
LABEL_28:
              if ( i == 16 )
                break;
              v43 = *(_QWORD *)v35;
              if ( *(_QWORD *)v35 )
              {
                while ( v43 != -1 )
                {
                  v44 = v43;
                  v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v35, v43 + 1, v43);
                  if ( v44 == v43 )
                    goto LABEL_32;
                  if ( !v43 )
                    goto LABEL_62;
                }
LABEL_117:
                KeBugCheckEx(0x51u, 0x24uLL, i - 16, 0LL, 0LL);
              }
LABEL_62:
              sub_140AB42D0(i - 16);
              if ( (*(_DWORD *)(v35 + 8) & 0x80000) != 0 )
                KeBugCheckEx(0x51u, 0x20uLL, i - 16, 0LL, 0LL);
              if ( !_InterlockedIncrement64((volatile signed __int64 *)v35) )
                goto LABEL_117;
              if ( (*(_BYTE *)(v35 + 64) & 2) != 0 )
              {
                v56 = sub_140347C10((__int64)&stru_140C49340, 0LL);
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)&stru_140C49340, 0) )
                  sub_14029EF4C((__int64)&stru_140C49340, v56);
                if ( v56 )
                  *(_BYTE *)(v56 + 18) = 1;
                *(&stru_140C49340 + 1) = (ULONG_PTR)KeGetCurrentThread();
                *((_DWORD *)&stru_140C49340 + 12) = CurrentIrql;
                v58 = *(_BYTE *)(v35 + 64);
                if ( (v58 & 2) != 0 )
                {
                  v59 = v35 + 224;
                  if ( (v58 & 4) != 0 )
                  {
                    **(_BYTE **)v59 = 1;
                    *(_BYTE *)(v35 + 64) &= ~4u;
                  }
                  else
                  {
                    v60 = *(_BYTE **)v59;
                    v61 = *(_QWORD **)(v35 + 232);
                    if ( *(_QWORD *)(*(_QWORD *)v59 + 8LL) != v59 || *v61 != v59 )
                      __fastfail(3u);
                    --dword_140C4E8B0;
                    *v61 = v60;
                    *((_QWORD *)v60 + 1) = v61;
                    --qword_140D3D2C8;
                  }
                  *(_QWORD *)(v35 + 232) = v35 + 224;
                  *(_QWORD *)v59 = v59;
                  _InterlockedOr(v80, 0);
                  *(_BYTE *)(v35 + 64) &= ~2u;
                }
                v62 = *((unsigned __int8 *)&stru_140C49340 + 48);
                *(&stru_140C49340 + 1) = 0LL;
                v63 = _InterlockedCompareExchange((volatile signed __int32 *)&stru_140C49340, 1, 0);
                if ( v63 )
                  sub_140359548((volatile signed __int32 *)&stru_140C49340, v63);
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v66 = KeGetCurrentIrql();
                    if ( v66 <= 0xFu && (unsigned __int8)v62 <= 0xFu && v66 >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v68 = *((_QWORD *)CurrentPrcb + 4375);
                      v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v62 + 1));
                      v47 = (v69 & *(_DWORD *)(v68 + 20)) == 0;
                      *(_DWORD *)(v68 + 20) &= v69;
                      if ( v47 )
                        sub_140418E4C((__int64)CurrentPrcb);
                    }
                  }
                }
                __writecr8(v62);
                sub_1402AFC00((ULONG_PTR)&stru_140C49340);
              }
              sub_140AB4300(i - 16);
LABEL_32:
              v8 = a3;
              v45 = v84;
              v13 = (char *)P;
              if ( v84 == a3 - 1 )
              {
                v81 = 1;
              }
              else
              {
                v46 = *((_QWORD *)P + 206)
                    + 24 * ((unsigned int)(*((_DWORD *)P + 414) - 1) & (v85 ^ ((unsigned __int64)v85 >> 9)));
                *(_QWORD *)(v46 + 8) = 0LL;
                ExReleasePushLockEx(v46, 0LL);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 1058, 0xFFFFFFFF) == 1 )
                  sub_1406BBAD8(v13);
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                goto LABEL_120;
              v17 = i - 16;
              v14 = v83 + 1;
              v47 = (*(_DWORD *)(v35 + 184) & 0x100000) == 0;
              v10 = a4;
              ++v83;
              if ( !v47 || (v19 = v45 + 1, v20 = v89 + 1, v84 = v19, ++v89, v19 >= a3) )
              {
                v30 = 0;
                goto LABEL_16;
              }
              goto LABEL_6;
            }
          }
          else
          {
            *((_QWORD *)&v90 + 1) = v36 + 26;
            LOWORD(v90) = v37;
            WORD1(v90) = v37;
            if ( !(unsigned int)sub_140717780(v22, (__int64)&v90, 2) )
              goto LABEL_28;
          }
        }
      }
LABEL_12:
      ;
    }
    v30 = 0;
    v31 = (volatile signed __int32 *)P;
    v32 = *((_QWORD *)P + 206)
        + 24
        * ((unsigned int)(*((_DWORD *)P + 414) - 1) & ((unsigned int)(101027 * v86) ^ ((unsigned __int64)(unsigned int)(101027 * v86) >> 9)));
    *(_QWORD *)(v32 + 8) = 0LL;
    ExReleasePushLockEx(v32, 0LL);
    if ( _InterlockedExchangeAdd(v31 + 1058, 0xFFFFFFFF) == 1 )
      sub_1406BBAD8(v31);
    v14 = v83;
    v8 = a3;
    v10 = a4;
LABEL_16:
    v9 = v82;
    v15 = v81;
    v11 = v93;
LABEL_17:
    if ( v88 != BugCheckParameter4 && _InterlockedExchangeAdd64(v88, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_120:
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    v33 = v14 + v9;
    v11 += v14;
    v82 = v33;
    v93 = v11;
    if ( (*(_DWORD *)(v17 + 184) & 0x20000) == 0 )
      goto LABEL_19;
    sub_140AB42D0(v17);
    if ( (*(_DWORD *)(v17 + 184) & 0x20000) == 0 )
      goto LABEL_82;
    v12 = *(volatile signed __int64 **)(v17 + 104);
    v88 = v12;
    v48 = _InterlockedIncrement64(v12);
    if ( !v48 )
      KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)v12, 0LL, 0LL);
    if ( v48 == 1 )
LABEL_128:
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v49 = *((_QWORD *)v12 + 4);
    if ( (*(_DWORD *)(v49 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(v49 + 4168) != KeGetCurrentThread() )
    {
      v30 = -1073741772;
      v70 = (__int64)a5;
      if ( byte_140C54C95
        && (struct _KTHREAD *)qword_140C54C98 != KeGetCurrentThread()
        && a5
        && (v71 = sub_140681174(v10, v11 - 1), (unsigned __int8)sub_140853BB8(v71, v72, v73, a5 + 34)) )
      {
        *a5 |= 0x100u;
        v30 = 259;
        v74 = 393984;
      }
      else
      {
        v74 = 394240;
      }
LABEL_124:
      sub_14068038C(v70, v74, v30);
      sub_14071C0FC(v12);
      sub_140AB4300(v17);
      if ( v15 )
        sub_14071C050(v17);
      sub_14071BF40(v17);
      return v30;
    }
    if ( (v12[1] & 0x40000) != 0 )
    {
      v70 = (__int64)a5;
      v30 = -1073740763;
      v74 = 394496;
      goto LABEL_124;
    }
    sub_140AB4300(v17);
    if ( v15 )
      sub_14071C050(v17);
    ListHead = 0LL;
    InitializeListHead(&ListHead);
    v50 = *(_QWORD *)v17;
    v51 = *(_QWORD *)(v17 + 32);
    if ( *(_QWORD *)v17 <= 1uLL )
    {
LABEL_110:
      v75 = *(_DWORD *)(v17 + 16);
      v76 = *(_QWORD **)(v17 + 32);
      sub_14071BB4C(v17);
      sub_1407C0854(v17);
      v77 = *(_QWORD *)(v17 + 192);
      v78 = 0LL;
      if ( v77 )
      {
        v79 = *(_QWORD *)(v77 + 24);
        if ( v79 )
        {
          v78 = *(_QWORD *)(v79 + 16);
          sub_140AB4300(v17);
          sub_1407C0854(v78);
          sub_1407C0854(v17);
        }
      }
      sub_1406FEA54(v17, (__int64)&ListHead, 0);
      sub_140AB4300(v17);
      if ( v78 )
        sub_140AB4300(v78);
      sub_14071B8C0(v76, v75);
      sub_140346C60(&ListHead);
      v12 = v88;
      v8 = a3;
    }
    else
    {
      while ( 1 )
      {
        v52 = v50 - 1;
        v53 = v50;
        v54 = v50 == 3 && (*(_DWORD *)(v17 + 184) & 0x40000) != 0 && *(_BYTE *)(v51 + 2944) == 1;
        v55 = _InterlockedCompareExchange64((volatile signed __int64 *)v17, v52, v50);
        v50 = v55;
        if ( v55 == v53 )
          break;
        if ( v55 <= 1 )
          goto LABEL_110;
      }
      if ( v55 < v52 )
        KeBugCheckEx(0x51u, 0x25uLL, v17, 0LL, 0LL);
      if ( v54 )
        sub_1406CE3EC(v51);
    }
    if ( v15 )
      break;
    v9 = v82;
  }
  v17 = (ULONG_PTR)v12;
  sub_14071BADC((ULONG_PTR)v12);
  sub_140AB42D0(v12);
LABEL_82:
  sub_140AB4300(v17);
  v33 = v82;
LABEL_19:
  *a6 = v17;
  *a7 = v15;
  *a8 = v33;
  return v30;
}
