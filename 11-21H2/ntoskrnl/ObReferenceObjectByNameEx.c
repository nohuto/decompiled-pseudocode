/*
 * XREFs of ObReferenceObjectByNameEx @ 0x1406686C8
 * Callers:
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 *     ObInitServerSilo @ 0x140859318 (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x14090E9C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14090EC00 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 *     CmObReferenceObjectByName @ 0x140AB4008 (CmObReferenceObjectByName.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140251C40 (HalPutDmaAdapter.c)
 *     SeClearLearningModeObjectInformation @ 0x140347840 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     SeSetLearningModeObjectInformation @ 0x1405F43E0 (SeSetLearningModeObjectInformation.c)
 *     ObpAdjustAccessMask @ 0x1406689A4 (ObpAdjustAccessMask.c)
 *     ObpUnlockDirectory @ 0x14066960C (ObpUnlockDirectory.c)
 *     ObpFreeObjectNameBuffer @ 0x14071F0D0 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x14072266C (ObpCheckObjectReference.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1407CCD80 (ObpCaptureObjectCreateInformation.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  int v9; // r12d
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  int v12; // edx
  int v13; // ecx
  PSLIST_ENTRY v14; // rbx
  unsigned int Number; // eax
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v21; // ecx
  __int64 v22; // rdx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v24; // rdx
  _GENERAL_LOOKASIDE *v25; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-41h] BYREF
  __int128 v33; // [rsp+78h] [rbp-39h] BYREF
  __int128 v34; // [rsp+88h] [rbp-29h] BYREF
  __int128 v35; // [rsp+98h] [rbp-19h]
  __int128 v36; // [rsp+A8h] [rbp-9h]
  __int64 v37; // [rsp+B8h] [rbp+7h]
  NTSTATUS Information; // [rsp+100h] [rbp+4Fh] BYREF
  unsigned int v39; // [rsp+110h] [rbp+5Fh]

  v39 = a3;
  DmaAdapter = 0LL;
  v37 = 0LL;
  v9 = a1;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v14 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v14 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v14 )
        return 3221225626LL;
    }
  }
  Number = CurrentPrcb->Number;
  v16 = a5;
  LOBYTE(v12) = a5;
  LOBYTE(v13) = a5;
  LODWORD(v14->Next) = Number;
  Information = ObpCaptureObjectCreateInformation(v13, v12, v9, (unsigned int)&v33, (__int64)&v14[10], 1);
  if ( Information >= 0 )
  {
    if ( !a2 )
    {
      Information = SeCreateAccessState(v14, &v14[14], v39, a4 + 76);
      if ( Information < 0 )
      {
LABEL_18:
        if ( a2 == (struct _SECURITY_SUBJECT_CONTEXT *)v14 )
        {
          SepDeleteAccessState((__int64)a2);
          SeReleaseSubjectContext(a2 + 1);
        }
        Next = v14[12].Next;
        if ( Next )
        {
          LOBYTE(v17) = v14[11].Next;
          LOBYTE(v18) = 1;
          SeReleaseSecurityDescriptor(Next, v17, v18, v19);
          v14[12].Next = 0LL;
        }
        if ( *((_QWORD *)&v33 + 1) )
          ObpFreeObjectNameBuffer(&v33);
        goto LABEL_24;
      }
      a2 = (struct _SECURITY_SUBJECT_CONTEXT *)v14;
    }
    Information = ObpAdjustAccessMask(a2);
    if ( Information >= 0 )
    {
      CurrentSilo = PsGetCurrentSilo();
      Information = ObpLookupObjectName(
                      *((_QWORD *)&v14[10].Next + 1),
                      v16,
                      a6,
                      0LL,
                      0LL,
                      (__int64)CurrentSilo,
                      (__int64)a2,
                      (__int64)&v14[28],
                      0LL,
                      (__int64)&DmaAdapter);
      if ( Information >= 0 )
      {
        if ( v14[28].Next )
          ObpUnlockDirectory(&v14[28]);
        v21 = (int)DmaAdapter;
        v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)];
        if ( (*(_DWORD *)(v22 + 72) & (__int64)v14[10].Next) != 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          Information = -1073741811;
        }
        else
        {
          if ( SepLearningModeTokenCount )
          {
            *(_QWORD *)&v35 = v22 + 16;
            *((_QWORD *)&v35 + 1) = &v33;
            *(_QWORD *)&v36 = *((_QWORD *)&v14[10].Next + 1);
            SeSetLearningModeObjectInformation((__int64)&v34);
            v21 = (int)DmaAdapter;
          }
          if ( (unsigned __int8)ObpCheckObjectReference(v21, &Information) )
            *a7 = DmaAdapter;
          else
            HalPutDmaAdapter(DmaAdapter);
          SeClearLearningModeObjectInformation();
        }
      }
    }
    goto LABEL_18;
  }
LABEL_24:
  v24 = KeGetCurrentPrcb();
  v25 = v24->PPLookasideList[8].P;
  ++v25->TotalFrees;
  if ( LOWORD(v25->ListHead.Alignment) < v25->Depth
    || (++v25->FreeMisses,
        v25 = v24->PPLookasideList[8].L,
        ++v25->TotalFrees,
        LOWORD(v25->ListHead.Alignment) < v25->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v25->ListHead, v14);
  }
  else
  {
    ++v25->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v25->FreeEx)(v14);
  }
  return (unsigned int)Information;
}
