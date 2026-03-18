/*
 * XREFs of ObCreateObjectEx @ 0x1407308B0
 * Callers:
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     NtCreateIoCompletion @ 0x1406B26D0 (NtCreateIoCompletion.c)
 *     ObCreateObject @ 0x1406B6350 (ObCreateObject.c)
 *     EtwpAddUmRegEntry @ 0x1406BFA44 (EtwpAddUmRegEntry.c)
 *     WmipCreateGuidObject @ 0x1406C5030 (WmipCreateGuidObject.c)
 *     AlpcpCreatePort @ 0x140717BF4 (AlpcpCreatePort.c)
 *     MiFinishCreateSection @ 0x140722D30 (MiFinishCreateSection.c)
 *     NtCreateSemaphore @ 0x1407331E0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     NtCreateEvent @ 0x14075CD80 (NtCreateEvent.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140767CE0 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14076AFD0 (IoCreateDevice.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A068 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PsCreateSiloContext @ 0x14077CCE0 (PsCreateSiloContext.c)
 *     EtwpCreateUmReplyObject @ 0x14077EACC (EtwpCreateUmReplyObject.c)
 *     NtCreateWorkerFactory @ 0x140785B90 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140786180 (NtCreateTimer2.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     MiSessionObjectCreate @ 0x1407A9CEC (MiSessionObjectCreate.c)
 *     NtCreateMutant @ 0x1407B3810 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x1407BA760 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x1407C6590 (NtCreateTimer.c)
 *     NtCreatePrivateNamespace @ 0x1407C88A0 (NtCreatePrivateNamespace.c)
 *     NtCreateRegistryTransaction @ 0x1407D1D40 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x1407D78C0 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x1407DC330 (ExCreateCallback.c)
 *     ObpCreateDirectoryObject @ 0x1407F1610 (ObpCreateDirectoryObject.c)
 *     SepFilterToken @ 0x1407F1C00 (SepFilterToken.c)
 *     ObCreateSymbolicLink @ 0x1407F3368 (ObCreateSymbolicLink.c)
 *     EtwpRealtimeConnect @ 0x1407F54F4 (EtwpRealtimeConnect.c)
 *     PspCreateActivityReference @ 0x140800D04 (PspCreateActivityReference.c)
 *     IoCreateDriver @ 0x140810200 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140827D60 (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140828A90 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x14084DBD0 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x14085187C (PopEtEnergyTrackerCreate.c)
 *     PsCreateCpuPartition @ 0x140857304 (PsCreateCpuPartition.c)
 *     NtCreateDebugObject @ 0x1409384B0 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140947190 (IoCreateController.c)
 *     NtCreateIoRing @ 0x14094A0B0 (NtCreateIoRing.c)
 *     TtmiCreateTerminal @ 0x1409AADA8 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1409ABFEC (TtmiCreateEventQueue.c)
 *     NtCreateProcessStateChange @ 0x1409B0100 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409B0310 (NtCreateThreadStateChange.c)
 *     EtwpRegisterPrivateSession @ 0x1409EC85C (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3BDC (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140A03C78 (ExpProfileCreate.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A18F2C (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140428EB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1406C2F00 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406EEF10 (ObpCaptureObjectCreateInformation.c)
 *     ObpAllocateObject @ 0x14072FBF0 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x1407373D0 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 *     ObpRegisterObject @ 0x14097D3B4 (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        char a1,
        _DWORD *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _BYTE *a10)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v16; // rbx
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  __int64 v23; // rbx
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  struct _KPRCB *v33; // rax
  _GENERAL_LOOKASIDE *v34; // r8
  _BYTE *v35; // [rsp+30h] [rbp-48h]
  __int128 v36; // [rsp+40h] [rbp-38h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  a5 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v36 = 0LL;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v16 )
    goto LABEL_2;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[4].L;
  ++L->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v16
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_2:
    LODWORD(v16->Next) = CurrentPrcb->Number;
  }
  if ( !v16 )
    return 3221225626LL;
  v17 = ObpCaptureObjectCreateInformation(a1, a4, a3, &v36, (__int64)v16, 0);
  if ( v17 >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      v22 = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v20 = a7;
      if ( !a7 )
        v20 = a2[26];
      v21 = a8;
      if ( !a8 )
        v21 = a2[27];
      HIDWORD(v16[1].Next) = v20;
      v35 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v21;
      v22 = ObpAllocateObject(v16, a4, (__int64)a2, &v36, a6, &a5, v35);
      if ( v22 >= 0 )
      {
        v23 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v23, 1, 1u, 0x746C6644u);
        }
        *a9 = v23 + 48;
        return (unsigned int)v22;
      }
    }
    else
    {
      v22 = -1073741727;
    }
    if ( *((_QWORD *)&v36 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v36);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v18) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v18, v19);
      v16[2].Next = 0LL;
    }
    v31 = KeGetCurrentPrcb();
    v32 = v31->PPLookasideList[4].P;
    ++v32->TotalFrees;
    if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
      || (++v32->FreeMisses,
          v32 = v31->PPLookasideList[4].L,
          ++v32->TotalFrees,
          LOWORD(v32->ListHead.Alignment) < v32->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v32->ListHead, v16);
    }
    else
    {
      ++v32->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v32->FreeEx)(v16);
    }
    return (unsigned int)v22;
  }
  v33 = KeGetCurrentPrcb();
  v34 = v33->PPLookasideList[4].P;
  ++v34->TotalFrees;
  if ( LOWORD(v34->ListHead.Alignment) < v34->Depth
    || (++v34->FreeMisses,
        v34 = v33->PPLookasideList[4].L,
        ++v34->TotalFrees,
        LOWORD(v34->ListHead.Alignment) < v34->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v34->ListHead, v16);
  }
  else
  {
    ++v34->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v34->FreeEx)(v16);
  }
  return (unsigned int)v17;
}
