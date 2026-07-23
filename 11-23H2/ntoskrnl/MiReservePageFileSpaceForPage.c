/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x140285100
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140215660 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x140284C30 (MiReservePageFileSpace.c)
 * Callees:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_RESET_PTE @ 0x1402855C0 (MI_IS_RESET_PTE.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiInvalidPteConforms @ 0x1402DC6D0 (MiInvalidPteConforms.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402F1B64 (MiIncreaseUsedPtesCount.c)
 *     MiPageStandbyLookasideStatus @ 0x1403316E0 (MiPageStandbyLookasideStatus.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiCapturePageFileInfoInline @ 0x140348F44 (MiCapturePageFileInfoInline.c)
 *     MiDiscardTransitionPteEx @ 0x140650B74 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(__int64 a1, unsigned __int64 *a2, char a3, unsigned __int64 *a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // rbx
  int v7; // r12d
  __int64 v8; // rsi
  BOOL v9; // r13d
  ULONG_PTR v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  char v17; // dl
  unsigned __int64 v18; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int16 v26; // r9
  unsigned __int64 v27; // rcx
  __int64 UsedPtesHandle; // rax
  __int64 v29; // rdx
  bool v30; // zf
  struct _LIST_ENTRY *Flink; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // rdi
  int v35; // r13d
  int v36; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+24h] [rbp-44h] BYREF
  __int64 v38; // [rsp+28h] [rbp-40h] BYREF
  int v41; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v5 = (unsigned __int64)a2;
  v7 = a3 & 0x80;
  v8 = 0LL;
  v36 = 0;
  v9 = 0;
  v41 = 0;
  if ( (a3 & 0x80) == 0 )
  {
    v10 = MiLockLeafPage(a2, 0LL);
    v9 = v10 != 0;
    v41 = v9;
    goto LABEL_3;
  }
  while ( 1 )
  {
    v10 = 0LL;
LABEL_3:
    v11 = MI_READ_PTE_LOCK_FREE(v5);
    v38 = v11;
    v14 = v11;
    if ( (v11 & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_16;
      v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      if ( (a3 & 1) == 0 )
      {
        v37 = 0;
        v9 = 1;
        v41 = 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v37);
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
        v14 = v38;
      }
      if ( *(__int64 *)(v10 + 40) >= 0 )
      {
LABEL_16:
        if ( (*(_BYTE *)v10 & 1) != 0
          && *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) == a1
          && (*(_BYTE *)(v10 + 35) & 8) == 0 )
        {
          v15 = v10 + 16;
          v16 = v14;
          v14 = *(_QWORD *)(v10 + 16);
          if ( v10 + 16 >= 0xFFFFF6FB7DBED000uLL
            && v15 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v14 & 1) != 0
            && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v32 = *((_QWORD *)&Flink->Flink + ((v15 >> 3) & 0x1FF));
              v33 = v14 | 0x20;
              if ( (v32 & 0x20) == 0 )
                v33 = *(_QWORD *)(v10 + 16);
              v14 = v33;
              if ( (v32 & 0x42) != 0 )
                v14 = v33 | 0x42;
            }
          }
          v38 = v14;
          if ( (v14 & 1) == 0 && (!v14 || !qword_140C65B40 || (qword_140C65B40 & v14) != 0) )
          {
            if ( !(unsigned int)MI_IS_RESET_PTE(v14, v16) || (*(_BYTE *)(v10 + 34) & 0x10) != 0 )
              goto LABEL_18;
            if ( v7 )
            {
              v30 = (v17 & 0x42) == 0;
LABEL_71:
              if ( !v30 )
                goto LABEL_18;
            }
          }
        }
      }
      goto LABEL_22;
    }
    if ( (v11 & 0x400) != 0 )
      goto LABEL_22;
    if ( (v11 & 0x800) == 0 )
    {
      if ( v11 )
      {
        if ( (unsigned int)MiInvalidPteConforms(v11, 0xFFFFDE0000000000uLL, v12, v13) && ((v14 >> 5) & 0xF) != 0 )
          goto LABEL_19;
      }
      else if ( (a3 & 2) != 0 )
      {
        v14 = MiSwizzleInvalidPte(8LL * (a3 & 0x7C));
        v38 = v14;
        v36 = 1;
        goto LABEL_19;
      }
      goto LABEL_22;
    }
    if ( !v7 )
      goto LABEL_65;
    v5 = (unsigned __int64)a2;
    v20 = MiLockTransitionLeafPageEx((ULONG_PTR)a2);
    v10 = v20;
    if ( v20 )
      break;
    v9 = 0;
    v41 = 0;
  }
  v9 = 1;
  v41 = 1;
  if ( *(__int64 *)(v20 + 40) < 0 )
    goto LABEL_29;
