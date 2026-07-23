/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x14058F250
 * Callers:
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 *     sub_140A08FFC @ 0x140A08FFC (sub_140A08FFC.c)
 * Callees:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_1402166E0 @ 0x1402166E0 (sub_1402166E0.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14028CD10 @ 0x14028CD10 (sub_14028CD10.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1405879D8 @ 0x1405879D8 (sub_1405879D8.c)
 *     sub_14058DED4 @ 0x14058DED4 (sub_14058DED4.c)
 *     sub_14059F908 @ 0x14059F908 (sub_14059F908.c)
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(int *a1, _DWORD *a2)
{
  int v2; // ebx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // r13
  int v7; // ebx
  unsigned int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  unsigned __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r15
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  __int64 v25; // r9
  int v26; // eax
  PVOID v27; // rsi
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  __int64 v31; // r9
  int v32; // eax
  unsigned __int64 v33; // r8
  struct _KPRCB *v34; // r9
  __int64 v35; // rdx
  signed __int32 v36; // eax
  char v37; // al
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  __int64 v40; // r9
  int v41; // eax
  unsigned __int64 v42; // r8
  struct _KPRCB *v43; // r9
  __int64 v44; // rdx
  signed __int32 v45; // eax
  unsigned int v46; // ebx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  __int64 v49; // r9
  int v50; // eax
  unsigned __int64 v51; // r8
  struct _KPRCB *v52; // r9
  __int64 v53; // rdx
  signed __int32 v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  __int64 v57; // r9
  int v58; // eax
  int v59; // esi
  unsigned __int64 v60; // rbx
  ULONG_PTR v61; // rcx
  char v62; // al
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  __int64 v65; // r9
  int v66; // eax
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  __int64 v69; // r9
  int v70; // eax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // [rsp+78h] [rbp-60h]
  __int64 v73; // [rsp+80h] [rbp-58h] BYREF
  __int64 v74; // [rsp+88h] [rbp-50h]
  int v75; // [rsp+E0h] [rbp+8h]
  int v77; // [rsp+F0h] [rbp+18h]

  v2 = *a1;
  v73 = 0LL;
  if ( (v2 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( (dword_140D06880 & 0x20000000) == 0 )
    return 3221225474LL;
  v4 = *(_QWORD *)a1 >> 12;
  v74 = *(_QWORD *)a2 >> 12;
  v5 = v4 + v74;
  v72 = v4 + v74;
  if ( v4 >= v4 + v74 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v77 = 0;
  v7 = (((v2 & 1) == 0) << 28) + 739246080;
  v8 = 0;
  --*((_WORD *)CurrentThread + 243);
  v75 = v7;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
  v9 = 48 * v4 - 0x220000000000LL;
  while ( 1 )
  {
    if ( sub_1402166E0(v4) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
      sub_1402AFC00((ULONG_PTR)&qword_140C55040);
      v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v12 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      v8 = sub_1405879D8(v4, v7);
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
      v12 = v8 == -1073740748;
      goto LABEL_15;
    }
    if ( v4 > qword_140C50840 )
      goto LABEL_176;
    if ( (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & v11) == 0 )
    {
      v5 = v72;
LABEL_176:
      v8 = -1073741584;
      goto LABEL_95;
    }
    if ( (v10 & *(_QWORD *)(v9 + 40)) != 0 )
    {
      v5 = v72;
      v8 = sub_14059F908(v9);
      v12 = v8 == -1073740748;
LABEL_15:
      if ( v12 )
      {
        --v4;
        v9 -= 48LL;
      }
      goto LABEL_95;
    }
    v13 = (unsigned __int8)sub_1402F2700(v9);
    if ( (*(_QWORD *)(v9 + 40) & 0x20000000000000LL) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v12 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    --v4;
    v9 -= 48LL;
LABEL_94:
    v7 = v75;
    v5 = v72;
LABEL_95:
    ++v4;
    v9 += 48LL;
    if ( v4 >= v5 )
    {
      v46 = 0;
      goto LABEL_97;
    }
  }
  v18 = sub_14058DED4(v9, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v18 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = *((_QWORD *)v20 + 4375);
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v12 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v22;
          if ( v12 )
            sub_140418E4C((__int64)v20);
        }
      }
    }
    __writecr8(v13);
    v8 = -1073741558;
    goto LABEL_94;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = *((_QWORD *)v24 + 4375);
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v12 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v12 )
          sub_140418E4C((__int64)v24);
      }
    }
  }
  __writecr8(v13);
  if ( (int)sub_14026A784(v18, 2LL, 0LL, 0) >= 0 )
  {
    v27 = sub_1402828F0(64, 0x20uLL, 0x6C42694Du);
    v28 = (unsigned __int8)sub_1402F2700(v9);
    if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != v18 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = *((_QWORD *)v30 + 4375);
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
            v12 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
            *(_DWORD *)(v31 + 20) &= v32;
            if ( v12 )
              sub_140418E4C((__int64)v30);
          }
        }
      }
      __writecr8(v28);
      sub_14028CE10(v18, 2LL);
      v33 = 2LL;
      if ( (ULONG_PTR *)v18 != &StartContext )
        goto LABEL_65;
      v34 = KeGetCurrentPrcb();
      v35 = *((int *)v34 + 8615);
      if ( (_DWORD)v35 == -1 )
        goto LABEL_65;
      if ( (unsigned __int64)(v35 + 2) <= 0x100 )
      {
        do
        {
          v36 = _InterlockedCompareExchange((volatile signed __int32 *)v34 + 8615, v35 + 2, v35);
          v12 = (_DWORD)v35 == v36;
          LODWORD(v35) = v36;
          if ( v12 )
            goto LABEL_66;
        }
        while ( v36 != -1 && (unsigned __int64)(v36 + 2LL) <= 0x100 );
      }
      if ( (int)v35 > 192 && (_DWORD)v35 == _InterlockedCompareExchange((volatile signed __int32 *)v34 + 8615, 192, v35) )
        v33 = (int)v35 - 192 + 2LL;
      if ( v33 )
