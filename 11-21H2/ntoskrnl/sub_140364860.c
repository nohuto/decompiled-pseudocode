/*
 * XREFs of sub_140364860 @ 0x140364860
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 *     sub_140364794 @ 0x140364794 (sub_140364794.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403650F0 @ 0x1403650F0 (sub_1403650F0.c)
 *     sub_140365834 @ 0x140365834 (sub_140365834.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 __fastcall sub_140364860(__int64 a1, signed __int64 *a2, __int64 a3, unsigned int a4)
{
  signed __int64 *v4; // r14
  int v5; // r11d
  signed __int64 v6; // r12
  char v7; // bp
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // eax
  char v14; // cl
  unsigned __int64 v15; // r10
  int v16; // edx
  unsigned __int16 v17; // ax
  unsigned int v18; // ecx
  signed __int64 *v19; // r8
  char v20; // cl
  unsigned int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // r9
  char *v24; // r8
  char *v25; // rcx
  __int64 v26; // r10
  int v27; // edx
  signed __int16 v28; // ax
  int v29; // r15d
  int v30; // ebp
  unsigned __int16 v31; // dx
  __int64 v32; // r15
  unsigned int v33; // r13d
  unsigned int v35; // ecx
  signed __int64 v36; // rdi
  ULONG_PTR v37; // r13
  unsigned __int8 v38; // al
  int v39; // r10d
  char v40; // al
  signed __int64 v41; // r8
  _QWORD *v42; // r9
  signed __int64 v43; // rcx
  _QWORD *v44; // rdx
  signed __int64 *v45; // r8
  signed __int64 **v46; // rax
  signed __int64 **v47; // rax
  ULONG_PTR v48; // r12
  unsigned __int8 v49; // r12
  struct _KTHREAD *v50; // rbp
  unsigned int v51; // r8d
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  __int64 v54; // r9
  int v55; // eax
  bool v56; // zf
  unsigned __int64 v57; // rdx
  __int64 v58; // rdi
  unsigned int k; // ecx
  int v60; // r8d
  struct _KTHREAD *v61; // rcx
  __int64 v62; // rax
  ULONG_PTR v63; // r12
  struct _KTHREAD *v64; // rdi
  __int64 v65; // rbx
  unsigned int m; // ecx
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  int v69; // edx
  __int64 v70; // r9
  int v71; // r8d
  struct _KTHREAD *v72; // rcx
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v74; // eax
  unsigned int v75; // edx
  __int64 v76; // r12
  unsigned int j; // r8d
  int v78; // r8d
  struct _KTHREAD *v79; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v81; // r12
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v83; // r9
  int v84; // eax
  signed __int64 v85; // rax
  unsigned __int8 BugCheckParameter1; // [rsp+88h] [rbp+10h]
  ULONG_PTR BugCheckParameter1a; // [rsp+88h] [rbp+10h]
  unsigned int i; // [rsp+90h] [rbp+18h]

  v4 = a2;
  BugCheckParameter1 = -1;
  v5 = a3;
  v6 = 0LL;
  v7 = a4;
  v8 = (unsigned int)a2 >> 12;
  v9 = a1;
  v10 = qword_140C5A5C8 ^ *((_DWORD *)v4 + 10) ^ v8;
  if ( !a3 )
    goto LABEL_18;
  v11 = *(_QWORD *)(a1
                  + 8LL * *((unsigned __int8 *)qword_140016470 + (((unsigned int)(unsigned __int16)v10 + 15) >> 4))
                  + 128);
  v12 = a3 - HIWORD(v10) - (_DWORD)v4;
  v13 = *(_DWORD *)(v11 + 72);
  v14 = *(_BYTE *)(v11 + 76);
  if ( v13 )
  {
    v15 = (v12 * (unsigned __int64)v13) >> v14;
    v16 = v12 - v15 * (unsigned __int16)v10;
  }
  else
  {
    LODWORD(v15) = v12 >> v14;
    v16 = ((1 << v14) - 1) & v12;
  }
  if ( v16 )
    return 0LL;
  v17 = *((_WORD *)v4 + 18);
  v18 = 2 * v15;
  if ( v17 >= (unsigned __int16)v15 )
    v17 = v15;
  *((_WORD *)v4 + 18) = v17;
  v19 = &v4[(unsigned __int64)v18 >> 6];
  _m_prefetchw(v19 + 6);
  if ( (((unsigned __int64)_InterlockedAnd64(v19 + 6, ~(3LL << (v18 & 0x3F))) >> (v18 & 0x3F)) & 1) == 0 )
  {
    sub_1405F1BBC(17, *(_QWORD *)a1, v5, (_DWORD)v4, (unsigned int)v15, 0LL);
    return 0LL;
  }
  if ( *((_BYTE *)v4 + 45) > 1u )
  {
    v20 = *((_BYTE *)v4 + 44);
    v21 = v5 - (_DWORD)v4;
    v22 = v21 >> v20;
    v23 = 2 * v22;
    v24 = (char *)v4 + 2 * v22 + *((unsigned __int16 *)v4 + 23);
    _m_prefetchw(v24);
    v25 = &v24[2 * ((((unsigned __int16)v10 + v21 - 1) >> v20) - (unsigned int)v22) + 2];
    LODWORD(v26) = -1;
    v27 = 0;
    if ( v24 < v25 )
    {
      do
      {
        v28 = _InterlockedDecrement16((volatile signed __int16 *)v24);
        if ( v28 )
        {
          if ( v28 == -1 )
            --v27;
        }
        else
        {
          ++v27;
          if ( (_DWORD)v26 == -1 )
            v26 = v23 >> 1;
        }
        v24 += 2;
        v23 += 2LL;
      }
      while ( v24 < v25 );
      if ( v27 )
      {
        v57 = (v27 << *((_BYTE *)v4 + 44)) / 4096;
        if ( (dword_140C1BBE0 & 0x20) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), v57);
      }
      if ( (_DWORD)v26 != -1 )
        sub_1403650F0(a1, (_DWORD)v4, v26, 2, v7);
    }
  }
  v9 = a1;
LABEL_18:
  v29 = *((unsigned __int16 *)v4 + 17);
  LOWORD(v30) = *((_WORD *)v4 + 16);
  while ( 1 )
  {
    if ( !v6 && (!(_WORD)v30 || (unsigned __int16)v30 == v29 - 1) )
    {
      v35 = *(unsigned __int8 *)(v9 + 57);
      v36 = v4[2];
      for ( i = v35; ; v35 = i )
      {
        while ( 1 )
        {
          while ( !v36 )
          {
            v36 = _InterlockedCompareExchange64(v4 + 2, 3LL, 0LL);
            if ( !v36 )
              return 1LL;
          }
          if ( (v36 & 1) != 0 )
            break;
          v37 = v36 + 16;
          v6 = v36;
          v38 = sub_140365AF4(v36 + 16, v35);
          v36 = v4[2];
          BugCheckParameter1 = v38;
          if ( v6 == v36 )
            goto LABEL_22;
          v35 = i;
          if ( i )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v37);
            if ( dword_140D06B08
              && (dword_140D06B08 & 1) != 0
              && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
            {
              v81 = BugCheckParameter1;
              if ( BugCheckParameter1 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v83 = *((_QWORD *)CurrentPrcb + 4375);
                v84 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
                v56 = (v84 & *(_DWORD *)(v83 + 20)) == 0;
                *(_DWORD *)(v83 + 20) &= v84;
                if ( v56 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
            else
            {
              v81 = BugCheckParameter1;
            }
            __writecr8(v81);
            v35 = i;
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            {
              ExfTryToWakePushLock(v37);
              v35 = 0;
            }
            CurrentThread = KeGetCurrentThread();
            BugCheckParameter1a = (ULONG_PTR)CurrentThread;
            if ( v37 - qword_140C50630 >= 0x8000000000LL )
            {
              v75 = -1;
            }
            else
            {
              v74 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
              v35 = 0;
              v75 = v74;
              CurrentThread = (struct _KTHREAD *)BugCheckParameter1a;
            }
            _disable();
            v76 = (__int64)CurrentThread + 1696;
            for ( j = 0; j < 6; ++j )
            {
              if ( (*(_QWORD *)v76 & 0x7FFFFFFFFFFFFFFCLL) == (v37 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_BYTE *)(v76 + 18)
                && (*(_DWORD *)v76 & 1) == 0
                && *(_DWORD *)(v76 + 8) == v75 )
              {
                *(_BYTE *)(v76 + 18) = 0;
                if ( *(__int64 *)v76 < 0 )
                {
                  *(_BYTE *)v76 |= 2u;
                  _enable();
                  sub_14034EE30(v76);
                  _disable();
                  v35 = 0;
                  CurrentThread = (struct _KTHREAD *)BugCheckParameter1a;
                }
                v78 = *(_DWORD *)(v76 + 88);
                *(_DWORD *)(v76 + 88) = 0;
                *(_BYTE *)(v76 + 17) = 0;
                *(_QWORD *)v76 = 0LL;
                *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v76 + 16);
                _enable();
                if ( v78 )
                {
                  sub_14022B568((ULONG_PTR)CurrentThread, v37, v78);
                  v35 = 0;
                }
                goto LABEL_148;
              }
              v76 += 96LL;
            }
            if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v37, v75, 0LL);
            _enable();
LABEL_148:
            v79 = KeGetCurrentThread();
            v56 = (*((_WORD *)v79 + 243))++ == 0xFFFF;
            if ( v56 && *((struct _KTHREAD **)v79 + 19) != (struct _KTHREAD *)((char *)v79 + 152) )
            {
              KiCheckForKernelApcDelivery();
              v35 = 0;
            }
          }
        }
        v85 = _InterlockedCompareExchange64(v4 + 2, v36 & 1 | (v36 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v36);
        v56 = v36 == v85;
        v36 = v85;
        if ( v56 )
          break;
      }
      return 1LL;
    }
LABEL_22:
    v31 = v30 + 1;
    v30 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v4 + 16, v30 + 1, v30);
    if ( v31 == v30 + 1 )
      break;
    v9 = a1;
  }
  if ( (_WORD)v30 )
  {
    if ( v30 != v29 - 1 )
    {
      v32 = a1;
      v33 = -1;
      goto LABEL_26;
    }
    v39 = 2;
  }
  else
  {
    v39 = 0;
  }
  v40 = *((_BYTE *)v4 + 38);
  switch ( v40 )
  {
    case 1:
      v41 = v6 + 40;
      goto LABEL_37;
    case 0:
      v41 = v6 + 24;
      v42 = (_QWORD *)(v6 + 8);
      goto LABEL_38;
    case 2:
      v41 = 0LL;
LABEL_37:
      v42 = 0LL;
LABEL_38:
      if ( v39 )
      {
        v43 = 0LL;
        v44 = 0LL;
      }
      else
      {
        v43 = v6 + 24;
        v44 = (_QWORD *)(v6 + 8);
      }
      if ( v41 )
      {
        v45 = (signed __int64 *)*v4;
        v46 = (signed __int64 **)v4[1];
        if ( *(signed __int64 **)(*v4 + 8) == v4 && *v46 == v4 )
        {
          *v46 = v45;
          v45[1] = (signed __int64)v46;
          if ( v42 )
            --*v42;
          goto LABEL_45;
        }
LABEL_168:
        __fastfail(3u);
      }
LABEL_45:
      *((_BYTE *)v4 + 38) = v39;
      if ( v43 )
      {
        v47 = *(signed __int64 ***)(v43 + 8);
        if ( *v47 != (signed __int64 *)v43 )
          goto LABEL_168;
        *v4 = v43;
        v4[1] = (signed __int64)v47;
        *v47 = v4;
        *(_QWORD *)(v43 + 8) = v4;
        if ( v44 )
          ++*v44;
        v4 = 0LL;
      }
      if ( (*(_BYTE *)v6 & 1) == 0 && *(_QWORD *)(v6 + 8) > 8uLL )
      {
        v4 = *(signed __int64 **)v43;
        v62 = **(_QWORD **)v43;
        if ( *(_QWORD *)(*(_QWORD *)v43 + 8LL) != v43 || *(signed __int64 **)(v62 + 8) != v4 )
          goto LABEL_168;
        *(_QWORD *)v43 = v62;
        *(_QWORD *)(v62 + 8) = v43;
        --*v44;
        *((_BYTE *)v4 + 38) = 2;
      }
      if ( v4 && *((_BYTE *)v4 + 38) == 2 )
        v4[2] = 0LL;
      break;
  }
  v32 = a1;
  v48 = v6 + 16;
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v48);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v52 = KeGetCurrentIrql(), v52 <= 0xFu) )
    {
      v49 = BugCheckParameter1;
      if ( BugCheckParameter1 <= 0xFu && v52 >= 2u )
      {
        v53 = KeGetCurrentPrcb();
        v54 = *((_QWORD *)v53 + 4375);
        v55 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
        v56 = (v55 & *(_DWORD *)(v54 + 20)) == 0;
        *(_DWORD *)(v54 + 20) &= v55;
        if ( v56 )
          sub_140418E4C(v53);
      }
    }
    else
    {
      v49 = BugCheckParameter1;
    }
    __writecr8(v49);
    v33 = -1;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v48);
    v50 = KeGetCurrentThread();
    if ( v48 - qword_140C50630 < 0x8000000000LL )
    {
      v51 = sub_140287F30(*((_QWORD *)v50 + 23));
      v33 = -1;
    }
    else
    {
      v33 = -1;
      v51 = -1;
    }
    _disable();
    v58 = (__int64)v50 + 1696;
    for ( k = 0; k < 6; ++k )
    {
      if ( (*(_QWORD *)v58 & 0x7FFFFFFFFFFFFFFCLL) == (v48 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(v58 + 18)
        && (*(_DWORD *)v58 & 1) == 0
        && *(_DWORD *)(v58 + 8) == v51 )
      {
        *(_BYTE *)(v58 + 18) = 0;
        if ( *(__int64 *)v58 < 0 )
        {
          *(_BYTE *)v58 |= 2u;
          _enable();
          sub_14034EE30(v58);
          _disable();
        }
        v60 = *(_DWORD *)(v58 + 88);
        *(_DWORD *)(v58 + 88) = 0;
        *(_BYTE *)(v58 + 17) = 0;
        *(_QWORD *)v58 = 0LL;
        *((_BYTE *)v50 + 792) |= 1 << *(_BYTE *)(v58 + 16);
        _enable();
        if ( v60 )
          sub_14022B568((ULONG_PTR)v50, v48, v60);
        goto LABEL_86;
      }
      v58 += 96LL;
    }
    if ( (*((_DWORD *)v50 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v50, v48, v51, 0LL);
    _enable();
LABEL_86:
    v61 = KeGetCurrentThread();
    v56 = (*((_WORD *)v61 + 243))++ == 0xFFFF;
    if ( v56 && *((struct _KTHREAD **)v61 + 19) != (struct _KTHREAD *)((char *)v61 + 152) )
      KiCheckForKernelApcDelivery();
  }
  v6 = 0LL;
  if ( v4 )
    sub_140365834(
      a1,
      *(_QWORD *)(a1
                + 8LL * *((unsigned __int8 *)qword_140016470 + (((unsigned int)(unsigned __int16)v10 + 15) >> 4))
                + 128),
      v4,
      a4);
LABEL_26:
  if ( v6 )
  {
    v63 = v6 + 16;
    if ( *(_BYTE *)(v32 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v63);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v67 = KeGetCurrentIrql();
          if ( v67 <= 0xFu && BugCheckParameter1 <= 0xFu && v67 >= 2u )
          {
            v68 = KeGetCurrentPrcb();
            v69 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
            v70 = *((_QWORD *)v68 + 4375);
            v56 = (v69 & *(_DWORD *)(v70 + 20)) == 0;
            *(_DWORD *)(v70 + 20) &= v69;
            if ( v56 )
              sub_140418E4C(v68);
          }
        }
      }
      __writecr8(BugCheckParameter1);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v63, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v63);
      v64 = KeGetCurrentThread();
      if ( v63 - qword_140C50630 < 0x8000000000LL )
        v33 = sub_140287F30(*((_QWORD *)v64 + 23));
      _disable();
      v65 = (__int64)v64 + 1696;
      for ( m = 0; m < 6; ++m )
      {
        if ( (*(_QWORD *)v65 & 0x7FFFFFFFFFFFFFFCLL) == (v63 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_BYTE *)(v65 + 18)
          && (*(_DWORD *)v65 & 1) == 0
          && *(_DWORD *)(v65 + 8) == v33 )
        {
          *(_BYTE *)(v65 + 18) = 0;
          if ( *(__int64 *)v65 < 0 )
          {
            *(_BYTE *)v65 |= 2u;
            _enable();
            sub_14034EE30(v65);
            _disable();
          }
          v71 = *(_DWORD *)(v65 + 88);
          *(_DWORD *)(v65 + 88) = 0;
          *(_BYTE *)(v65 + 17) = 0;
          *(_QWORD *)v65 = 0LL;
          *((_BYTE *)v64 + 792) |= 1 << *(_BYTE *)(v65 + 16);
          _enable();
          if ( v71 )
            sub_14022B568((ULONG_PTR)v64, v63, v71);
          goto LABEL_125;
        }
        v65 += 96LL;
      }
      if ( (*((_DWORD *)v64 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v64, v63, v33, 0LL);
      _enable();
LABEL_125:
      v72 = KeGetCurrentThread();
      v56 = (*((_WORD *)v72 + 243))++ == 0xFFFF;
      if ( v56 && *((struct _KTHREAD **)v72 + 19) != (struct _KTHREAD *)((char *)v72 + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
  return 1LL;
}
