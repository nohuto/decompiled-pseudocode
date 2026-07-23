/*
 * XREFs of IopAllocRealFileObject @ 0x14072F500
 * Callers:
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 * Callees:
 *     IopCheckInitiatorHint @ 0x1402118B0 (IopCheckInitiatorHint.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x1402AFB90 (PsIsHostSilo.c)
 *     IoGetSilo @ 0x140302DE0 (IoGetSilo.c)
 *     PsIsSystemThread @ 0x140353970 (PsIsSystemThread.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1406C2F30 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406EEF40 (ObpCaptureObjectCreateInformation.c)
 *     ObpAllocateObject @ 0x14072FDE0 (ObpAllocateObject.c)
 *     IopRetrieveTransactionParameters @ 0x1407308F0 (IopRetrieveTransactionParameters.c)
 *     SeReleaseSecurityDescriptor @ 0x1407375C0 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767B30 (IopAllocateFoExtensionsOnCreate.c)
 *     ObpRegisterObject @ 0x14097D5B4 (ObpRegisterObject.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        unsigned int a9)
{
  struct _KPRCB *CurrentPrcb; // rsi
  POBJECT_TYPE *v10; // rbp
  char v12; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v15; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int Object; // esi
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KPRCB *v24; // rdx
  _GENERAL_LOOKASIDE *v25; // rcx
  int v26; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v28; // rdx
  _GENERAL_LOOKASIDE *v29; // rcx
  __int64 v30; // rbx
  _DWORD *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 Silo; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // ecx
  __int16 v39; // [rsp+40h] [rbp-88h] BYREF
  __int64 v40; // [rsp+48h] [rbp-80h] BYREF
  __int128 v41; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v42[3]; // [rsp+60h] [rbp-68h] BYREF
  int v43; // [rsp+78h] [rbp-50h]
  int v44; // [rsp+7Ch] [rbp-4Ch]
  __int128 v45; // [rsp+80h] [rbp-48h]
  char v47; // [rsp+E8h] [rbp+20h]

  v47 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v39 = 0;
  v12 = a4;
  v42[0] = 48LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v44 = 0;
  v42[1] = 0LL;
  v43 = a4;
  ++P->TotalAllocates;
  v42[2] = 0LL;
  v45 = 0LL;
  LOBYTE(v39) = 1;
  v41 = 0LL;
  v40 = 0LL;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v15 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[4].L;
  ++L->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v15
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_4:
    LODWORD(v15->Next) = CurrentPrcb->Number;
  }
  if ( !v15 )
  {
    Object = -1073741670;
LABEL_26:
    if ( !a8 )
      *(_QWORD *)a1 = 0LL;
    return (unsigned int)Object;
  }
  Object = ObpCaptureObjectCreateInformation(0, a5, (__int64)v42, &v41, (__int64)v15, 0);
  if ( Object < 0 )
  {
    v24 = KeGetCurrentPrcb();
    v25 = v24->PPLookasideList[4].P;
    ++v25->TotalFrees;
    if ( LOWORD(v25->ListHead.Alignment) < v25->Depth
      || (++v25->FreeMisses,
          v25 = v24->PPLookasideList[4].L,
          ++v25->TotalFrees,
          LOWORD(v25->ListHead.Alignment) < v25->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v25->ListHead, v15);
    }
    else
    {
      ++v25->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v25->FreeEx)(v15);
    }
    goto LABEL_26;
  }
  if ( ((__int64)v15->Next & (_DWORD)v10[9]) != 0 )
  {
    Object = -1073741811;
LABEL_18:
    if ( *((_QWORD *)&v41 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v41);
    Next = v15[2].Next;
    if ( Next )
    {
      LOBYTE(v22) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v15[1].Next), v22, v23);
      v15[2].Next = 0LL;
    }
    v28 = KeGetCurrentPrcb();
    v29 = v28->PPLookasideList[4].P;
    ++v29->TotalFrees;
    if ( LOWORD(v29->ListHead.Alignment) < v29->Depth
      || (++v29->FreeMisses,
          v29 = v28->PPLookasideList[4].L,
          ++v29->TotalFrees,
          LOWORD(v29->ListHead.Alignment) < v29->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v29->ListHead, v15);
    }
    else
    {
      ++v29->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v29->FreeEx)(v15);
    }
    goto LABEL_26;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    Object = -1073741727;
    goto LABEL_18;
  }
  v26 = *((_DWORD *)v10 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v26;
  Object = ObpAllocateObject((_DWORD)v15, a5, (_DWORD)v10, (unsigned int)&v41, 216, (__int64)&v40, (__int64)&v39);
  if ( Object < 0 )
    goto LABEL_18;
  v30 = v40;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v40);
    ObpPushStackInfo(v30, 1, 1u, 0x746C6644u);
  }
  v31 = (_DWORD *)(v30 + 48);
  memset(v31, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v31 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v31 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v31 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v31 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v31 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v32 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v32 )
      *((_QWORD *)v31 + 26) = v32;
  }
  else
  {
    if ( (*(_DWORD *)(a6 + 152) & 0x47) != 0
      || !PsIsHostSilo(*(_QWORD *)(a7 + 8))
      || (v33 = *(_QWORD *)(a6 + 40)) != 0 && (Silo = IoGetSilo(v33), !PsIsHostSilo(Silo)) )
    {
      Object = IopAllocateFoExtensionsOnCreate((_DWORD)v31, a2, a6, a7, a9);
    }
    if ( Object >= 0 && a5 )
    {
      if ( (*(_DWORD *)(a6 + 152) & 0x20) == 0
        || (*(_DWORD *)(a2 + 48) & 0x40000) == 0
        && (v35 = *(unsigned int *)(a2 + 72), (_DWORD)v35 != 8)
        && ((unsigned int)v35 > 0x35 || (v36 = 0x20000100100008LL, !_bittest64(&v36, v35)))
        || (Object = IopRetrieveTransactionParameters(a2, a6, a9, v31), Object >= 0) )
      {
        if ( !PsIsSystemThread(KeGetCurrentThread()) && (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
          Object = IopCheckInitiatorHint((__int64)v31, *(_QWORD *)(a6 + 40));
      }
    }
    v12 = v47;
  }
  *(_QWORD *)a1 = v31;
  if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v37 = v31[20] | 2;
      v31[20] = v37;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v31[20] = v37 | 4;
    }
    if ( (v31[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v31 + 32), SynchronizationEvent, 0);
      v31[28] = 0;
      *((_QWORD *)v31 + 13) = 0LL;
    }
    if ( (*(_DWORD *)(a6 + 64) & 8) != 0 )
      v31[20] |= 8u;
    if ( (*(_DWORD *)(a6 + 64) & 2) != 0 )
      v31[20] |= 0x10u;
    if ( (*(_DWORD *)(a6 + 64) & 4) != 0 )
      v31[20] |= 0x20u;
    if ( (*(_DWORD *)(a6 + 64) & 0x800) != 0 )
      v31[20] |= 0x100000u;
    if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
      v31[20] |= 0x2000000u;
  }
  if ( (v12 & 0x40) == 0 )
    v31[20] |= 0x20000u;
  *v31 = 14155781;
  *((_QWORD *)v31 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v31 + 1) = a3;
  *((_QWORD *)v31 + 25) = v31 + 48;
  *((_QWORD *)v31 + 24) = v31 + 48;
  *((_QWORD *)v31 + 23) = 0LL;
  return (unsigned int)Object;
}
