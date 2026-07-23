/*
 * XREFs of sub_1402C8740 @ 0x1402C8740
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_140325830 @ 0x140325830 (sub_140325830.c)
 *     sub_14038E01C @ 0x14038E01C (sub_14038E01C.c)
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 * Callees:
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_140226804 @ 0x140226804 (sub_140226804.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     sub_1403C3E64 @ 0x1403C3E64 (sub_1403C3E64.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_140596A58 @ 0x140596A58 (sub_140596A58.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

__int64 __fastcall sub_1402C8740(ULONG_PTR BugCheckParameter2, __int64 a2, __int16 a3)
{
  __int64 v5; // rsi
  int v6; // r15d
  int v7; // edx
  ULONG_PTR v8; // rdi
  ULONG_PTR *v9; // rax
  char *v10; // rbx
  int v11; // ebx
  int v12; // edi
  int v13; // r8d
  int v14; // eax
  ULONG_PTR *v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // r14
  __int64 v18; // rdx
  _QWORD *v19; // rax
  char *v20; // rbx
  int v21; // ebx
  int v22; // r8d
  int v23; // eax
  _QWORD *v24; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  int i; // ecx
  __int64 v31; // r9
  unsigned __int64 v32; // r9
  ULONG_PTR v33; // r10
  volatile signed __int32 *v34; // r8
  unsigned int v35; // eax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r9
  signed __int64 v39; // rdx
  signed __int64 v40; // r8
  signed __int64 v41; // rcx
  __int64 v42; // r10
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // r10
  signed __int64 v46; // rdx
  signed __int64 v47; // r8
  signed __int64 v48; // rcx
  _DWORD *v49; // rcx
  struct _KPRCB *v50; // rcx
  __int64 v51; // rdx
  int v52; // eax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdi
  __int64 v55; // rax
  int v56; // ebx
  int v57; // ecx
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  unsigned int v61; // r15d
  __int64 v62; // rax
  __int64 v64; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v66; // [rsp+80h] [rbp+8h]
  char v67; // [rsp+80h] [rbp+8h]
  unsigned int v68; // [rsp+88h] [rbp+10h]
  int v70; // [rsp+98h] [rbp+20h] BYREF

  v5 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v6 = 0;
  v7 = dword_140C506C8;
  v68 = *(_BYTE *)(v5 + 34) & 7;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * BugCheckParameter2) >> 4);
  v66 = v5;
  if ( dword_140C506C4 <= (unsigned int)dword_140C506C8 )
  {
    v9 = (ULONG_PTR *)((char *)qword_140C50708 + 16 * dword_140C506C4);
    if ( v8 >= *v9 && (dword_140C506C4 == dword_140C506C8 || v8 < v9[2]) )
    {
      v10 = (char *)qword_140C50708 + 16 * dword_140C506C4;
      goto LABEL_6;
    }
  }
  v13 = 0;
  if ( dword_140C506C8 < 0 )
LABEL_132:
    KeBugCheckEx(0x1Au, 0x6201uLL, v8, 0LL, 0LL);
  while ( 1 )
  {
    v14 = (v13 + v7) >> 1;
    v15 = (ULONG_PTR *)((char *)qword_140C50708 + 16 * v14);
    if ( v8 < *v15 )
    {
      if ( !v14 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v8, (ULONG_PTR)v15, 0LL);
      v7 = v14 - 1;
      goto LABEL_15;
    }
    if ( v14 == dword_140C506C8 || v8 < v15[2] )
      break;
    v13 = v14 + 1;
LABEL_15:
    if ( v7 < v13 )
      goto LABEL_132;
  }
  dword_140C506C4 = (v13 + v7) >> 1;
  v10 = (char *)qword_140C50708 + 16 * v14;
LABEL_6:
  v11 = *((_DWORD *)v10 + 2);
  if ( qword_140C50710 )
    v12 = sub_1403B76EC(v8);
  else
    v12 = 0;
  v16 = dword_140C50738 & BugCheckParameter2 | (v11 << byte_140C506CC) | (v12 << byte_140C506CD);
  v17 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
  if ( a2 )
  {
    v21 = -1;
  }
  else
  {
    v18 = (unsigned int)dword_140C506C8;
    v64 = *(_QWORD *)(v17 + 8LL * v68 + 2432);
    if ( dword_140C506C4 > (unsigned int)dword_140C506C8
      || (v19 = (char *)qword_140C50708 + 16 * dword_140C506C4, BugCheckParameter2 < *v19)
      || dword_140C506C4 != dword_140C506C8 && BugCheckParameter2 >= v19[2] )
    {
      v22 = 0;
      if ( dword_140C506C8 < 0 )
LABEL_134:
        KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
      while ( 1 )
      {
        v23 = (v22 + (int)v18) >> 1;
        v24 = (char *)qword_140C50708 + 16 * v23;
        if ( BugCheckParameter2 >= *v24 )
        {
          if ( v23 == dword_140C506C8 || BugCheckParameter2 < v24[2] )
          {
            dword_140C506C4 = (v22 + (int)v18) >> 1;
            v20 = (char *)qword_140C50708 + 16 * v23;
            goto LABEL_25;
          }
          v22 = v23 + 1;
        }
        else
        {
          if ( !v23 )
            KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)v24, 0LL);
          v18 = (unsigned int)(v23 - 1);
        }
        if ( (int)v18 < v22 )
          goto LABEL_134;
      }
    }
    v20 = (char *)qword_140C50708 + 16 * dword_140C506C4;
LABEL_25:
    v21 = *((_DWORD *)v20 + 2);
    a2 = v64 + 88LL * v16;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      LOBYTE(v18) = -1;
      sub_140461A66(a2 + 32, v18);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v70 = 0;
      v26 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v26 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v27 = *(_DWORD *)(v26 + 24);
          *(_DWORD *)(v26 + 24) = v27 + 1;
          if ( v27 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 32), 0x1Fu) )
      {
        v28 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v28 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v29 = *(_DWORD *)(v28 + 24) - 1;
            *(_DWORD *)(v28 + 24) = v29;
            if ( !v29 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        v70 = sub_140220C30((int *)(a2 + 32), 0xFFu);
      }
      for ( i = *(_DWORD *)(a2 + 32); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a2 + 32) )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x40000000u);
        sub_1402F32E0(&v70);
      }
      v5 = v66;
    }
  }
  v31 = v68;
  _InterlockedDecrement64(*(volatile signed __int64 **)(v17 + 8LL * v68 + 6632));
  if ( dword_140C529CC == 1 )
  {
    LOBYTE(v32) = 1;
    v33 = BugCheckParameter2 & 0x1F;
    v34 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (BugCheckParameter2 >> 5));
    if ( v33 + 1 <= 0x20 )
    {
      v35 = 1 << v33;
      goto LABEL_62;
    }
    if ( (BugCheckParameter2 & 0x1F) == 0 )
      goto LABEL_61;
    _InterlockedOr(v34++, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v33);
    v32 = 1LL - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
    if ( v32 >= 0x20 )
    {
      v36 = v32 >> 5;
      v32 += -32LL * (v32 >> 5);
      do
      {
        *v34++ = -1;
        --v36;
      }
      while ( v36 );
    }
    if ( v32 )
    {
LABEL_61:
      v35 = (1 << v32) - 1;
LABEL_62:
      _InterlockedOr(v34, v35);
    }
    v31 = v68;
  }
  --*(_QWORD *)a2;
  if ( *(_QWORD *)(a2 + 16) == BugCheckParameter2 )
  {
    v37 = *(_QWORD *)v5 & 0xFFFFFFFFFFLL;
    *(_QWORD *)(a2 + 16) = v37;
    if ( v37 == 0x3FFFFFFFFFLL )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v17 + 16)
                                              + 24512 * ((unsigned __int64)v16 >> byte_140C506CC)
                                              + 16 * (v31 + 1404)
                                              + 8)
                                  + 4 * ((unsigned __int64)(v16 & dword_140C50738) >> 5)),
        ~(1 << (v16 & dword_140C50738 & 0x1F)));
      *(_QWORD *)(a2 + 24) = 0x3FFFFFFFFFLL;
    }
    else
    {
      v38 = 48 * v37 - 0x220000000000LL;
      v39 = *(_QWORD *)(v38 + 24);
      v40 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v38 + 24),
              v39 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL,
              v39);
      if ( v39 != v40 )
      {
        do
        {
          v41 = v40;
          v40 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v38 + 24),
                  v40 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL,
                  v40);
        }
        while ( v41 != v40 );
      }
    }
  }
  else
  {
    *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFLL) - 0x220000000000LL) ^= (*(_QWORD *)v5 ^ *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFLL) - 0x220000000000LL)) & 0xFFFFFFFFFFLL;
    v42 = *(_QWORD *)(v5 + 24);
    v43 = *(_QWORD *)v5 & 0xFFFFFFFFFFLL;
    if ( v43 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(a2 + 24) = v42 & 0xFFFFFFFFFFLL;
    }
    else
    {
      v44 = 48 * v43 - 0x220000000000LL;
      v45 = v42 & 0xFFFFFFFFFFLL;
      v46 = *(_QWORD *)(v44 + 24);
      v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 24), v45 | v46 & 0xFFFFFF0000000000uLL, v46);
      if ( v46 != v47 )
      {
        do
        {
          v48 = v47;
          v47 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v44 + 24),
                  v45 | v47 & 0xFFFFFF0000000000uLL,
                  v47);
        }
        while ( v48 != v47 );
      }
    }
  }
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v67 = *(_BYTE *)(v17 + 15589);
  if ( v21 != -1 )
  {
    v49 = (_DWORD *)(a2 + 32);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      sub_14063D8B0(v49, retaddr);
    else
      *v49 = 0;
    v50 = KeGetCurrentPrcb();
    v51 = *((_QWORD *)v50 + 4375);
    if ( v51 )
    {
      if ( *((_BYTE *)v50 + 32) <= 1u )
      {
        v52 = *(_DWORD *)(v51 + 24) - 1;
        *(_DWORD *)(v51 + 24) = v52;
        if ( !v52 )
          sub_140418E4C(v50);
      }
    }
  }
  v53 = *(_QWORD *)(v17 + 16) + 24512 * ((unsigned __int64)v16 >> byte_140C506CC);
  _InterlockedDecrement64((volatile signed __int64 *)(v53 + 8LL * v68 + 22560));
  if ( (unsigned int)dword_140D05004 > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v53
                                                      + 8
                                                      * (v68
                                                       + 2LL
                                                       * (unsigned __int8)(byte_140D069E2 & (v16 >> byte_140C506CD)))
                                                      + 22720));
  v54 = _InterlockedDecrement64((volatile signed __int64 *)(v17 + 16896));
  if ( v54 == *(_QWORD *)(v17 + 15944) || v54 == *(_QWORD *)(v17 + 15952) )
    sub_1403C3E64(v17);
  if ( v54 <= 0x420 )
  {
    v55 = *(_QWORD *)(v17 + 16600);
    if ( !v55 || !*(_BYTE *)(v55 + 52) )
      sub_140596A58(v17);
    if ( v54 < 0xA0 && v54 + 1 >= 0xA0 && *(_DWORD *)(v17 + 1176) )
      KeSetEvent((PRKEVENT)(v17 + 1032), 0, 0);
  }
  if ( v54 < 0x9F )
  {
    if ( (a3 & 0x2000) != 0 )
    {
      v56 = 1;
    }
    else
    {
      v57 = *((_DWORD *)KeGetCurrentThread() + 345);
      if ( (v57 & 0xC) == 8 )
      {
        v56 = 1;
      }
      else if ( v54 < 0x20 && (ULONG_PTR *)v17 == &StartContext )
      {
        v56 = 0;
      }
      else if ( (a3 & 4) != 0 )
      {
        v56 = 1;
      }
      else if ( (v57 & 2) != 0 && v54 >= 0x21 )
      {
        v56 = 1;
      }
      else
      {
        v56 = (*(unsigned __int8 *)(v17 + 4) >> 5) & 1;
      }
    }
  }
  else
  {
    v56 = 1;
  }
  if ( (*(_BYTE *)(v5 + 34) & 8) != 0 )
    sub_140226804(v5, 1, 0);
  v58 = qword_140C50780;
  *(_QWORD *)(v5 + 24) &= 0xFFFFFF0000000000uLL;
  v59 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)v5 = 0LL;
  if ( v58 && (v59 & 0x10) == 0 )
    v59 &= ~v58;
  if ( HIDWORD(v59) == 4294967293 )
    v6 = 2;
  v60 = 0LL;
  v61 = v56 | v6;
  *(_QWORD *)(v5 + 16) = 0LL;
  if ( v61 >= 2 )
  {
    v60 = sub_14033B6A0(0LL, 4294967293LL);
    *(_QWORD *)(v5 + 16) = v60;
  }
  if ( v68 == 1 || v67 )
  {
    if ( v60 )
    {
      *(_QWORD *)(v5 + 16) = v60 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else
    {
      v62 = 128LL;
      if ( v58 )
      {
        v62 = 144LL;
        if ( (v58 & 0x80u) == 0LL )
          v62 = v58 | 0x80;
      }
      *(_QWORD *)(v5 + 16) = v62;
    }
  }
  else if ( (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
  {
    sub_1405AD468(BugCheckParameter2);
  }
  return v61 & 1;
}
