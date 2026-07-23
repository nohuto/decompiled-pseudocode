/*
 * XREFs of MiResolveMappedFileFault @ 0x1402E0870
 * Callers:
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x1402EF180 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025BD60 (MiGetAvailablePagesBelowPriority.c)
 *     MiComputeFaultNode @ 0x14025D820 (MiComputeFaultNode.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiObtainFaultCharges @ 0x140274E40 (MiObtainFaultCharges.c)
 *     MiSanitizePfnProtection @ 0x140278C90 (MiSanitizePfnProtection.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MiCopyDataPageToImagePage @ 0x14028B700 (MiCopyDataPageToImagePage.c)
 *     MiGetSessionIdForVa @ 0x1402A1960 (MiGetSessionIdForVa.c)
 *     MiFreeInPageSupportBlock @ 0x1402BD58C (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiUseSlabAllocator @ 0x1402DED50 (MiUseSlabAllocator.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E0000 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1402E0F74 (MiAllocateInPageSupport.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiPickClusterForMappedFileFault @ 0x1402E19A0 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1DD0 (MiFinishMdlForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x1402EE8B8 (MiComputeFaultCluster.c)
 *     KeInvalidAccessAllowed @ 0x140341F80 (KeInvalidAccessAllowed.c)
 *     MiReturnFaultCharges @ 0x140360060 (MiReturnFaultCharges.c)
 *     MiSetInPagePrefetchPriority @ 0x140367EC4 (MiSetInPagePrefetchPriority.c)
 *     MiGetSharedProtos @ 0x140369F2C (MiGetSharedProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C814 (MiCopyFileOnlyGlobalSubsectionPage.c)
 */