LABEL_65:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 16960), v33);
LABEL_66:
      sub_1403606C4(*(_QWORD *)(v18 + 176));
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      --v4;
      v9 -= 48LL;
      goto LABEL_94;
    }
    if ( (v75 & 0x10000000) != 0 )
    {
      v37 = *(_BYTE *)(v9 + 35);
      if ( v37 >= 0 )
        *(_BYTE *)(v9 + 35) = v37 | 0x80;
    }
    if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = *((_QWORD *)v39 + 4375);
            v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
            v12 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
            *(_DWORD *)(v40 + 20) &= v41;
            if ( v12 )
              sub_140418E4C((__int64)v39);
          }
        }
      }
      __writecr8(v28);
      sub_14028CE10(v18, 2LL);
      v42 = 2LL;
      if ( (ULONG_PTR *)v18 != &StartContext )
        goto LABEL_90;
      v43 = KeGetCurrentPrcb();
      v44 = *((int *)v43 + 8615);
      if ( (_DWORD)v44 == -1 )
        goto LABEL_90;
      if ( (unsigned __int64)(v44 + 2) <= 0x100 )
      {
        do
        {
          v45 = _InterlockedCompareExchange((volatile signed __int32 *)v43 + 8615, v44 + 2, v44);
          v12 = (_DWORD)v44 == v45;
          LODWORD(v44) = v45;
          if ( v12 )
            goto LABEL_91;
        }
        while ( v45 != -1 && (unsigned __int64)(v45 + 2LL) <= 0x100 );
      }
      if ( (int)v44 > 192 && (_DWORD)v44 == _InterlockedCompareExchange((volatile signed __int32 *)v43 + 8615, 192, v44) )
        v42 = (int)v44 - 192 + 2LL;
      if ( v42 )
LABEL_90:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 16960), v42);
LABEL_91:
      sub_1403606C4(*(_QWORD *)(v18 + 176));
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      v8 = 259;
      goto LABEL_94;
    }
    if ( (*(_BYTE *)(v9 + 34) & 7) == 5 && (_bittest64((const signed __int64 *)(v9 + 40), 0x35u) || sub_140273354(v9)) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = *((_QWORD *)v48 + 4375);
            v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
            v12 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
            *(_DWORD *)(v49 + 20) &= v50;
            if ( v12 )
              sub_140418E4C((__int64)v48);
          }
        }
      }
      __writecr8(v28);
      sub_14028CE10(v18, 2LL);
      v51 = 2LL;
      if ( (ULONG_PTR *)v18 != &StartContext )
        goto LABEL_127;
      v52 = KeGetCurrentPrcb();
      v53 = *((int *)v52 + 8615);
      if ( (_DWORD)v53 == -1 )
        goto LABEL_127;
      if ( (unsigned __int64)(v53 + 2) <= 0x100 )
      {
        do
        {
          v54 = _InterlockedCompareExchange((volatile signed __int32 *)v52 + 8615, v53 + 2, v53);
          v12 = (_DWORD)v53 == v54;
          LODWORD(v53) = v54;
          if ( v12 )
            goto LABEL_128;
        }
        while ( v54 != -1 && (unsigned __int64)(v54 + 2LL) <= 0x100 );
      }
      if ( (int)v53 > 192 && (_DWORD)v53 == _InterlockedCompareExchange((volatile signed __int32 *)v52 + 8615, 192, v53) )
        v51 = (int)v53 - 192 + 2LL;
      if ( v51 )
