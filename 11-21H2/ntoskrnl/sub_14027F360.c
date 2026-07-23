/*
 * XREFs of sub_14027F360 @ 0x14027F360
 * Callers:
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 * Callees:
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14026EF44 @ 0x14026EF44 (sub_14026EF44.c)
 *     sub_14027F9DC @ 0x14027F9DC (sub_14027F9DC.c)
 *     sub_140286920 @ 0x140286920 (sub_140286920.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_140286AB0 @ 0x140286AB0 (sub_140286AB0.c)
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140389084 @ 0x140389084 (sub_140389084.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 *     sub_14059D69C @ 0x14059D69C (sub_14059D69C.c)
 *     sub_1405A0FD8 @ 0x1405A0FD8 (sub_1405A0FD8.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

char __fastcall sub_14027F360(SECTION_OBJECT_POINTERS *a1, __int64 *a2, int a3, int a4, _BYTE *a5)
{
  char v5; // r15
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r14
  ULONG_PTR v13; // rsi
  unsigned __int8 v14; // di
  ULONG_PTR v15; // r8
  char v16; // bl
  KIRQL v17; // al
  unsigned __int64 v18; // r15
  BOOL v19; // r13d
  unsigned int v20; // r12d
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int8 v26; // dl
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v33; // r8
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // rax
  _BYTE *v42; // rcx
  __int64 v43; // rbx
  char v44; // [rsp+30h] [rbp-C8h]
  __int64 v45; // [rsp+38h] [rbp-C0h]
  ULONG_PTR v46; // [rsp+40h] [rbp-B8h]
  __int64 v47; // [rsp+48h] [rbp-B0h]
  int v48; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR v51[2]; // [rsp+70h] [rbp-88h]
  __int128 v52; // [rsp+80h] [rbp-78h]
  _BYTE v53[32]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-48h]
  __int64 v55; // [rsp+108h] [rbp+10h] BYREF
  int v56; // [rsp+118h] [rbp+20h]

  v56 = a4;
  LOBYTE(v55) = 0;
  v54 = 0LL;
  v5 = a4;
  v49 = 0LL;
  LODWORD(v7) = (_DWORD)a2;
  *a5 = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v51 = 0LL;
  v52 = 0LL;
  memset(v53, 0, sizeof(v53));
  if ( a2 )
  {
    v7 = &v49;
    v49 = *a2;
  }
  v8 = 0LL;
  v47 = 0LL;
  v9 = sub_14027F9DC(a1, (__int64)&v55);
  v10 = v55;
  v11 = v9;
  if ( (_BYTE)v55 == 17 )
    return 0;
  if ( !v9 )
    return 1;
  if ( (v5 & 1) == 0 && *(_DWORD *)(v9 + 88) || !*(_QWORD *)(v9 + 64) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v33 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = v55;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
          v35 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
          *(_DWORD *)(v33 + 20) &= v34;
          if ( v35 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    return 0;
  }
  *(_DWORD *)(v9 + 56) |= 0x8000u;
  if ( !(unsigned int)sub_140286AB0(v9, v10, (_DWORD)v7, a3, 1, (__int64)BugCheckParameter2) )
    return 1;
  v13 = BugCheckParameter2[1];
  v14 = 17;
  v15 = v51[1];
  v16 = 1;
  LOBYTE(v55) = 17;
  v44 = 1;
  while ( 1 )
  {
    v46 = v15;
    if ( v14 == 17 )
    {
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
      v15 = v46;
      v14 = v17;
      LOBYTE(v55) = v17;
    }
    if ( (_QWORD)v52 == v15 )
      v18 = v51[0] + 8;
    else
      v18 = *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu));
    v19 = (*(_BYTE *)(v11 + 62) & 0xC) != 0;
    if ( !*(_QWORD *)(v15 + 8) )
    {
      if ( v15 == (_QWORD)v52 )
        goto LABEL_51;
      goto LABEL_50;
    }
    if ( *(_DWORD *)(v15 + 108) )
      break;
    sub_140286EC0(v46);
    if ( (*(_BYTE *)(v46 + 34) & 8) != 0 )
      sub_14026EF44(v46);
    *(_WORD *)(v46 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && v14 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = *((_QWORD *)v37 + 4375);
          v14 = v55;
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
          v35 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
          *(_DWORD *)(v38 + 20) &= v39;
          if ( v35 )
            sub_140418E4C(v37);
        }
      }
    }
    __writecr8(v14);
    if ( v19 )
      sub_14059D69C(v46);
    v20 = 0;
    if ( v13 < v18 )
    {
      while ( 1 )
      {
        v45 = sub_140337B00(v13);
        if ( !v45 )
        {
          v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_59;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)v13;
            v22 = *(_QWORD *)v13;
            if ( (*(_QWORD *)v13 & 1) != 0 )
              goto LABEL_32;
            if ( (*(_QWORD *)v13 & 0xC00LL) != 0x800 )
              goto LABEL_54;
            if ( !v21 || !qword_140C50780 || (v21 & qword_140C50780) != 0 )
            {
              v22 = *(_QWORD *)v13;
              if ( qword_140C50780 && (v21 & 0x10) == 0 )
                v22 = v21 & ~qword_140C50780;
LABEL_32:
              v23 = (v22 >> 12) & 0xFFFFFFFFFFLL;
              if ( v23 <= qword_140C50840 )
              {
                if ( _bittest64((const signed __int64 *)(48 * v23 - 0x21FFFFFFFFD8LL), 0x36u) )
                  break;
              }
            }
          }
          v24 = 48 * v23 - 0x220000000000LL;
          v48 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v48);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          if ( *(_QWORD *)v13 == v21 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v24 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
          v24 = sub_14059A31C(v24, 0LL);
        if ( !v24 )
        {
LABEL_54:
          v13 += 8LL;
          goto LABEL_59;
        }
        BugCheckParameter4 = *(_QWORD *)v13;
        if ( v13 < 0xFFFFF6FB7DBED000uLL
          || v13 > 0xFFFFF6FB7DBED7F8uLL
          || (dword_140D06880 & 0xC00000) == 0
          || *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) == 1 )
        {
          goto LABEL_41;
        }
        if ( (BugCheckParameter4 & 1) != 0 )
        {
          if ( (BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0 )
          {
            v40 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
            if ( v40 )
            {
              v41 = *(_QWORD *)(v40 + 8 * ((v13 >> 3) & 0x1FF));
              if ( (v41 & 0x20) != 0 )
                BugCheckParameter4 |= 0x20uLL;
              if ( (v41 & 0x42) != 0 )
                BugCheckParameter4 |= 0x42uLL;
            }
          }
LABEL_41:
          if ( (BugCheckParameter4 & 1) != 0 )
            goto LABEL_45;
        }
        if ( (*(_DWORD *)(v24 + 16) & 0x401) != 0x400LL || (*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL) != v13 )
          KeBugCheckEx(0xDEu, 2uLL, v13, *(_QWORD *)(v24 + 8), BugCheckParameter4);
        v26 = *(_BYTE *)(v24 + 34);
        if ( (((v56 & 2) != 0) & (v26 >> 4)) != 0 )
        {
LABEL_45:
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = 0;
          v44 = 0;
          break;
        }
        if ( (v26 & 8) != 0 )
        {
          sub_140389084(v24, v11, v45, 17LL);
          goto LABEL_59;
        }
        if ( v19 )
        {
          v42 = a5;
          if ( *(_WORD *)(v24 + 32) )
            *a5 = 1;
          if ( (*(_BYTE *)(v11 + 62) & 0xC) == 8 )
            *v42 = 1;
        }
        sub_1402C3100(v13);
        v20 = 1;
        if ( *(_QWORD *)(v11 + 32) )
        {
          v13 += 8LL;
          if ( (v13 & 0x78) == 0 && KeShouldYieldProcessor() )
            sub_140334790(v45, 17LL);
LABEL_59:
          if ( v13 < v18 )
            continue;
        }
        v16 = v44;
        break;
      }
    }
    if ( v19 )
      sub_1405A0FD8(v46, v53, 0LL, v20);
    LOBYTE(v55) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    v14 = v55;
    sub_1402869C0(v46);
    v15 = v46;
    if ( *(_QWORD *)(v46 + 96) || (*(_BYTE *)(v46 + 34) & 1) != 0 )
    {
      v8 = v47;
    }
    else
    {
      v30 = sub_140220AAC(v46);
      v15 = v46;
      v8 = v30 + v47;
      v47 += v30;
    }
LABEL_50:
    if ( v15 == (_QWORD)v52 || !v16 )
      goto LABEL_51;
    v15 = *(_QWORD *)(v15 + 16);
    v13 = *(_QWORD *)(v15 + 8);
  }
  v16 = 0;
  v44 = 0;
LABEL_51:
  v27 = sub_140286920(v51[1]) + v8;
  v28 = sub_140286920(v52);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v29 = v28 + v27;
  if ( v29 )
  {
    v43 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
    sub_140287660(v11, v14);
    sub_1405C4B8C(v43, 1LL, v29);
    return v44;
  }
  else
  {
    sub_140287660(v11, v14);
  }
  return v16;
}
