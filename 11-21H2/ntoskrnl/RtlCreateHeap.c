/*
 * XREFs of RtlCreateHeap @ 0x1407F3B40
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_1403631E0 @ 0x1403631E0 (sub_1403631E0.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_14036FD8C @ 0x14036FD8C (sub_14036FD8C.c)
 *     sub_14037003C @ 0x14037003C (sub_14037003C.c)
 *     sub_140370054 @ 0x140370054 (sub_140370054.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405E8D90 @ 0x1405E8D90 (sub_1405E8D90.c)
 *     sub_1405EA72C @ 0x1405EA72C (sub_1405EA72C.c)
 *     sub_1405F1AA4 @ 0x1405F1AA4 (sub_1405F1AA4.c)
 *     sub_1405F1F34 @ 0x1405F1F34 (sub_1405F1F34.c)
 *     sub_1405F27C0 @ 0x1405F27C0 (sub_1405F27C0.c)
 */

PVOID __stdcall RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PRTL_HEAP_PARAMETERS Parameters)
{
  unsigned __int64 InitialReserve; // r15
  struct _ERESOURCE *v10; // r12
  unsigned __int64 v11; // rdx
  int v12; // r8d
  void *v13; // rdi
  __int64 v14; // rcx
  ULONG v16; // ecx
  ULONG v17; // ecx
  int v18; // edx
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  SIZE_T v26; // rdx
  ULONG_PTR v27; // rcx
  int v28; // r13d
  char *v29; // rsi
  char *v30; // r8
  ULONG_PTR v31; // rcx
  char *v32; // rdx
  __int64 v33; // rdi
  unsigned __int64 v34; // rdi
  unsigned int v35; // r13d
  __int64 v36; // r9
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _DWORD *v41; // rcx
  PVOID v42; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-1D0h]
  ULONG_PTR v44; // [rsp+50h] [rbp-1C8h] BYREF
  int v45; // [rsp+58h] [rbp-1C0h]
  ULONG_PTR v46; // [rsp+60h] [rbp-1B8h] BYREF
  PVOID v47; // [rsp+68h] [rbp-1B0h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-1A8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-1A0h] BYREF
  ULONG_PTR v50; // [rsp+80h] [rbp-198h] BYREF
  __int64 v51; // [rsp+88h] [rbp-190h]
  __int64 v52; // [rsp+90h] [rbp-188h]
  __int64 v53; // [rsp+98h] [rbp-180h]
  __int64 v54; // [rsp+A0h] [rbp-178h]
  unsigned __int64 v55; // [rsp+A8h] [rbp-170h]
  __int64 v56[2]; // [rsp+B0h] [rbp-168h] BYREF
  __int128 MemoryInformation; // [rsp+C0h] [rbp-158h] BYREF
  __int128 v58; // [rsp+D0h] [rbp-148h]
  __int128 v59; // [rsp+E0h] [rbp-138h]
  _OWORD v60[7]; // [rsp+F0h] [rbp-128h] BYREF
  __int128 v61; // [rsp+160h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+170h] [rbp-A8h]
  __int128 v63; // [rsp+180h] [rbp-98h]
  _QWORD SystemInformation[8]; // [rsp+190h] [rbp-88h] BYREF

  InitialReserve = ReserveSize;
  BaseAddress = (PVOID)ReserveSize;
  v43 = (__int64)Lock;
  v51 = (__int64)HeapBase;
  RegionSize = (ULONG_PTR)Lock;
  v47 = 0LL;
  LODWORD(v44) = NtGlobalFlag;
  MemoryInformation = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v45 = 0;
  v46 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v42 = 0LL;
  v10 = 0LL;
  if ( (Flags & 0x100) == 0 )
  {
    if ( (Flags & 0x200) != 0 )
      goto LABEL_14;
    if ( (Flags & 0x10000000) == 0 )
    {
      v16 = Flags & 0xFFF80C00;
      if ( dword_140D04920 < 2 )
      {
        if ( v16 )
          Flags &= 0x7F3FFu;
      }
      else if ( v16 )
      {
        DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
        sub_1405F1F34();
      }
    }
    memset(&v60[1], 0, 0x60uLL);
    if ( Parameters && Parameters->Length == 96 )
      *(struct _RTL_HEAP_PARAMETERS *)&v60[1] = *Parameters;
    v17 = Flags | 0x20;
    if ( (v44 & 0x10) == 0 )
      v17 = Flags;
    v18 = v17 | 0x40;
    if ( (v44 & 0x20) == 0 )
      v18 = v17;
    v19 = v18 | 0x80;
    if ( (v44 & 0x200000) == 0 )
      v19 = v18;
    v20 = *((_QWORD *)&v60[1] + 1);
    if ( !*((_QWORD *)&v60[1] + 1) )
      v20 = qword_140D051F8;
    v53 = v20;
    v21 = *(_QWORD *)&v60[2];
    if ( !*(_QWORD *)&v60[2] )
      v21 = qword_140D051F0;
    v54 = v21;
    v22 = *((_QWORD *)&v60[2] + 1);
    if ( !*((_QWORD *)&v60[2] + 1) )
      v22 = qword_140D051E0;
    v55 = v22;
    v23 = *(_QWORD *)&v60[3];
    if ( !*(_QWORD *)&v60[3] )
      v23 = qword_140D051E8;
    *(_QWORD *)&v60[0] = v23;
    v24 = qword_140D04910;
    if ( !qword_140D04910 )
    {
      qword_140D04918 = 0x10000LL;
      if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
        goto LABEL_14;
      v24 = SystemInformation[5];
      qword_140D04910 = SystemInformation[5];
    }
    v52 = *((_QWORD *)&v60[3] + 1);
    if ( !*((_QWORD *)&v60[3] + 1) )
      v52 = v24 - qword_140D04918 - 4096;
    v25 = *(_QWORD *)&v60[4];
    if ( (unsigned __int64)(*(_QWORD *)&v60[4] - 1LL) > 0xFEFFF )
      v25 = 1044480LL;
    v56[0] = v25;
    if ( CommitSize )
      v26 = (CommitSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v26 = 0x2000LL;
    v46 = v26;
    if ( BaseAddress )
      v27 = ((unsigned __int64)BaseAddress + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v27 = (v26 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v44 = v27;
    if ( v26 > v27 )
    {
      v46 = v27;
      v26 = v27;
    }
    if ( (v19 & 2) == 0 || HeapBase )
    {
      v51 = 0LL;
    }
    else
    {
      v51 = 4096LL;
      v45 = 2;
      if ( v27 - 4096 < v26 )
      {
        v27 = (v27 + 69631) & 0xFFFFFFFFFFFF0000uLL;
        v44 = v27;
      }
    }
    if ( !v26 || !v27 )
      goto LABEL_14;
    v28 = 704;
    v14 = v43;
    if ( (v19 & 1) != 0 )
    {
      if ( v43 )
        goto LABEL_73;
    }
    else
    {
      if ( v43 )
        v19 |= 0x80000000;
      v28 = v43 != 0 ? 704 : 808;
      v10 = (struct _ERESOURCE *)(v43 & -(__int64)(v43 != 0));
    }
    if ( HeapBase )
    {
      if ( *((_QWORD *)&v60[5] + 1) )
      {
        if ( !*((_QWORD *)&v60[4] + 1)
          || !*(_QWORD *)&v60[5]
          || *((_QWORD *)&v60[4] + 1) > *(_QWORD *)&v60[5]
          || (v19 & 2) != 0 )
        {
          goto LABEL_14;
        }
        v47 = HeapBase;
        v29 = (char *)HeapBase + *((_QWORD *)&v60[4] + 1);
        v44 = *(_QWORD *)&v60[5];
        memset(HeapBase, 0, 0x1000uLL);
        v30 = (char *)HeapBase;
      }
      else
      {
        if ( ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               HeapBase,
               MemoryBasicInformation,
               &MemoryInformation,
               0x30uLL,
               0LL) < 0 )
          goto LABEL_14;
        v29 = (char *)MemoryInformation;
        if ( (PVOID)MemoryInformation != HeapBase || (_DWORD)v59 == 0x10000 )
          goto LABEL_14;
        v30 = (char *)MemoryInformation;
        v47 = (PVOID)MemoryInformation;
        if ( (_DWORD)v59 == 4096 )
        {
          if ( (v19 & 0x40000) != 0 && (BYTE4(v59) & 0x40) == 0 )
            goto LABEL_14;
          memset((void *)MemoryInformation, 0, 0x1000uLL);
          if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, &v61, 0x30uLL, 0LL) < 0 )
            goto LABEL_14;
          v44 = v62;
          v46 = *((_QWORD *)&v58 + 1);
          v30 = (char *)v47;
          v29 = (char *)v47 + *((_QWORD *)&v58 + 1);
        }
        else
        {
          v44 = *((_QWORD *)&v58 + 1);
          v31 = v46;
          if ( v46 > *((_QWORD *)&v58 + 1) )
            v31 = *((_QWORD *)&v58 + 1);
          v46 = v31;
          if ( v31 < 0x2000 )
            goto LABEL_14;
        }
      }
      v45 |= 1u;
      v32 = (char *)HeapBase;
      v42 = HeapBase;
      goto LABEL_93;
    }
    BaseAddress = 0LL;
    if ( !*((_QWORD *)&v60[5] + 1) )
    {
      v50 = (sub_1403631E0(v43, v26) & 0x1F) << 16;
      RegionSize = v44 + v50;
      if ( v44 + v50 < v44 )
      {
        RegionSize = v44;
        v50 = 0LL;
      }
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
        goto LABEL_14;
      v32 = (char *)BaseAddress;
      v42 = BaseAddress;
      v44 = RegionSize;
      if ( v50 )
      {
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v50, 0x8000u);
        v32 = (char *)BaseAddress + v50;
        v42 = (char *)BaseAddress + v50;
        v44 = RegionSize - v50;
      }
      v30 = v32;
      v47 = v32;
      v29 = v32;
LABEL_93:
      if ( v30 != v29 )
        goto LABEL_96;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v47, 0LL, &v46, 0x1000u, 4u) >= 0 )
      {
        v29 += v46;
        v32 = (char *)v42;
LABEL_96:
        v33 = (__int64)(v32 + 704);
        if ( (NtGlobalFlag & 0x800) != 0 )
        {
          v34 = (unsigned __int64)(v32 + 711) & 0xFFFFFFFFFFFFFFF8uLL;
          *((_QWORD *)v32 + 41) = v34;
          v28 += 2064;
          v33 = v34 + 2064;
          v19 |= 0x4000000u;
          v32 = (char *)v42;
        }
        v35 = (v28 + 15) & 0xFFFFFFF0;
        *((_WORD *)v32 + 4) = v35 >> 4;
        *((_BYTE *)v42 + 10) = 1;
        *((_BYTE *)v42 + 15) = 1;
        *((_DWORD *)v42 + 38) = -285217025;
        *((_DWORD *)v42 + 28) = v19 & 0xEFFFFFFF;
        *((_DWORD *)v42 + 36) = 0;
        memset((char *)v42 + 568, 0, 0x78uLL);
        sub_1405E8D90((__int64)v42);
        *((_DWORD *)v42 + 29) = v19 & 0x6001007D;
        *((_WORD *)v42 + 105) = v33 - (_WORD)v42;
        *((_QWORD *)v42 + 27) = 0LL;
        v37 = (char *)v42 + 336;
        *((_QWORD *)v42 + 43) = (char *)v42 + 336;
        *v37 = v37;
        v38 = (char *)v42 + 272;
        *((_QWORD *)v42 + 35) = (char *)v42 + 272;
        *v38 = v38;
        v39 = (char *)v42 + 288;
        *((_QWORD *)v42 + 37) = (char *)v42 + 288;
        *v39 = v39;
        v40 = (char *)v42 + 240;
        *((_QWORD *)v42 + 31) = (char *)v42 + 240;
        *v40 = v40;
        if ( !v10 && (v19 & 1) == 0 )
        {
          v10 = (struct _ERESOURCE *)v33;
          if ( ExInitializeResourceLite((PERESOURCE)v33) < 0 )
          {
            v10 = 0LL;
            goto LABEL_14;
          }
          v33 += 104LL;
        }
        *((_QWORD *)v42 + 44) = v10;
        *((_DWORD *)v42 + 30) |= 0x80000000;
        if ( sub_1405EA72C(
               (__int64)v42,
               (__int64)v42,
               v35 + 1104,
               v36,
               v45,
               (__int64)v47,
               v29,
               (unsigned __int64)v47 + v44 - v51) )
        {
          if ( HeapBase )
            memset((void *)v33, 0, 0x80uLL);
          *(_DWORD *)(v33 + 8) = 128;
          *(_QWORD *)(v33 + 40) = v33 + 56;
          *(_QWORD *)(v33 + 32) = (char *)v42 + 336;
          *(_QWORD *)(v33 + 48) = v33 + 72;
          sub_1405F27C0((ULONG_PTR)v42, v33);
          *((_WORD *)v42 + 104) = 0;
          *((_QWORD *)v42 + 20) = v53;
          *((_QWORD *)v42 + 21) = v54;
          *((_QWORD *)v42 + 22) = v55 >> 4;
          *((_QWORD *)v42 + 23) = *(_QWORD *)&v60[0] >> 4;
          *((_QWORD *)v42 + 25) = v52;
          *((_DWORD *)v42 + 37) = (unsigned __int64)(v56[0] + 15) >> 4;
          *((_QWORD *)v42 + 45) = qword_140C5AE40 ^ *((_QWORD *)&v60[5] + 1);
          *((_DWORD *)v42 + 172) = 4;
          *((_QWORD *)v42 + 87) = 2088960LL;
          *((_QWORD *)v42 + 32) = 31LL;
          *((_QWORD *)v42 + 33) = -16LL;
          v41 = v42;
          if ( (*((_DWORD *)v42 + 28) & 0x20) != 0 )
          {
            *((_QWORD *)v42 + 32) += 16LL;
            v41 = v42;
          }
          v41[30] &= ~0x80000000;
          v13 = v42;
          v42 = 0LL;
          v10 = 0LL;
          goto LABEL_10;
        }
      }
LABEL_14:
      v13 = 0LL;
      goto LABEL_10;
    }
LABEL_73:
    v13 = 0LL;
    goto LABEL_11;
  }
  if ( !HeapBase )
    goto LABEL_14;
  if ( v43 )
    goto LABEL_14;
  if ( (Flags & 2) != 0 )
    goto LABEL_14;
  sub_140370054(Flags, v44);
  if ( Parameters->CommitRoutine )
  {
    CommitSize = Parameters->InitialCommit;
    if ( !CommitSize )
      goto LABEL_14;
    InitialReserve = Parameters->InitialReserve;
    if ( !InitialReserve || CommitSize > InitialReserve )
      goto LABEL_14;
  }
  *(_OWORD *)v56 = *sub_14037003C(v60);
  v13 = (void *)sub_14036FD8C(HeapBase, v11, InitialReserve, CommitSize, v12, v56);
LABEL_10:
  v14 = v43;
LABEL_11:
  if ( v10 && v10 != (struct _ERESOURCE *)v14 )
    ExDeleteResourceLite(v10);
  if ( v42 && !HeapBase )
  {
    v44 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v42, &v44, 0x8000u);
  }
  return v13;
}