LABEL_65:
  if ( *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) == a1 )
  {
    v38 = MI_READ_PTE_LOCK_FREE(v10 + 16);
    v14 = v38;
    if ( (unsigned int)MI_IS_RESET_PTE(v38, v29) )
    {
      v30 = (*(_BYTE *)(v10 + 34) & 0x10) == 0;
      goto LABEL_71;
    }
LABEL_18:
    v18 = 0xFFFFDE0000000000uLL;
LABEL_19:
    if ( (v14 & 2) == 0 )
    {
      if ( v10 && (*(_BYTE *)(v10 + 34) & 0x28) != 0 )
        goto LABEL_22;
      if ( (v14 & 4) != 0 )
      {
        if ( !v10 )
          goto LABEL_22;
        if ( (a3 & 1) == 0 )
        {
          if ( !*(_WORD *)(v10 + 32) )
          {
            v34 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 - v18) >> 4);
            v35 = MiPageStandbyLookasideStatus(v34);
            if ( (MiUnlinkPageFromListEx(v10, 0LL) & 3) != 0 )
            {
              MiDiscardTransitionPteEx(v10, 0LL);
              v9 = v41;
              goto LABEL_22;
            }
            if ( !v35 && (unsigned int)MiPageStandbyLookasideStatus(v34) )
            {
              if ( (v14 & 0x400) != 0 )
                v14 &= ~8uLL;
              else
                v14 &= ~0x8000000uLL;
              v38 = v14;
            }
            v9 = v41;
            v4 = 1;
          }
          v8 = MiCapturePageFileInfoInline(v10 + 16, 1LL, 0LL);
          *(_BYTE *)(v10 + 34) |= 0x10u;
LABEL_40:
          v21 = *a4;
          if ( qword_140C65B40 && (v21 & 0x10) == 0 )
            v21 &= ~qword_140C65B40;
          v22 = HIDWORD(v21);
          if ( (v14 & 0x400) != 0 )
            v23 = v14 & 0xFFFFFFFFFFFFF7FFuLL;
          else
            v23 = v14 & 0xFFFFFFFFFFFFFFF1uLL;
          if ( *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a4) >> 4) + 17056) )
          {
            if ( v23 )
            {
              if ( qword_140C65B40 )
              {
                if ( (v23 & 0x10) != 0 )
                  LODWORD(v23) = v23 & 0xFFFFFFEF;
                else
                  LODWORD(v23) = ~(_DWORD)qword_140C65B40 & v23;
              }
              v24 = (unsigned int)v23 | (v22 << 32);
            }
            else
            {
              v24 = v22 << 32;
            }
            v25 = MiSwizzleInvalidPte(v24);
            v23 = (unsigned __int16)(v25 ^ (v26 << 12)) & 0xF000 ^ (unsigned __int64)v25 | 2;
          }
          if ( v10 )
          {
            if ( !*(_WORD *)(v10 + 32) && (*(_BYTE *)(v10 + 34) & 0x10) != 0 && !v4 )
            {
              MiUnlinkPageFromListEx(v10, 0LL);
              v4 = 1;
            }
            *(_QWORD *)(v10 + 16) = v23;
            if ( v4 )
              MiInsertPageInList(v10, 8u);
            v27 = (unsigned __int64)a2;
          }
          else
          {
            v27 = (unsigned __int64)a2;
            *a2 = v23;
          }
          if ( v36 && v27 <= 0xFFFFF6BFFFFFFF78uLL && v27 >= 0xFFFFF68000000000uLL )
          {
            UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v27 << 25) >> 16);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
          }
        }
      }
      else if ( (a3 & 1) == 0 )
      {
        goto LABEL_40;
      }
      v4 = 1;
      goto LABEL_22;
    }
    if ( (a3 & 1) != 0 )
      *a4 = v14;
  }
LABEL_22:
  if ( !v9 )
    goto LABEL_23;
LABEL_29:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_23:
  if ( v8 )
    MiReleasePageFileInfo(a1, v8, 1LL);
  return v4;
}
