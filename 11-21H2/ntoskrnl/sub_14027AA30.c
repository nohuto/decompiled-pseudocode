/*
 * XREFs of sub_14027AA30 @ 0x14027AA30
 * Callers:
 *     sub_14027938C @ 0x14027938C (sub_14027938C.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 * Callees:
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_14025868C @ 0x14025868C (sub_14025868C.c)
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B250 @ 0x14027B250 (sub_14027B250.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028D2D8 @ 0x14028D2D8 (sub_14028D2D8.c)
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140338080 @ 0x140338080 (sub_140338080.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140394B24 @ 0x140394B24 (sub_140394B24.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045D5EA @ 0x14045D5EA (sub_14045D5EA.c)
 *     sub_140584530 @ 0x140584530 (sub_140584530.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     sub_140593A80 @ 0x140593A80 (sub_140593A80.c)
 */

__int64 __fastcall sub_14027AA30(__int64 a1, ULONG_PTR a2, unsigned int *a3, __int64 a4)
{
  ULONG_PTR v4; // r15
  __int64 v5; // rsi
  __int64 v6; // r13
  ULONG_PTR v8; // rbx
  __int64 v9; // rcx
  ULONG_PTR v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  int v20; // eax
  volatile signed __int64 *v21; // rcx
  int v22; // ebp
  int v23; // r12d
  unsigned int v24; // esi
  unsigned int *v25; // rax
  bool v26; // zf
  ULONG_PTR v27; // r12
  int v28; // esi
  __int64 result; // rax
  unsigned __int64 v30; // r14
  unsigned int v31; // r12d
  void *v32; // rsi
  ULONG_PTR *i; // rsi
  _QWORD *v34; // rdx
  __int64 v35; // rbp
  ULONG_PTR v36; // rcx
  int v37; // ebp
  __int64 v38; // r14
  void (__fastcall __noreturn *v39)(); // rsi
  __int64 v40; // rax
  int v41; // r8d
  unsigned int v42; // eax
  unsigned __int64 v43; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v46; // eax
  int v47; // r15d
  ULONG_PTR v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned __int64 v52; // r14
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  int v55; // eax
  __int64 v56; // r8
  unsigned __int64 v57; // [rsp+70h] [rbp-88h]
  ULONG_PTR v58; // [rsp+70h] [rbp-88h]
  int v59; // [rsp+78h] [rbp-80h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-78h]
  __int64 v61; // [rsp+88h] [rbp-70h] BYREF
  __int64 v62; // [rsp+98h] [rbp-60h]
  ULONG_PTR *v63; // [rsp+A0h] [rbp-58h]
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-50h]
  unsigned __int8 v65; // [rsp+100h] [rbp+8h] BYREF
  __int64 v66; // [rsp+108h] [rbp+10h]
  unsigned int *v67; // [rsp+110h] [rbp+18h]
  unsigned int v68; // [rsp+118h] [rbp+20h]

  v67 = a3;
  v4 = a2 + 272;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0LL;
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  v8 = -1LL;
  v9 = *(_QWORD *)(a2 + 248);
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v11 = *(_QWORD *)(a2 + 256);
  v61 = -1LL;
  v12 = *(_QWORD *)(v9 + 40);
  if ( v11 )
    v4 = v11;
  v65 = 0;
  v68 = 0;
  v66 = v5;
  v62 = v9;
  v63 = (ULONG_PTR *)(v4 + 48);
  if ( (v12 & 0x10000000000LL) == 0 && *(__int64 *)(v9 + 8) > 0 )
  {
    v36 = 0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4);
    v58 = v36;
    if ( v36 < qword_140C50840 )
    {
      v37 = ~(*(_DWORD *)(a1 + 80) << 11) & 0x20000 | 0x40000000;
      v38 = *(_QWORD *)(qword_140C51F48 + 8 * ((v12 >> 43) & 0x3FF));
      v39 = (void (__fastcall __noreturn *)())*((_QWORD *)KeGetCurrentThread() + 164);
      v40 = sub_1402C1550(v36);
      v41 = v37 | 8;
      v42 = *(_DWORD *)(v40 + 8);
      if ( v39 != sub_1403C6D20 )
        v41 = v37;
      sub_140277D10(
        v38,
        v58 + 1,
        qword_140C50840,
        0LL,
        0,
        1uLL,
        *(unsigned __int8 *)(v62 + 34) >> 6,
        v42,
        0x80000000,
        v41,
        0,
        0LL,
        &v61);
      v5 = v66;
    }
  }
  v13 = *(_QWORD *)(a1 + 16);
  if ( (v13 & 1) != 0 )
  {
    v34 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v34 == 2 )
    {
      if ( v5 )
        sub_14025868C(a2, v34, v5, a4);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  if ( *(_QWORD *)(a2 + 264) )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, *(_QWORD *)(a2 + 264), 0LL);
  if ( v5 && (*(_BYTE *)(v5 + 187) & 0x60) == 0x60 && !*(_QWORD *)(sub_140282AD0(v5) + 32) )
    sub_1402D0930(a2 + 104, 0LL);
  if ( _bittest16((const signed __int16 *)(v4 + 10), 9u) )
  {
    sub_140584530(v4);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  v16 = *(unsigned int *)(a2 + 192);
  if ( (v16 & 0x10) != 0 )
  {
    v35 = *(_QWORD *)(a2 + 336);
    if ( v35 )
    {
      v43 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v35 + 232));
      RtlAvlRemoveNode(v35 + 240, a2 + 352);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v35 + 232));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v43 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
            v26 = (v46 & *(_DWORD *)(v15 + 20)) == 0;
            v14 = (unsigned int)v46 & *(_DWORD *)(v15 + 20);
            *(_DWORD *)(v15 + 20) = v14;
            if ( v26 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v43);
      v16 = *(unsigned int *)(a2 + 192);
      v5 = v66;
    }
  }
  v17 = (*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF;
  v18 = *(unsigned int *)(a2 + 184);
  v19 = v17 + *(unsigned int *)(v4 + 40) + 4095LL;
  LODWORD(v66) = 0;
  v57 = v4 + 8 * ((v19 >> 12) + 5);
  if ( (v16 & 0x100) != 0 )
    sub_140394B24(a2);
  v20 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( v20 >= 0 )
    {
      LODWORD(v66) = sub_140338080(v17, a2);
      if ( (_DWORD)v66 == -1073740748 )
        *(_DWORD *)(a2 + 192) |= 0x100000u;
    }
    v21 = **(volatile signed __int64 ***)(a2 + 208);
    v16 = _InterlockedExchangeAdd64(v21 + 14, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v16 == 1 )
      sub_1402700FC((PVOID)v21);
  }
  else if ( v20 >= 0 && (*(_DWORD *)(a2 + 192) & 0x400000) != 0 )
  {
    LODWORD(v66) = sub_14045D5EA(a2);
  }
  v22 = *(_DWORD *)(a2 + 80);
  v23 = v68 & 1;
  v59 = v23;
  if ( (v68 & 1) != 0 )
  {
    v24 = 2;
  }
  else
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, ((unsigned int)v18 >> 12) + ((v18 & 0xFFF) != 0));
    if ( v5 && (*(_DWORD *)(a2 + 192) & 8) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 168));
    v24 = 0;
  }
  v25 = v67;
  if ( *(_QWORD *)v67 )
  {
    sub_14027B250(*(_QWORD *)v67, v24);
    v25 = v67;
  }
  v26 = (*(_BYTE *)(v4 + 10) & 1) == 0;
  *v25 = v24;
  if ( !v26 )
    MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
  *(_DWORD *)(a2 + 188) = -1;
  if ( v22 >= 0 )
  {
    v27 = *(_QWORD *)(a2 + 88);
    if ( v27 != v18 )
    {
      if ( v27 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v59 )
          KeBugCheckEx(0x7Au, 4uLL, v27, a2, BugCheckParameter4);
        v30 = 8
            * ((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
              - (unsigned __int64)(unsigned int)(v18 - *(_DWORD *)(v4 + 40))
              + v27
              + 4095) >> 12)
            + 40;
        v31 = v27 & 0xFFF;
        if ( v31 )
        {
          v32 = (void *)(v31 + sub_1402CC7C0(*(_QWORD *)(v30 + v4), &v65, 0x80000000LL));
          memset(v32, 0, 4096 - v31);
          sub_1402BEDD0(v32, v65, 0x80000000LL);
        }
        if ( v30 + v4 + 8 <= v57 )
          *(_DWORD *)(a2 + 188) = ((__int64)(v30 - 48) >> 3) + 1;
      }
      else
      {
        v22 = -1073741801;
      }
    }
    v28 = v66;
    if ( (_DWORD)v66 != -1073741761 )
      goto LABEL_32;
    v47 = 0;