LABEL_127:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 16960), v51);
LABEL_128:
      sub_1403606C4(*(_QWORD *)(v18 + 176));
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      goto LABEL_94;
    }
    sub_1405ADDA8(v9, 1LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 0;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = *((_QWORD *)v56 + 4375);
          v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v12 = (v58 & *(_DWORD *)(v57 + 20)) == 0;
          *(_DWORD *)(v57 + 20) &= v58;
          if ( v12 )
            sub_140418E4C((__int64)v56);
        }
      }
    }
    __writecr8(v28);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    sub_1402AFC00((ULONG_PTR)&qword_140C55040);
    v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v12 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    v59 = sub_140277D10(v18, v4, v4, 0LL, 0, 1uLL, 1u, 0x80000000, 0x80000000, v75, 0, 0LL, &v73);
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
    if ( v4 <= qword_140C50840 && (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      v60 = (unsigned __int8)sub_1402F2700(v9);
      if ( v59 >= 0 )
      {
        if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
        {
          *(_WORD *)(v9 + 32) = 0;
          sub_14033C3E0(v9, 0LL);
          sub_1402BF9C0(v61, 0x20u);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v62 = dword_140D06B08;
          if ( dword_140D06B08 )
            goto LABEL_147;
          goto LABEL_153;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v67 = KeGetCurrentIrql();
            if ( v67 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v67 >= 2u )
            {
              v68 = KeGetCurrentPrcb();
              v69 = *((_QWORD *)v68 + 4375);
              v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
              v12 = (v70 & *(_DWORD *)(v69 + 20)) == 0;
              *(_DWORD *)(v69 + 20) &= v70;
              if ( v12 )
                sub_140418E4C((__int64)v68);
            }
          }
        }
        __writecr8(v60);
        sub_140213FA8(v4, 1uLL);
LABEL_171:
        sub_1403606C4(*(_QWORD *)(v18 + 176));
        if ( v59 == -1073741523 || v59 == -1073741670 )
        {
          v8 = v59;
          v46 = v59;
          goto LABEL_174;
        }
        goto LABEL_94;
      }
      if ( sub_140273354(v9) )
      {
        v59 = 0;
      }
      else if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
      {
        v8 = 259;
        byte_140C52B30 = 1;
        v59 = 0;
        v77 = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v62 = dword_140D06B08;
      if ( dword_140D06B08 )
      {
LABEL_147:
        if ( (v62 & 1) != 0 )
        {
          v63 = KeGetCurrentIrql();
          if ( v63 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v63 >= 2u )
          {
            v64 = KeGetCurrentPrcb();
            v65 = *((_QWORD *)v64 + 4375);
            v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
            v12 = (v66 & *(_DWORD *)(v65 + 20)) == 0;
            *(_DWORD *)(v65 + 20) &= v66;
            if ( v12 )
              sub_140418E4C((__int64)v64);
          }
        }
      }
LABEL_153:
      __writecr8(v60);
    }
    else
    {
      v8 = -1073741584;
    }
    sub_14028CE10(v18, 1LL);
    v71 = sub_14028CD10((ULONG_PTR *)v18, 1uLL);
    if ( v71 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 16960), v71);
    goto LABEL_171;
  }
  v8 = -1073741670;
  v46 = -1073741670;
  sub_1403606C4(*(_QWORD *)(v18 + 176));
LABEL_174:
  v5 = v72;
LABEL_97:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
  sub_1402AFC00((ULONG_PTR)&qword_140C55040);
  v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v12 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v77 )
    ZwUpdateWnfStateData(&stru_140037788, 0LL, 0, 0LL, 0LL, 0, 0);
  v12 = v74 == 1;
  *(_QWORD *)a2 = (v74 + v4 - v5) << 12;
  if ( v12 )
    return v8;
  return v46;
}
