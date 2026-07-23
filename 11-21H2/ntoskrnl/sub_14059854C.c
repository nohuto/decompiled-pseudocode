/*
 * XREFs of sub_14059854C @ 0x14059854C
 * Callers:
 *     sub_14058FE88 @ 0x14058FE88 (sub_14058FE88.c)
 * Callees:
 *     sub_14023F8E8 @ 0x14023F8E8 (sub_14023F8E8.c)
 *     sub_14023F9CC @ 0x14023F9CC (sub_14023F9CC.c)
 *     sub_14023FA50 @ 0x14023FA50 (sub_14023FA50.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_14027E174 @ 0x14027E174 (sub_14027E174.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287A8C @ 0x140287A8C (sub_140287A8C.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406CAD9C @ 0x1406CAD9C (sub_1406CAD9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14059854C(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r13
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  int v12; // eax
  __int64 v13; // r8
  bool v14; // zf
  unsigned __int64 v15; // r13
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  __int64 v19; // r8
  PVOID v20; // rax
  void *v21; // rsi
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r15
  __int64 v30; // r15
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rdi
  int v36; // ebx
  __int64 *v37; // rax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  int v40; // eax
  __int64 v41; // r8
  __int64 *v42; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v45; // eax
  __int64 v46; // r8
  _QWORD v47[5]; // [rsp+20h] [rbp-38h] BYREF
  int v48; // [rsp+48h] [rbp-10h]
  int v49; // [rsp+4Ch] [rbp-Ch]
  __int64 v50; // [rsp+A0h] [rbp+48h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v53; // [rsp+B8h] [rbp+60h] BYREF

  v2 = 0LL;
  v49 = 0;
  v3 = 6 * a1;
  *(_QWORD *)(a2 + 8) = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 48 * a1 - 0x220000000000LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
  if ( a1 > qword_140C50840 || (*(_QWORD *)(8 * v3 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    sub_1402AFC00((ULONG_PTR)&qword_140C55040);
    v14 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( !v14 )
      return 3221226548LL;
    goto LABEL_106;
  }
  v7 = (unsigned __int8)sub_1402F2700(v6);
  if ( sub_140273354(v6)
    || (*(_BYTE *)(v6 + 35) & 0x40) == 0
    || (v8 = *(_QWORD *)(v6 + 40), v8 >= 0)
    || (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v46 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = (v45 & *(_DWORD *)(v46 + 20)) == 0;
          *(_DWORD *)(v46 + 20) &= v45;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
LABEL_18:
    sub_1402AFC00((ULONG_PTR)&qword_140C55040);
    v14 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( !v14 )
      return 3221226548LL;
LABEL_106:
    if ( *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 3221226548LL;
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( v9 >= 0 && (v8 & 0x10000000000LL) == 0 && v9 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v10 >= 2u )
        {
          v11 = KeGetCurrentPrcb();
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = *((_QWORD *)v11 + 4375);
          v14 = (v12 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v12;
          if ( v14 )
            sub_140418E4C((__int64)v11);
        }
      }
    }
    __writecr8(v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    goto LABEL_18;
  }
  v15 = v9 | 0x8000000000000000uLL;
  if ( v15 == qword_140C50668 )
  {
    v2 = 2147352576LL;
LABEL_24:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v19 = *((_QWORD *)v17 + 4375);
          v14 = (v18 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v18;
          if ( v14 )
            sub_140418E4C((__int64)v17);
        }
      }
    }
    __writecr8(v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    sub_1402AFC00((ULONG_PTR)&qword_140C55040);
    v14 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v14 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    v20 = sub_1402828F0(64, 0x30uLL, 0x6156694Du);
    v21 = v20;
    if ( !v20 )
      return 3221225626LL;
    *((_QWORD *)v20 + 2) = v2;
    *((_QWORD *)v20 + 3) = v2 + 4096;
    v23 = *((_QWORD *)CurrentThread + 23);
    *((_QWORD *)v20 + 1) = v23;
    *((_QWORD *)v20 + 4) = 0LL;
    *((_DWORD *)v20 + 10) = 0;
    *((_DWORD *)v20 + 11) = 1;
    if ( ObReferenceObjectSafeWithTag(v23) )
      return 0LL;
    ExFreePoolWithTag(v21, 0);
    return 3221225738LL;
  }
  if ( v15 == qword_140C50670 )
  {
    v2 = qword_140C50678;
    if ( qword_140C50678 )
      goto LABEL_24;
  }
  v24 = *(_DWORD *)(v6 + 16);
  v53 = v2;
  BugCheckParameter2 = v2;
  if ( (v24 & 0x400) != 0 )
  {
    v50 = sub_14023F8E8(v6, (__int64 *)&BugCheckParameter2, &v53);
    if ( !v50 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v28 = *((_QWORD *)v26 + 4375);
            v14 = (v27 & *(_DWORD *)(v28 + 20)) == 0;
            *(_DWORD *)(v28 + 20) &= v27;
            if ( v14 )
              sub_140418E4C((__int64)v26);
          }
        }
      }
      __writecr8(v7);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, v2, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
      sub_1402AFC00((ULONG_PTR)&qword_140C55040);
      v14 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v14 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      return 3221225497LL;
    }
    v29 = *(_QWORD *)(v6 + 16);
    if ( qword_140C50780 && (v29 & 0x10) == 0 )
      v29 &= ~qword_140C50780;
    v30 = v29 >> 16;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v34 = *((_QWORD *)v32 + 4375);
          v14 = (v33 & *(_DWORD *)(v34 + 20)) == 0;
          *(_DWORD *)(v34 + 20) &= v33;
          if ( v14 )
            sub_140418E4C((__int64)v32);
        }
      }
    }
    __writecr8(v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    sub_1402AFC00((ULONG_PTR)&qword_140C55040);
    v14 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v14 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    v35 = v50;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v41 = *((_QWORD *)v39 + 4375);
          v14 = (v40 & *(_DWORD *)(v41 + 20)) == 0;
          *(_DWORD *)(v41 + 20) &= v40;
          if ( v14 )
            sub_140418E4C((__int64)v39);
        }
      }
    }
    __writecr8(v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, v2, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    sub_1402AFC00((ULONG_PTR)&qword_140C55040);
    v14 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v14 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    v42 = sub_14023FA50(v15);
    v30 = (__int64)v42;
    if ( !v42 )
      return 3221225497LL;
    v35 = *v42;
  }
  v47[0] = v35;
  v47[1] = v15;
  v47[2] = v15;
  v47[3] = v30;
  v47[4] = v30;
  v48 = 0;
  v36 = sub_14027E174(v47, a2, 1, 0);
  if ( BugCheckParameter2 )
    sub_14023F9CC((__int64 *)BugCheckParameter2);
  v37 = (__int64 *)sub_140287A8C(v35, 0);
  if ( v37 )
    sub_1402879F8(v37);
  if ( v36 < 0 )
    sub_1406CAD9C(*(PVOID *)(a2 + 8));
  return (unsigned int)v36;
}