LABEL_84:
    if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
      && (unsigned int)sub_14027B080(BugCheckParameter4, v16, v14, v15) != 8
      && !(unsigned int)sub_140593A80(BugCheckParameter4) )
    {
      if ( !v47 )
      {
        v48 = BugCheckParameter1;
        if ( (unsigned __int8)sub_14028FBF0(BugCheckParameter1) )
          v8 = sub_140317A10(v48);
        sub_14058DCA8(1LL);
        if ( v28 < 0 )
          v22 = v28;
        KeBugCheckEx(0x7Au, v48, v22, v8, BugCheckParameter4);
      }
      if ( v28 != -1073741761 )
        v22 = -1073741801;
    }
    goto LABEL_32;
  }
  if ( v22 != -1073741807 )
  {
    if ( v22 == -2147483626 )
      goto LABEL_32;
    v47 = sub_14028D2D8((unsigned int)v22, *(unsigned int *)(v4 + 40), v14);
    if ( v47 && !dword_140C531D8 && (!v23 || (v68 & 2) != 0) )
      dword_140C531D8 = 32;
    if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
    {
      v22 = -1073741801;
      goto LABEL_32;
    }
    v28 = v66;
    goto LABEL_84;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 )
    KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
  for ( i = v63; (unsigned __int64)i <= v57; ++i )
    sub_1402359C4(*i, 3, *(unsigned __int8 *)(48 * *i - 0x220000000000LL + 34) >> 6);
  v22 = 0;
LABEL_32:
  if ( v61 != -1 )
  {
    v49 = v62;
    sub_1402E7D60(v61, 0xAAAAAAAAAAAAAAABuLL * ((v62 + 0x220000000000LL) >> 4), 0LL, 1LL);
    v6 = 48 * v61 - 0x220000000000LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    sub_1402E89B0(v6 + 16, v50, v51);
    if ( ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 3 )
    {
      v52 = (unsigned __int8)sub_1402F2700(v6);
      *(_QWORD *)(v6 + 8) = *(_QWORD *)(v49 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
            v56 = *((_QWORD *)v54 + 4375);
            v26 = (v55 & *(_DWORD *)(v56 + 20)) == 0;
            *(_DWORD *)(v56 + 20) &= v55;
            if ( v26 )
              sub_140418E4C(v54);
          }
        }
      }
      __writecr8(v52);
    }
  }
  result = v68;
  *(_DWORD *)(a2 + 112) = v68;
  *(_QWORD *)(a2 + 104) = v6;
  *(_DWORD *)(a2 + 80) = v22;
  return result;
}