__int64 MiResolveMappedFileFault(__int64 a1, __int64 *a2, ...)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rcx
  bool v12; // zf
  __int64 SharedProtos; // r9
  __int64 v14; // r8
  unsigned int v15; // edi
  int v16; // r12d
  _BYTE *v17; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // r13
  _QWORD *v22; // rsi
  signed __int32 v23; // ecx
  unsigned int v24; // edi
  __int64 SlabPage; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 *v28; // rsi
  int v29; // r12d
  int v30; // r9d
  int v31; // ecx
  __int64 v32; // rbx
  unsigned int v33; // r15d
  unsigned __int64 v34; // rsi
  _QWORD *v35; // r13
  unsigned int v36; // eax
  __int64 v37; // rbx
  __int64 **v39; // r14
  __int64 v40; // r14
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  __int64 **v43; // r14
  unsigned __int64 v44; // rax
  unsigned int v45; // edi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int SessionIdForVa; // eax
  __int64 v50; // rdx
  char v51; // al
  __int64 v52; // rax
  struct _LIST_ENTRY *v53; // r8
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r12
  int v57; // eax
  unsigned int v58; // esi
  __int64 v59; // rcx
  unsigned int v60; // eax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-E0h]
  unsigned int BugCheckParameter3a; // [rsp+20h] [rbp-E0h]
  __int64 v63; // [rsp+28h] [rbp-D8h]
  __int64 v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+50h] [rbp-B0h] BYREF
  int v66; // [rsp+54h] [rbp-ACh]
  unsigned int v67; // [rsp+58h] [rbp-A8h]
  _BYTE *v68; // [rsp+60h] [rbp-A0h]
  unsigned int v69; // [rsp+68h] [rbp-98h]
  _QWORD *v70; // [rsp+70h] [rbp-90h]
  unsigned __int64 v71; // [rsp+78h] [rbp-88h]
  unsigned int v72; // [rsp+80h] [rbp-80h] BYREF
  __int64 **Address; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h]
  int v75[2]; // [rsp+98h] [rbp-68h]
  __int64 v76; // [rsp+A0h] [rbp-60h]
  __int64 v77; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-48h]
  __int64 v80; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v81; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v82; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v83[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v86; // [rsp+150h] [rbp+50h] BYREF
  va_list va; // [rsp+150h] [rbp+50h]
  __int64 *v88; // [rsp+158h] [rbp+58h]
  va_list va1; // [rsp+160h] [rbp+60h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v86 = va_arg(va1, _QWORD);
  v88 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *a2;
  v82 = 0LL;
  v81 = 0LL;
  v5 = (unsigned __int64)a2;
  v65 = 0;
  v72 = 0;
  v71 = *(_QWORD *)a1;
  v78 = *(_QWORD *)(a1 + 56);
  v83[0] = 0LL;
  *(_QWORD *)v75 = v2;
  v69 = MiPteInShadowRange((unsigned __int64)a2);
  if ( v69
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v47 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
      v48 = v3 | 0x20;
      if ( (v47 & 0x20) == 0 )
        v48 = v3;
      v3 = v48;
      if ( (v47 & 0x42) != 0 )
        v3 = v48 | 0x42;
    }
  }
  v68 = 0LL;
  v66 = 2;
  v77 = 0LL;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    MiUnlockProtoPoolPage(v86, 0x11u);
    return 3221225633LL;
  }
  v6 = v2 & 1;
  v7 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v2 & 1) != 0 )
  {
    switch ( *(_BYTE *)v7 )
    {
      case 5:
        if ( (*(_DWORD *)(v7 + 56) & 4) != 0 )
        {
          MiUnlockProtoPoolPage(v86, 0x11u);
          return 3221225495LL;
        }
        v68 = 0LL;
        break;
      case 1:
        v12 = (*(_DWORD *)(v7 + 80) & 0x100) == 0;
        v68 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v12 )
        {
          MiUnlockProtoPoolPage(v86, 0x11u);
          return 0LL;
        }
        v77 = *(_QWORD *)(v7 + 96);
        v66 = 0;
        break;
      case 2:
        v68 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
        break;
    }
  }
  v79 = v3 & 0x400;
  if ( (v3 & 0x400) != 0 )
  {
    v8 = v3;
    if ( qword_140C65B40 && (v3 & 0x10) == 0 )
      v8 = v3 & ~qword_140C65B40;
    v74 = 0LL;
  }
  else if ( qword_140C65B40 )
  {
    if ( (v3 & 0x10) != 0 )
      v44 = v3;
    else
      v44 = v3 & ~qword_140C65B40;
    v74 = 48 * ((v44 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v8 = *(_QWORD *)(v74 + 16);
    if ( (v8 & 0x10) == 0 )
      v8 &= ~qword_140C65B40;
  }
  else
  {
    v74 = 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v8 = *(_QWORD *)(v74 + 16);
  }
  v9 = v8 >> 16;
  v10 = *(_QWORD *)v9;
  v11 = *(unsigned int *)(*(_QWORD *)v9 + 56LL);
  if ( (v11 & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v86, 0x11u);
    return 3221225478LL;
  }
  v12 = (*(_BYTE *)(v9 + 34) & 2) == 0;
  SharedProtos = 0LL;
  v14 = *(_QWORD *)(v9 + 8);
  v76 = v14;
  v67 = -1;
  v80 = 0LL;
  if ( !v12 && (v11 & 0x8000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v11, v71);
    v50 = SessionIdForVa;
    v67 = SessionIdForVa;
    if ( v71 >= 0xFFFF800000000000uLL )
    {
      if ( v6 )
      {
        if ( *(_BYTE *)v7 == 1 || *(_BYTE *)v7 == 3 || *(_BYTE *)v7 == 6 )
        {
LABEL_108:
          v52 = *(_QWORD *)(a1 + 16);
          if ( (v52 & 1) == 0 || *(_BYTE *)(v52 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            goto LABEL_111;
        }
      }
      else
      {
        v51 = KeInvalidAccessAllowed(*(_QWORD *)v75, 0LL);
        v50 = v67;
        if ( v51 )
          goto LABEL_108;
      }
    }
    SharedProtos = MiGetSharedProtos(v10, v50, v9);
    v80 = SharedProtos;
    v14 = *(_QWORD *)(SharedProtos + 72);
    v76 = v14;
  }
  if ( v5 >= v14 - 8LL * (*(_DWORD *)(v9 + 52) & 0x3FFFFFFF) + 8 * (unsigned __int64)*(unsigned int *)(v9 + 44) )
  {
LABEL_111:
    MiUnlockProtoPoolPage(v86, 0x11u);
    return 3221225477LL;
  }
  v15 = 0;
  v16 = 0;
  v70 = *(_QWORD **)(qword_140C673C8 + 8LL * (*(_WORD *)(v10 + 60) & 0x3FF));
  if ( (*(_BYTE *)(v10 + 62) & 0xC) != 4 || (!SharedProtos ? (v16 = 2, v65 = 1) : (v16 = 1), v66 = 0, v16 != 2) )
  {
    Address = 0LL;
    v65 = 0;
    v15 = MiComputeFaultNode(a1, v10, &Address);
    if ( v16 == 1 )
    {
      v65 = 1;
    }
    else
    {
      v17 = v68;
      if ( v68 )
      {
        v43 = Address;
        if ( !Address )
        {
          MiLockVadTree(1);
          Address = MiLocateAddress(v71);
          v43 = Address;
          MiUnlockVadTree(1, 0x11u);
          v17 = v68;
        }
        v65 = MiComputeFaultCluster(v70, v17, v43, 0LL);
      }
      else if ( (v3 & 0x400) != 0 && (*(_BYTE *)(v10 + 56) & 0x20) == 0 && (*(_BYTE *)(v78 + 184) & 7) == 0 )
      {
        v39 = Address;
        if ( !Address )
        {
          MiLockVadTree(1);
          Address = MiLocateAddress(v71);
          v39 = Address;
          MiUnlockVadTree(1, 0x11u);
        }
        v40 = (__int64)v39[15];
        if ( v40 >= 0 )
        {
          v41 = v40 & 0xFFF;
          if ( v41 >= 0x11 && (v71 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v40 >> 12) - 1 + v41) << 12 )
          {
            v42 = v5 + 8;
            if ( (((_DWORD)v5 + 8) & 0xFFF) != 0
              && v42 < -8LL * (*(_DWORD *)(v9 + 52) & 0x3FFFFFFF)
                     + v76
                     + 8 * (unsigned __int64)*(unsigned int *)(v9 + 44)
              && MI_READ_PTE_LOCK_FREE(v42) == v3 )
            {
              v65 = (v40 & 0xFFF) - 1;
            }
          }
        }
      }
    }
  }
  v18 = MiAllocateInPageSupport(v5, v66, (unsigned int)&v65, (unsigned int)va, v77);
  if ( v18 )
  {
    v19 = *(_QWORD *)v5;
    if ( v69
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v53 )
      {
        v54 = *((_QWORD *)&v53->Flink + ((v5 >> 3) & 0x1FF));
        v55 = v19 | 0x20;
        if ( (v54 & 0x20) == 0 )
          v55 = *(_QWORD *)v5;
        v19 = v55;
        if ( (v54 & 0x42) != 0 )
          v19 = v55 | 0x42;
      }
    }
    if ( v19 != v3 || !v79 && ((*(_BYTE *)(v74 + 34) & 0x20) == 0 || (*(_DWORD *)(*(_QWORD *)v74 + 160LL) & 0x20) != 0) )
    {
      v45 = -1073740748;
      MiUnlockProtoPoolPage(v86, 0x11u);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v18);
      goto LABEL_77;
    }
    if ( v16 == 2 )
    {
      v56 = v86;
      goto LABEL_139;
    }
    if ( v68 && *v68 == 1 )
      MiSetInPagePrefetchPriority(v68, v18);
    v69 = MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(v9 + 32) >> 1) & 0x1F, (v3 >> 5) & 0x1F);
    MiInitializePageColorBase(v78, v15, v83);
    v21 = -1LL;
    if ( v16 == 1 )
      goto LABEL_27;
    if ( (*(_BYTE *)(v10 + 62) & 0xC) != 0
      || (*(_DWORD *)(v10 + 56) & 0x40020) != 32
      || (v3 & 0x400) == 0
      || dword_140C69658 )
    {
      goto LABEL_37;
    }
    if ( v20 )
    {
      v22 = v70;
      if ( *(_BYTE *)v20 == 1 && !MiGetAvailablePagesBelowPriority(v70, ((*(_DWORD *)(v20 + 80) >> 3) & 7u) + 1) )
        goto LABEL_37;
    }
    else
    {
LABEL_27:
      v22 = v70;
    }
    if ( MiObtainFaultCharges(v22, 1uLL, 1) )
    {
      v23 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&v83[0], 1u);
      v24 = HIDWORD(v83[0]) | v23 & DWORD2(v83[0]);
      if ( v79 && (unsigned int)MiUseSlabAllocator((__int64)v22, (__int64 *)v9, v3, &v72) && v72 <= 3 )
        SlabPage = MiGetSlabPage((__int64)v22, v72, v24, 0LL, 0LL);
      else
        SlabPage = MiGetPage((__int64)v22, v24, 0);
      v21 = SlabPage;
      if ( SlabPage != -1 )
      {
        if ( v16 != 1 )
        {
          v27 = v86;
          v28 = a2;
          v29 = v75[0];
          v64 = v86;
          BugCheckParameter3 = *(_QWORD *)v75;
          *(_QWORD *)(v18 + 224) = v71;
          if ( (unsigned int)MiCopyDataPageToImagePage(v18, v26, (_QWORD *)v9, a2, BugCheckParameter3, SlabPage, v64) )
          {
LABEL_42:
            *v88 = v18;
            return 3221435187LL;
          }
          goto LABEL_38;
        }
        v56 = v86;
        v5 = (unsigned __int64)a2;
        v57 = MiCopyFileOnlyGlobalSubsectionPage(v18, v9, (int)a2, v75[0], SlabPage, v86, v80);
        v58 = v57;
        if ( v57 >= 0 )
          goto LABEL_42;
        if ( v57 == -1073741739 )
        {
          v58 = 0;
LABEL_134:
          MiUnlockProtoPoolPage(v56, 0x11u);
          MiFreeInPageSupportBlock((PSLIST_ENTRY)v18);
          return v58;
        }
        if ( v57 != -1073740748 )
        {
          if ( v57 == -1073532109 )
          {
            v58 = -1073741802;
            *(_DWORD *)(a1 + 80) |= 0x80u;
          }
          goto LABEL_134;
        }
LABEL_139:
        MiUnlockProtoPoolPage(v56, 0x11u);
        v60 = *(_DWORD *)(v18 + 192) & 0xFFFBFFFF;
        *(_DWORD *)(v18 + 312) = 0;
        *(_QWORD *)(v18 + 208) = v9;
        *(_DWORD *)(v18 + 192) = v60 | 1;
        *(_DWORD *)(v18 + 184) = 0;
        *(_QWORD *)(v18 + 168) = v3;
        *(_QWORD *)(v18 + 232) = v5;
        *(_QWORD *)(v18 + 160) = 0LL;
        *(_QWORD *)(v18 + 256) = 0LL;
        *(_DWORD *)(v18 + 80) = 0;
        goto LABEL_42;
      }
      MiReturnFaultCharges(v22, 1LL, 1LL);
    }
    if ( v16 == 1 )
    {
      v59 = v86;
      goto LABEL_137;
    }
