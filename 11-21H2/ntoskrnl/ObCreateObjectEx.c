/*
 * XREFs of ObCreateObjectEx @ 0x14072B3B0
 * Callers:
 *     AlpcpCreatePort @ 0x1406679E8 (AlpcpCreatePort.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     NtCreateJobObject @ 0x140681CB0 (NtCreateJobObject.c)
 *     PsCreateSiloContext @ 0x140692CD0 (PsCreateSiloContext.c)
 *     NtCreateWaitCompletionPacket @ 0x1406AFD10 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x1406B4B90 (NtCreateTimer.c)
 *     EtwpCreateUmReplyObject @ 0x1406B8E18 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406B8FE0 (NtCreateIoCompletion.c)
 *     NtCreatePrivateNamespace @ 0x1406C08F0 (NtCreatePrivateNamespace.c)
 *     ObpCreateDirectoryObject @ 0x1406C2A70 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1406C505C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406D9390 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     PspCreateActivityReference @ 0x1406E1214 (PspCreateActivityReference.c)
 *     NtCreateRegistryTransaction @ 0x1406E2A70 (NtCreateRegistryTransaction.c)
 *     EtwpRealtimeConnect @ 0x1406EC524 (EtwpRealtimeConnect.c)
 *     NtCreateMutant @ 0x1406F0080 (NtCreateMutant.c)
 *     MiFinishCreateSection @ 0x1406FD9F0 (MiFinishCreateSection.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     NtCreateSemaphore @ 0x14072A4C0 (NtCreateSemaphore.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     WmipCreateGuidObject @ 0x140782F2C (WmipCreateGuidObject.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     EtwpAddUmRegEntry @ 0x140796F10 (EtwpAddUmRegEntry.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1407D53D0 (NtCreateTimer2.c)
 *     MiSessionObjectCreate @ 0x1407F385C (MiSessionObjectCreate.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x14084685C (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140846BEC (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     NtCreateKeyedEvent @ 0x140854BB0 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x140857300 (PopEtEnergyTrackerCreate.c)
 *     IoCreateController @ 0x140861240 (IoCreateController.c)
 *     CmpDoAccessCheckOnKCB @ 0x140916788 (CmpDoAccessCheckOnKCB.c)
 *     NtCreateDebugObject @ 0x140928A50 (NtCreateDebugObject.c)
 *     NtCreateIoRing @ 0x140938B40 (NtCreateIoRing.c)
 *     TtmiCreateTerminal @ 0x1409A2F78 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1409AB130 (TtmiCreateEventQueue.c)
 *     NtCreateProcessStateChange @ 0x1409AEFF0 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409AF200 (NtCreateThreadStateChange.c)
 *     EtwpRegisterPrivateSession @ 0x1409EBDD0 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3EC0 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140A062C8 (ExpProfileCreate.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x14071F0D0 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x14072E5D0 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectCreateInformation @ 0x1407CCD80 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140986424 (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        __int64 a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v16; // rbx
  int Information; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // ecx
  int Object; // edi
  __int64 v23; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  struct _KPRCB *v33; // rax
  _GENERAL_LOOKASIDE *v34; // r8
  __int64 v35; // [rsp+30h] [rbp-48h]
  __int128 v36; // [rsp+40h] [rbp-38h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  a5 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v36 = 0LL;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v16 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v16 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v16 )
        return 3221225626LL;
    }
  }
  LODWORD(v16->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)&v36, (__int64)v16, 0);
  if ( Information >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      Object = -1073741811;
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
      Object = ObpAllocateObject((_DWORD)v16, a4, (_DWORD)a2, (unsigned int)&v36, a6, (__int64)&a5, v35);
      if ( Object >= 0 )
      {
        v23 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v23, 1, 1u, 0x746C6644u);
        }
        *a9 = v23 + 48;
        return (unsigned int)Object;
      }
    }
    else
    {
      Object = -1073741727;
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
    return (unsigned int)Object;
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
  return (unsigned int)Information;
}
