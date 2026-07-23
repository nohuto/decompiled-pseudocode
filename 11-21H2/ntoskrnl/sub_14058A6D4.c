/*
 * XREFs of sub_14058A6D4 @ 0x14058A6D4
 * Callers:
 *     sub_14058BEE4 @ 0x14058BEE4 (sub_14058BEE4.c)
 * Callees:
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_14026EFD0 @ 0x14026EFD0 (sub_14026EFD0.c)
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287A2C @ 0x140287A2C (sub_140287A2C.c)
 *     sub_140287A8C @ 0x140287A8C (sub_140287A8C.c)
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14038868C @ 0x14038868C (sub_14038868C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14058B40C @ 0x14058B40C (sub_14058B40C.c)
 *     sub_14058B734 @ 0x14058B734 (sub_14058B734.c)
 *     sub_14058BA98 @ 0x14058BA98 (sub_14058BA98.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14058A6D4(__int64 a1)
{
  volatile LONG *v1; // rbp
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  _QWORD **v5; // r15
  unsigned __int64 v6; // r14
  _QWORD *i; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdi
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  __int64 v25; // r9
  int v26; // eax
  int v27; // ebx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  __int64 v30; // r9
  int v31; // eax
  int v32; // eax
  int v33; // r15d
  KIRQL v34; // al
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // eax
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // eax
  unsigned __int64 v44; // r14
  signed __int64 v45; // r12
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  __int64 v48; // r9
  int v49; // eax
  unsigned __int64 v50; // r14
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  __int64 v53; // r9
  int v54; // eax
  KIRQL v55; // al
  int v56; // ecx
  unsigned __int64 v57; // r14
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  __int64 v60; // r9
  int v61; // eax
  BOOL v62; // r12d
  KIRQL v63; // al
  int v64; // eax
  unsigned int v65; // ecx
  __int64 *v66; // rdi
  unsigned __int8 v67; // cl
  struct _KPRCB *v68; // r9
  __int64 v69; // r8
  int v70; // eax
  __int64 v71; // r12
  __int64 *v72; // rdi
  unsigned __int8 v73; // al
  char v74; // cl
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r9
  int v77; // eax
  __int64 v78; // r8
  ULONG_PTR v79; // [rsp+40h] [rbp-68h]
  int v80[24]; // [rsp+48h] [rbp-60h] BYREF
  struct _FILE_OBJECT *Object; // [rsp+B8h] [rbp+10h]
  PVOID P; // [rsp+C0h] [rbp+18h]
  __int64 v84; // [rsp+C8h] [rbp+20h]

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = 1LL;
  *(_OWORD *)v80 = 0LL;
  v4 = 1LL;
  v5 = (_QWORD **)(a1 + 1720);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v4 = (ULONG_PTR)(i - 10);
    v3 = *(i - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v3 + 72)) )
      break;
  }
  if ( i == v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = 3221226021LL;
LABEL_25:
    __writecr8(v6);
    return result;
  }
  v14 = (_QWORD *)(v4 + 80);
  v15 = *(_QWORD *)(v4 + 80);
  v16 = *(_QWORD **)(v4 + 88);
  if ( *(_QWORD *)(v15 + 8) != v4 + 80 || (_QWORD *)*v16 != v14 )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  *(_WORD *)(v4 + 34) &= ~8u;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *v14 = v14;
  sub_14026EFD0((unsigned int *)v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v17 = *(_DWORD *)(v3 + 56);
  if ( (v17 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = *((_QWORD *)v19 + 4375);
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v12 )
            sub_140418E4C((__int64)v19);
        }
      }
    }
    result = 3221225587LL;
    goto LABEL_25;
  }
  if ( (v17 & 8) != 0 )
  {
    if ( *(int *)(v4 + 52) < 0 )
    {
      v22 = sub_140220AAC(v4);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = *((_QWORD *)v24 + 4375);
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v12 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
            *(_DWORD *)(v25 + 20) &= v26;
            if ( v12 )
              sub_140418E4C((__int64)v24);
          }
        }
      }
      __writecr8(v6);
      if ( v22 )
        sub_1405C4B8C(a1, 1LL, v22);
      return 3221225504LL;
    }
    v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  if ( *(_QWORD *)(v4 + 96) )
    KeBugCheckEx(0x1Au, 0x42004uLL, v4, 0LL, 0LL);
  *(_QWORD *)(v4 + 96) = 1LL;
  *(_WORD *)(v4 + 32) &= ~1u;
  sub_140287A2C(v3);
  *(_DWORD *)(v3 + 56) |= 0x100u;
  P = *(PVOID *)(v4 + 8);
  if ( v27 )
  {
    ++*(_DWORD *)(v3 + 76);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = *((_QWORD *)v29 + 4375);
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
          *(_DWORD *)(v30 + 20) &= v31;
          if ( v12 )
            sub_140418E4C((__int64)v29);
        }
      }
    }
    __writecr8(v6);
    v32 = sub_14058B40C(v4);
    if ( v32 )
    {
      if ( v32 == 1 )
      {
        v34 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        *(_DWORD *)(v4 + 52) |= 0x80000000;
        v35 = v34;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = *((_QWORD *)v37 + 4375);
              v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
              v12 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
              *(_DWORD *)(v38 + 20) &= v39;
              if ( v12 )
                sub_140418E4C((__int64)v37);
            }
          }
        }
        __writecr8(v35);
      }
      v33 = -1073741792;
    }
    else
    {
      v33 = 0;
    }
  }
  else
  {
    Object = (struct _FILE_OBJECT *)sub_14058B734(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = *((_QWORD *)v41 + 4375);
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
          *(_DWORD *)(v42 + 20) &= v43;
          if ( v12 )
            sub_140418E4C((__int64)v41);
        }
      }
    }
    __writecr8(v6);
    v79 = *(_QWORD *)(v4 + 8);
    v84 = v79 - 8 + 8LL * *(unsigned int *)(v4 + 44);
    v33 = sub_1407F099C(Object);
    v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v45 = _InterlockedDecrement64((volatile signed __int64 *)(v3 + 112));
    *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) + 1688LL) = 0LL;
    if ( v33 < 0 || (*(_DWORD *)(v3 + 56) & 1) != 0 )
    {
      if ( v45 )
        ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v51 = KeGetCurrentIrql();
          if ( v51 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v51 >= 2u )
          {
            v52 = KeGetCurrentPrcb();
            v53 = *((_QWORD *)v52 + 4375);
            v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
            v12 = (v54 & *(_DWORD *)(v53 + 20)) == 0;
            *(_DWORD *)(v53 + 20) &= v54;
            if ( v12 )
              sub_140418E4C((__int64)v52);
          }
        }
      }
      __writecr8(v44);
      v50 = (unsigned __int64)Object;
      if ( v33 >= 0 )
      {
        sub_1407F0748(Object);
        v33 = -1073741431;
      }
      if ( !v45 )
      {
        sub_1402700FC((PVOID)v3);
        ObfDereferenceObjectWithTag(Object, 0x63536D4Du);
        return (unsigned int)v33;
      }
    }
    else
    {
      ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v46 = KeGetCurrentIrql();
          if ( v46 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v46 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            v48 = *((_QWORD *)v47 + 4375);
            v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
            v12 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
            *(_DWORD *)(v48 + 20) &= v49;
            if ( v12 )
              sub_140418E4C((__int64)v47);
          }
        }
      }
      __writecr8(v44);
      *((_QWORD *)KeGetCurrentThread() + 162) = 1LL;
      v50 = (unsigned __int64)Object;
      v33 = sub_140329730(v79, v84, (__int64 *)v4, v4, 0LL, 2u, v80);
      *((_QWORD *)KeGetCurrentThread() + 162) = 0LL;
      sub_1407F0748(Object);
    }
    sub_140230680((signed __int64 *)(v3 + 64), v50, 0x63536D4Du);
  }
  v55 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v56 = *(_DWORD *)(v3 + 56);
  v57 = v55;
  if ( (v56 & 1) != 0 )
  {
    *(_DWORD *)(v3 + 56) = v56 & 0xFFFFFEFF;
    goto LABEL_110;
  }
  if ( v33 < 0 )
    goto LABEL_108;
  if ( *(_QWORD *)(v4 + 96) != 1LL || (*(_BYTE *)(v4 + 32) & 1) != 0 )
  {
    v33 = -1073741823;
LABEL_108:
    v64 = 1;
    goto LABEL_109;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v58 = KeGetCurrentIrql();
      if ( v58 <= 0xFu && (unsigned __int8)v57 <= 0xFu && v58 >= 2u )
      {
        v59 = KeGetCurrentPrcb();
        v60 = *((_QWORD *)v59 + 4375);
        v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v57 + 1));
        v12 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
        *(_DWORD *)(v60 + 20) &= v61;
        if ( v12 )
          sub_140418E4C((__int64)v59);
      }
    }
  }
  __writecr8(v57);
  v62 = sub_14058BA98(v4) == 0;
  v63 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v56 = *(_DWORD *)(v3 + 56);
  LOBYTE(v57) = v63;
  v64 = v62;
LABEL_109:
  v65 = v56 & 0xFFFFFEFF;
  *(_DWORD *)(v3 + 56) = v65;
  if ( (v65 & 1) == 0 )
  {
    v71 = 0LL;
    if ( v64 || *(_QWORD *)(v4 + 96) != 1LL || *(_DWORD *)(v4 + 104) || (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      v33 = -1073741823;
      v71 = sub_1402869C0((_QWORD *)v4, 0);
      if ( !*(_QWORD *)(v4 + 96) )
        v71 += sub_140220AAC(v4);
      P = 0LL;
    }
    else
    {
      sub_14026EA80(v4 + 120, 0);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    v72 = (__int64 *)sub_140287A8C(v3, 1);
    if ( *(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v73 = KeGetCurrentIrql();
          if ( v73 <= 0xFu && (unsigned __int8)v57 <= 0xFu && v73 >= 2u )
          {
            v74 = v57 + 1;
            goto LABEL_142;
          }
        }
      }
    }
    else
    {
      if ( !*(_QWORD *)(v3 + 32) )
      {
        sub_14038868C(v3, v57, 0LL);
        goto LABEL_146;
      }
      v71 += sub_140287FB8(v3);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v75 = KeGetCurrentIrql();
          if ( v75 <= 0xFu && (unsigned __int8)v57 <= 0xFu && v75 >= 2u )
          {
            v74 = v57 + 1;
LABEL_142:
            v76 = KeGetCurrentPrcb();
            v77 = ~(unsigned __int16)(-1LL << v74);
            v78 = *((_QWORD *)v76 + 4375);
            v12 = (v77 & *(_DWORD *)(v78 + 20)) == 0;
            *(_DWORD *)(v78 + 20) &= v77;
            if ( v12 )
              sub_140418E4C((__int64)v76);
          }
        }
      }
    }
    __writecr8((unsigned __int8)v57);
LABEL_146:
    if ( v72 )
      sub_1402879F8(v72);
    if ( v71 )
      sub_1405C4B8C(a1, 1LL, v71);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v33;
  }
LABEL_110:
  sub_1402869C0((_QWORD *)v4, 0);
  v66 = (__int64 *)sub_140287A8C(v3, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v67 = KeGetCurrentIrql();
      if ( v67 <= 0xFu && (unsigned __int8)v57 <= 0xFu && v67 >= 2u )
      {
        v68 = KeGetCurrentPrcb();
        v69 = *((_QWORD *)v68 + 4375);
        v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v57 + 1));
        v12 = (v70 & *(_DWORD *)(v69 + 20)) == 0;
        *(_DWORD *)(v69 + 20) &= v70;
        if ( v12 )
          sub_140418E4C((__int64)v68);
      }
    }
  }
  __writecr8((unsigned __int8)v57);
  if ( v66 )
    sub_1402879F8(v66);
  return 3221225473LL;
}