LABEL_37:
    v27 = v86;
    v28 = a2;
    v29 = v75[0];
LABEL_38:
    v30 = v76;
    v31 = (int)v70;
    *(_DWORD *)(v18 + 184) = v65;
    *(_QWORD *)(v18 + 168) = v3;
    v32 = (__int64)v68;
    *(_QWORD *)(v18 + 208) = v9;
    v33 = v67;
    BugCheckParameter3a = v67;
    *(_QWORD *)(v18 + 160) = v27;
    *(_QWORD *)(v18 + 232) = v28;
    v34 = MiPickClusterForMappedFileFault(v31, v18, v32, v30, BugCheckParameter3a, v21, (__int64)&v82, (__int64)&v81);
    v63 = v21;
    v35 = v70;
    v36 = MiBuildMdlForMappedFileFault(v18, v82, v81, v70, v34, v63, v69, v32, a1, (volatile signed __int32 **)v83);
    v37 = v36;
    if ( v36 != v34 )
      MiReturnFaultCharges(v35, v34 - v36, 1LL);
    if ( v37 )
    {
      MiFinishMdlForMappedFileFault(v18, v29, v37, v74, v33);
      goto LABEL_42;
    }
    v59 = v27;
LABEL_137:
    MiUnlockProtoPoolPage(v59, 0x11u);
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v18);
    return 3221225495LL;
  }
  v45 = -1073741670;
LABEL_77:
  if ( v68 )
    v68[1] = (v45 == -1073741670) + 1;
  return v45;
}
