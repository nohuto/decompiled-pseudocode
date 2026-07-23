/*
 * XREFs of sub_14026F180 @ 0x14026F180
 * Callers:
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 * Callees:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_140227E94 @ 0x140227E94 (sub_140227E94.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402302B0 @ 0x1402302B0 (sub_1402302B0.c)
 *     sub_140232E08 @ 0x140232E08 (sub_140232E08.c)
 *     sub_14026FA0C @ 0x14026FA0C (sub_14026FA0C.c)
 *     sub_1402708F4 @ 0x1402708F4 (sub_1402708F4.c)
 *     sub_14027449C @ 0x14027449C (sub_14027449C.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_140276D2C @ 0x140276D2C (sub_140276D2C.c)
 *     sub_14027FE9C @ 0x14027FE9C (sub_14027FE9C.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CD940 @ 0x1402CD940 (sub_1402CD940.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     sub_1402E48A0 @ 0x1402E48A0 (sub_1402E48A0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_14033E0D4 @ 0x14033E0D4 (sub_14033E0D4.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14026F180(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rsi
  _SLIST_ENTRY *v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // eax
  volatile LONG *v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rsi
  ULONG_PTR v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r13
  void *v22; // rax
  unsigned int v23; // ecx
  ULONG_PTR *v24; // r15
  unsigned int v25; // r9d
  __int64 v26; // rcx
  ULONG_PTR v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  ULONG_PTR v30; // rdi
  ULONG_PTR *v32; // rcx
  ULONG_PTR v33; // r13
  bool v34; // zf
  __int64 v35; // rdi
  ULONG_PTR *v36; // r13
  ULONG_PTR v37; // rax
  __int64 v38; // rsi
  unsigned __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  struct _KTHREAD *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rax
  _QWORD *v48; // rsi
  unsigned __int64 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // rbx
  int v52; // eax
  ULONG_PTR v53; // rbx
  unsigned __int8 v54; // bl
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  size_t v58; // rbx
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v63; // r9
  int v64; // eax
  unsigned int v65; // [rsp+20h] [rbp-91h]
  void *v66; // [rsp+28h] [rbp-89h]
  ULONG_PTR *v67; // [rsp+28h] [rbp-89h]
  __int64 v68; // [rsp+28h] [rbp-89h]
  __int64 v69; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int64 v70; // [rsp+38h] [rbp-79h]
  size_t v71; // [rsp+40h] [rbp-71h]
  ULONG_PTR v72; // [rsp+48h] [rbp-69h] BYREF
  ULONG_PTR BugCheckParameter2[10]; // [rsp+50h] [rbp-61h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-11h]
  __int64 v76; // [rsp+108h] [rbp+57h] BYREF
  void *Src; // [rsp+110h] [rbp+5Fh]
  unsigned __int64 v78; // [rsp+118h] [rbp+67h]

  v78 = a4;
  v76 = a2;
  LOBYTE(v76) = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v10 = *a3;
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 224);
  LOBYTE(v13) = 0;
  v72 = 0LL;
  v69 = v10;
  v15 = sub_1402CD940(v14, v12);
  v16 = (volatile LONG *)(v10 + 72);
  v70 = sub_1403342D0(a3, a4, v15);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
  v17 = *(_QWORD *)(v10 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4F100);
  v18 = **(_QWORD **)(v17 + 40);
  if ( !v18 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v18 + 72) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
LABEL_18:
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    goto LABEL_19;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  LOBYTE(v13) = 1;
  if ( *(_QWORD *)(v18 + 32) && (*(_DWORD *)(v18 + 56) & 3) == 0 )
  {
    v71 = sub_14033E0D4(a3);
    v21 = v70 >> 12;
    v13 = 9;
    v22 = (void *)(v18 + 128);
    Src = (void *)(v18 + 128);
    v23 = *(_DWORD *)(v18 + 172);
    if ( (unsigned int)(v70 >> 12) != (unsigned int)((v71 - 1) >> 12) )
      v13 = v20;
    if ( (unsigned int)v21 >= v23 )
    {
      while ( 1 )
      {
        v22 = (void *)*((_QWORD *)v22 + 2);
        LODWORD(v21) = v21 - v23;
        Src = v22;
        if ( !v22 )
          break;
        v23 = *((_DWORD *)v22 + 11);
        if ( (unsigned int)v21 < v23 )
          goto LABEL_9;
      }
LABEL_16:
      if ( (v13 & 1) == 0 )
        goto LABEL_17;
      goto LABEL_32;
    }
LABEL_9:
    v24 = BugCheckParameter2;
    v65 = 2;
    v25 = 0;
    while ( 1 )
    {
      if ( !*((_DWORD *)v22 + 26) )
        goto LABEL_16;
      v26 = *((_QWORD *)v22 + 1);
      v20 = 0x7FFFFFFFF8LL;
      if ( !v26 )
        goto LABEL_16;
      v27 = v26 + 8LL * (unsigned int)v21;
      v66 = (void *)v27;
      if ( !v27 )
        goto LABEL_16;
      v28 = (v27 >> 9) & 0x7FFFFFFFF8LL;
      v29 = (v78 >> 9) & 0x7FFFFFFFF8LL;
      v24[2] = v27;
      if ( v28 == v29 || v24 != BugCheckParameter2 && v28 == ((*(v24 - 3) >> 9) & 0x7FFFFFFFF8LL) )
      {
        sub_1402708F4(v27, v25, v24);
      }
      else
      {
        if ( (int)sub_14026FA0C(v27, v28, &v72, v24) < 0 )
          goto LABEL_16;
        v24[1] = v72;
      }
      v19 = *v24;
      if ( !*v24
        || (*(_BYTE *)(v19 + 34) & 0x20) != 0
        || (*(_BYTE *)(v19 + 35) & 0x40) != 0
        || *(_WORD *)(v19 + 32) >= 0x7FFFu )
      {
        goto LABEL_16;
      }
      v24[3] = sub_140317A10(v66);
      if ( v24 != BugCheckParameter2 || (v70 & 0xFFF) == 0 || v13 >= 8 )
        break;
      v22 = Src;
      v24 += 5;
      ++v65;
      LODWORD(v21) = v21 + 1;
      v25 = 1;
      if ( (unsigned int)v21 >= *((_DWORD *)Src + 11) )
      {
        v22 = (void *)*((_QWORD *)Src + 2);
        LODWORD(v21) = 0;
        Src = v22;
        if ( !v22 )
          goto LABEL_16;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
    ++*(_QWORD *)(v69 + 32);
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    v32 = BugCheckParameter2;
    v33 = BugCheckParameter2[0];
    LOBYTE(v13) = v13 & 0xF8 | 6;
    CurrentThread = KeGetCurrentThread();
    v67 = BugCheckParameter2;
    if ( BugCheckParameter2[0] )
    {
      while ( 1 )
      {
        v34 = (v32[3] & 1) == 0;
        LOBYTE(Src) = 0;
        if ( v34 && !*(_WORD *)(v33 + 32) )
        {
          *((_BYTE *)v32 + 32) = (*(_BYTE *)(v33 + 35) & 8) != 0;
          if ( (sub_140326870(v33) & 3) != 0 )
          {
            sub_1403941B0(v33, 0LL);
            goto LABEL_16;
          }
          LOBYTE(Src) = 1;
          *(_QWORD *)(v33 + 24) &= 0xC000000000000000uLL;
        }
        if ( !(unsigned int)sub_140274508(v33, 0LL) )
          break;
        *((_BYTE *)v67 + 33) = 1;
        if ( v67 != BugCheckParameter2 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v56 = v67[1];
          if ( v56 )
          {
            sub_140227E94(v56);
            v67[1] = 0LL;
          }
          goto LABEL_48;
        }
        v33 = v67[5];
        v32 = v67 + 5;
        v67 += 5;
        if ( !v33 )
          goto LABEL_48;
      }
      if ( (_BYTE)Src )
        sub_140338500(v33, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v33 + 0x220000000000LL) >> 4));
      goto LABEL_16;
    }
LABEL_48:
    v35 = a1;
    v36 = BugCheckParameter2;
    v37 = BugCheckParameter2[0];
    *(_DWORD *)(a1 + 192) |= 0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
    {
      LOBYTE(v19) = 2;
      sub_140334790(BugCheckParameter2[1], v19);
    }
    v38 = 48 * a6 - 0x220000000000LL;
    LODWORD(v69) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v69);
      while ( *(__int64 *)(v38 + 24) < 0 );
    }
    v39 = v78;
    sub_1402E4724(a6, v78, -1LL);
    v40 = a5;
    *(_BYTE *)(v38 + 34) = *(_BYTE *)(v38 + 34) & 0xF8 | 2;
    *(_WORD *)(v38 + 32) = 1;
    *(_BYTE *)(v38 + 34) |= 0x20u;
    *(_QWORD *)v38 = a1 + 32;
    if ( (v40 & 1) != 0 )
    {
      v59 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *(_BYTE *)v59 == 1 )
      {
        sub_140232E08(v59);
        *(_DWORD *)(a1 + 192) |= 8u;
      }
    }
    *(_BYTE *)(v38 + 35) ^= (*(_BYTE *)(v38 + 35) ^ (*(_DWORD *)(a1 + 192) >> 9)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v41 = sub_140317A10(v39);
    v42 = CurrentThread;
    *(_QWORD *)(a1 + 168) = v41;
    *(_QWORD *)(a1 + 232) = v39;
    if ( (int)sub_14033D760(v42) < 2 )
      *(_DWORD *)(a1 + 192) |= 0x80u;
    v43 = a7;
    *(_QWORD *)(a1 + 320) = a6;
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_DWORD *)(a1 + 280) = 56;
    *(_QWORD *)(a1 + 304) = 0LL;
    *(_QWORD *)(a1 + 312) = 4096LL;
    sub_14027449C(v43, 0LL);
    LOBYTE(v44) = 2;
    sub_140334790(a7, v44);
    *(_WORD *)(a1 + 282) |= 0x42u;
    v45 = v70;
    *(_QWORD *)(a1 + 208) = a3;
    v46 = a7;
    *(_QWORD *)(a1 + 160) = a7;
    *(_QWORD *)(a1 + 96) = v45;
    *(_QWORD *)(a1 + 240) = v39;
    *(_QWORD *)(a1 + 248) = v38;
    *(_QWORD *)(a1 + 200) = 0LL;
    v47 = sub_1403095B0(&qword_140C534C0, v65);
    v48 = (_QWORD *)v47;
    if ( !v47 )
    {
      v52 = -1073741670;
LABEL_63:
      *(_DWORD *)(a1 + 80) = v52;
      if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
        v11 = (_SLIST_ENTRY *)sub_1402E48A0();
      v53 = BugCheckParameter2[0];
      if ( BugCheckParameter2[0] )
      {
        do
        {
          LOBYTE(v76) = sub_1402F2700(v53);
          if ( (unsigned int)sub_1403377E0(v53) )
          {
            if ( v11 && *((_BYTE *)v36 + 32) && (*(_QWORD *)(v53 + 24) & 0x4000000000000000LL) == 0 )
              sub_140276D2C(v11, v53);
            else
              sub_140338500(v53, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v53 + 0x220000000000LL) >> 4));
          }
          _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
          {
            v54 = v76;
            if ( (unsigned __int8)v76 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v63 = *((_QWORD *)CurrentPrcb + 4375);
              v54 = v76;
              v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v76 + 1));
              v34 = (v64 & *(_DWORD *)(v63 + 20)) == 0;
              *(_DWORD *)(v63 + 20) &= v64;
              if ( v34 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          else
          {
            v54 = v76;
          }
          __writecr8(v54);
          if ( v36 != BugCheckParameter2 )
            break;
          v53 = v36[5];
          v36 += 5;
        }
        while ( v53 );
        v35 = a1;
        v46 = a7;
      }
      if ( v11 )
        sub_1402302B0(v11);
      sub_14027FE9C(v46, &v76);
      v55 = (unsigned __int8)v76;
      *(_DWORD *)(v35 + 192) &= ~0x20u;
      sub_140334790(v46, v55);
      *(_QWORD *)(v35 + 88) = 4096LL;
      KeSetEvent((PRKEVENT)(v35 + 32), 0, 0);
      return 1LL;
    }
    v49 = v70;
    v68 = v47 << 25 >> 16;
    Src = (void *)(v68 + (unsigned int)(v70 & 0xFFF) + 4096);
    v50 = sub_1402CBD10(v47, a6, 2684354564LL);
    if ( (unsigned int)sub_140317A80(v48) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v50 & 1) != 0 )
          v50 |= v60;
        *v48 = v50;
        sub_1402294F0((__int64)v48, v50);
LABEL_57:
        v51 = sub_1402CBD10(
                v48 + 1,
                0xAAAAAAAAAAAAAAABuLL * ((signed __int64)(BugCheckParameter2[0] + 0x220000000000LL) >> 4),
                536870913LL);
        if ( (unsigned int)sub_140317A80(v48 + 1) )
        {
          if ( (unsigned int)sub_140229550() )
          {
            if ( !HIBYTE(word_140C51864) && (v51 & 1) != 0 )
              v51 |= 0x8000000000000000uLL;
            v48[1] = v51;
            sub_1402294F0((__int64)(v48 + 1), v51);
LABEL_59:
            if ( BugCheckParameter2[5] )
            {
              v57 = sub_1402CBD10(
                      v48 + 2,
                      0xAAAAAAAAAAAAAAABuLL * ((signed __int64)(BugCheckParameter2[5] + 0x220000000000LL) >> 4),
                      536870913LL);
              if ( (unsigned int)sub_140317A80(v48 + 2) )
              {
                if ( (unsigned int)sub_140229550() )
                {
                  if ( !HIBYTE(word_140C51864) && (v57 & 1) != 0 )
                    v57 |= 0x8000000000000000uLL;
                  v48[2] = v57;
                  sub_1402294F0((__int64)(v48 + 2), v57);
                  goto LABEL_60;
                }
                if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v57 & 1) != 0 )
                  v57 |= 0x8000000000000000uLL;
              }
              v48[2] = v57;
            }
LABEL_60:
            if ( v49 + 4096 > v71 )
            {
              v71 = ((_WORD)v71 - (_WORD)v49) & 0xFFF;
              v58 = v71;
              memmove((void *)v68, Src, v71);
              memset((void *)(v58 + v68), 0, (unsigned int)(4096 - v71));
            }
            else
            {
              sub_140424FF0(v68, Src);
            }
            sub_1402BB6D0(&qword_140C534C0, v48, v65);
            __incgsdword(0x2E98u);
            v52 = 0;
            v46 = a7;
            goto LABEL_63;
          }
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v51 & 1) != 0 )
            v51 |= 0x8000000000000000uLL;
        }
        v48[1] = v51;
        goto LABEL_59;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v50 & 1) != 0 )
        v50 |= v60;
    }
    *v48 = v50;
    goto LABEL_57;
  }
LABEL_32:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
LABEL_17:
  if ( (v13 & 2) == 0 )
    goto LABEL_18;
LABEL_19:
  if ( BugCheckParameter2[5] )
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[6] )
    sub_140227E94(BugCheckParameter2[6]);
  v30 = BugCheckParameter2[0];
  if ( BYTE1(BugCheckParameter2[4]) == 1 )
    sub_140336AD8(BugCheckParameter2[0]);
  if ( v30 )
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
  {
    LOBYTE(v19) = 2;
    sub_140334790(BugCheckParameter2[1], v19);
  }
  if ( (v13 & 4) != 0 )
    sub_1402206C0(v69, 0LL, v20, 3);
  return 0LL;
}
