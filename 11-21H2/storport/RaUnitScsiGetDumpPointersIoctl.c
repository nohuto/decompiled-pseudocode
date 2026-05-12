/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004004 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidXrbDeallocateResources @ 0x1C000BDD4 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F9B4 (StorAllocateContiguousIoResources.c)
 *     RaSrbSetMiniportContext @ 0x1C000FFCC (RaSrbSetMiniportContext.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0015E80 (RaidGetTelemetryLogPageIds.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C001662C (RaidQueryCrashdumpFunctions.c)
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     RtlStringCbPrintfW @ 0x1C001E1EC (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     WPP_SF_d @ 0x1C003C4B8 (WPP_SF_d.c)
 *     WPP_SF_DD @ 0x1C003C4FC (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x1C003C5EC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C00567B0 (StorPortGetAdditionalCrashDumpArea.c)
 *     WPP_SF_S @ 0x1C0056C78 (WPP_SF_S.c)
 */

__int64 __fastcall RaUnitScsiGetDumpPointersIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // r15
  unsigned int *Srb; // r14
  __int64 v5; // r12
  char v6; // r13
  _IRP *MasterIrp; // rsi
  __int64 Pool; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  PVOID v16; // r13
  __int64 v17; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rcx
  void *v24; // r13
  int v25; // eax
  signed int AdditionalCrashDumpArea; // ebx
  __int64 v27; // rdi
  __int64 v28; // r8
  void *v29; // rcx
  IRP *v30; // rsi
  __int64 v31; // r13
  unsigned int *v32; // rax
  int v34; // eax
  PVOID v35; // r13
  unsigned int v36; // eax
  unsigned int ByteCount; // eax
  char v38; // r11
  unsigned int v39; // ecx
  int v40; // eax
  unsigned __int16 *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r8
  NTSTATUS FullDriverPath; // r13d
  size_t v45; // rbx
  WCHAR *v46; // rax
  const WCHAR *v47; // rdi
  void *v48; // rcx
  void *v49; // rcx
  __int64 v50; // [rsp+30h] [rbp-59h]
  _MDL *P; // [rsp+38h] [rbp-51h]
  UNICODE_STRING String2; // [rsp+48h] [rbp-41h] BYREF
  PVOID v54; // [rsp+58h] [rbp-31h]
  __int64 v55; // [rsp+60h] [rbp-29h]
  PVOID v56; // [rsp+68h] [rbp-21h]
  unsigned int *v57; // [rsp+70h] [rbp-19h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-11h] BYREF
  wchar_t pszDest[8]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v60; // [rsp+98h] [rbp+Fh]
  int v61; // [rsp+A0h] [rbp+17h]
  __int16 v62; // [rsp+A4h] [rbp+1Bh]

  v2 = *(_QWORD *)(a1 + 24);
  v56 = 0LL;
  Srb = 0LL;
  v55 = 0LL;
  v5 = 0LL;
  v50 = 0LL;
  v6 = 0;
  v57 = 0LL;
  String2 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( a2->RequestorMode )
  {
    AdditionalCrashDumpArea = -1073741790;
LABEL_65:
    v30 = a2;
    return RaidCompleteRequestEx(v30, 0, AdditionalCrashDumpArea);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    AdditionalCrashDumpArea = -1073741789;
    goto LABEL_65;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(MasterIrp, 0, 0x68uLL);
  Pool = RaidAllocatePool(64LL, 352LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  P = (_MDL *)Pool;
  if ( !Pool )
  {
    v30 = a2;
    AdditionalCrashDumpArea = -1073741670;
    return RaidCompleteRequestEx(v30, 0, AdditionalCrashDumpArea);
  }
  *(_DWORD *)(Pool + 4) = 280;
  *(_DWORD *)(Pool + 8) = 1145917508;
  *(_DWORD *)Pool = 1;
  v9 = Pool + 280;
  *(_OWORD *)(Pool + 16) = *(_OWORD *)(v2 + 344);
  *(_OWORD *)(Pool + 32) = *(_OWORD *)(v2 + 360);
  *(_OWORD *)(Pool + 48) = *(_OWORD *)(v2 + 376);
  *(_OWORD *)(Pool + 64) = *(_OWORD *)(v2 + 392);
  *(_OWORD *)(Pool + 80) = *(_OWORD *)(v2 + 408);
  *(_OWORD *)(Pool + 96) = *(_OWORD *)(v2 + 424);
  *(_OWORD *)(Pool + 112) = *(_OWORD *)(v2 + 440);
  *(_OWORD *)(Pool + 128) = *(_OWORD *)(v2 + 456);
  *(_OWORD *)(Pool + 144) = *(_OWORD *)(v2 + 472);
  *(_OWORD *)(Pool + 160) = *(_OWORD *)(v2 + 488);
  *(_OWORD *)(Pool + 176) = *(_OWORD *)(v2 + 504);
  *(_OWORD *)(Pool + 192) = *(_OWORD *)(v2 + 520);
  *(_OWORD *)(Pool + 208) = *(_OWORD *)(v2 + 536);
  *(_OWORD *)(Pool + 224) = *(_OWORD *)(v2 + 552);
  RaidGetTelemetryLogPageIds(*(_DWORD *)(a1 + 3296), Pool + 240, (_WORD *)(Pool + 272));
  v10 = *(_QWORD *)(v2 + 568);
  if ( (*(_DWORD *)(v10 + 184) & 0x80u) != 0 && (*(_DWORD *)(v10 + 188) & 2) != 0 )
    WORD1(P[5].StartVa) = HiberFileHybridPriority;
  else
    WORD1(P[5].StartVa) = -1;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1744)) >= 0 )
    {
      *(_BYTE *)v9 = 1;
      v6 = 1;
      *(_QWORD *)(v9 + 8) = **(_QWORD **)(a1 + 1744);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  v11 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 4832LL);
  if ( v11 && (int)PoFxRegisterCrashdumpDevice(*v11) >= 0 )
  {
    v6 = 1;
    *(_BYTE *)(v9 + 32) = 1;
    *(_QWORD *)(v9 + 40) = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 4832LL);
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 4898LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 4896LL) = 40;
  if ( (int)RaidQueryCrashdumpFunctions(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL)) >= 0
    && (v12 = *(_QWORD *)(a1 + 24), (v13 = *(_QWORD *)(v12 + 4928)) != 0)
    && *(_QWORD *)(v12 + 4920) )
  {
    *(_QWORD *)(v9 + 56) = v13;
    *(_QWORD *)(v9 + 64) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4904LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 4898LL) = 0;
    if ( !v6 )
      goto LABEL_16;
  }
  MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (void *)v9;
  MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
LABEL_16:
  *(_QWORD *)(v9 + 16) = a1 + 1734;
  v14 = *(_QWORD *)(a1 + 24) + 4765LL;
  *(_QWORD *)(v9 + 24) = a1 + 1735;
  *(_QWORD *)(v9 + 48) = v14;
  v15 = (_QWORD *)RaidAllocatePool(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v54 = v15;
  if ( !v15 || (v5 = RaidAllocatePool(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8))) == 0 )
  {
    AdditionalCrashDumpArea = -1073741670;
    v27 = 0LL;
    goto LABEL_45;
  }
  RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v15 + 4, 0x1EuLL, L"diskdump.sys");
  RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v15 + 19, 0x1EuLL, L"storport.sys");
  *v15 = v5;
  *(_QWORD *)v5 = 0LL;
  MasterIrp->MdlAddress = P;
  MasterIrp->UserEvent = (_KEVENT *)(a1 + 1735);
  BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 1;
  *(_DWORD *)&MasterIrp->Type = 4;
  *(_DWORD *)(&MasterIrp->Size + 1) = 104;
  *(_QWORD *)&MasterIrp->Flags = 0LL;
  MasterIrp->ThreadListEntry.Flink = 0LL;
  MasterIrp->ThreadListEntry.Blink = (_LIST_ENTRY *)v15;
  if ( (unsigned __int8)(*(_BYTE *)(v2 + 488) - 2) <= 2u )
    MasterIrp->IoStatus.Status |= 1u;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 568) + 184LL) & 0x20) != 0 )
    MasterIrp->IoStatus.Status |= 4u;
  if ( !*(_BYTE *)(v2 + 4242) || (*(_DWORD *)(*(_QWORD *)(v2 + 568) + 184LL) & 8) != 0 )
  {
    v56 = (PVOID)RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v16 = v56;
    if ( !v56 )
    {
      AdditionalCrashDumpArea = -1073741670;
      v27 = 0LL;
      goto LABEL_45;
    }
    Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v2 + 442), 0);
    if ( Srb )
    {
      ContiguousIoResources = StorAllocateContiguousIoResources(
                                ((*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                v17,
                                v2);
      v55 = ContiguousIoResources;
      if ( ContiguousIoResources )
      {
        v20 = ContiguousIoResources + 48;
        v50 = ContiguousIoResources + 48;
        RaidZeroXrb(ContiguousIoResources + 48, v19, 0, 0LL);
        *(_BYTE *)(v20 + 17) |= 8u;
        *(_QWORD *)(v20 + 176) = a2;
        *(_QWORD *)(v20 + 184) = v16;
        *(_QWORD *)(v20 + 168) = Srb;
        if ( *(_BYTE *)(v2 + 442) == 1 )
        {
          *((_QWORD *)Srb + 10) = a2;
          Srb[6] = 256;
          v21 = Srb[6];
          *((_QWORD *)Srb + 12) = v20;
          Srb[5] = 38;
          *((_QWORD *)Srb + 8) = v16;
          Srb[15] = 112;
          v22 = *(_BYTE *)(v2 + 4242) == 0;
          Srb[10] = 10;
          if ( v22 )
            v21 = 64;
          v57 = Srb;
          v23 = Srb[13];
          Srb[6] = v21;
          *((_BYTE *)Srb + v23 + 8) = *(_BYTE *)(a1 + 96);
          *((_BYTE *)Srb + v23 + 9) = *(_BYTE *)(a1 + 97);
          *((_BYTE *)Srb + v23 + 10) = *(_BYTE *)(a1 + 98);
        }
        else
        {
          Srb[3] = 256;
          *(_WORD *)Srb = 88;
          v34 = Srb[3];
          *((_QWORD *)Srb + 6) = v20;
          *((_BYTE *)Srb + 2) = 38;
          *((_QWORD *)Srb + 3) = v16;
          Srb[4] = 112;
          v22 = *(_BYTE *)(v2 + 4242) == 0;
          Srb[5] = 10;
          if ( v22 )
            v34 = 64;
          Srb[3] = v34;
          *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 96);
          *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 97);
          *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 98);
        }
        RaSrbSetMiniportContext(v2, (__int64)Srb, v55 + 1104);
        v24 = (void *)(v20 + 664);
        KeInitializeEvent((PRKEVENT)(v20 + 664), NotificationEvent, 0);
        *(_QWORD *)(v20 + 656) = RaidXrbSignalCompletion;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            29LL,
            &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
            v20,
            Srb);
        }
        if ( *(_BYTE *)(v2 + 4242) )
          v25 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v20);
        else
          v25 = RaidAdapterExecuteXrb(v2, (_QWORD *)v20);
        AdditionalCrashDumpArea = v25;
        if ( v25 >= 0 )
        {
          KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
          AdditionalCrashDumpArea = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_DD(
            WPP_GLOBAL_Control->AttachedDevice,
            30LL,
            &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
            (unsigned int)AdditionalCrashDumpArea,
            *((unsigned __int8 *)Srb + 3));
        }
        if ( AdditionalCrashDumpArea < 0 )
        {
          if ( !*(_BYTE *)(v2 + 4242) || (*(_DWORD *)(*(_QWORD *)(v2 + 568) + 184LL) & 0x1000) != 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 )
            {
              v27 = v50;
              if ( BYTE1(WPP_GLOBAL_Control->Timer) )
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  31LL,
                  &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
                  v50,
                  AdditionalCrashDumpArea);
              goto LABEL_45;
            }
            goto LABEL_44;
          }
          goto LABEL_93;
        }
        v35 = v56;
        v36 = *((_DWORD *)v56 + 20);
        if ( v36 )
        {
          P->ByteCount = v36;
          ByteCount = *((_DWORD *)v35 + 20);
        }
        else
        {
          ByteCount = P->ByteCount;
        }
        HIDWORD(MasterIrp->IoStatus.Information) = ByteCount;
        P[1].StartVa = (void *)*((_QWORD *)v35 + 8);
        if ( !*(_BYTE *)(v2 + 4242) )
        {
          HIDWORD(P->Process) = *((_DWORD *)v35 + 18);
          LODWORD(P->MappedSystemVa) = *((_DWORD *)v35 + 19);
          P->ByteOffset = *((_DWORD *)v35 + 21);
          LODWORD(P[1].Process) = *((_DWORD *)v35 + 22);
          HIDWORD(P[1].Process) = *((_DWORD *)v35 + 23);
          P[1].MappedSystemVa = (void *)*((_QWORD *)v35 + 12);
          LOBYTE(P[1].ByteCount) = *((_BYTE *)v35 + 104);
          BYTE2(P[2].Next) = *((_BYTE *)v35 + 105);
          HIBYTE(P[2].Size) = *((_BYTE *)v35 + 106);
          BYTE1(P[2].Process) = *((_BYTE *)v35 + 107);
          if ( !*((_WORD *)v35 + 2) )
          {
            AdditionalCrashDumpArea = -1073741637;
            goto LABEL_44;
          }
          AdditionalCrashDumpArea = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(v5 + 8), 0x1EuLL, (NTSTRSAFE_PCWSTR)v35 + 2);
          if ( AdditionalCrashDumpArea < 0 )
            goto LABEL_44;
          *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
          MasterIrp->UserIosb = 0LL;
          MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v35 + 14);
        }
        *(_BYTE *)(a1 + 1733) = 1;
LABEL_93:
        v15 = v54;
        goto LABEL_94;
      }
    }
    AdditionalCrashDumpArea = -1073741670;
LABEL_44:
    v27 = v50;
LABEL_45:
    ExFreePoolWithTag(P, 0x44436152u);
    if ( v54 )
      ExFreePoolWithTag(v54, 0x44436152u);
    if ( v5 )
    {
      v29 = *(void **)(v5 + 80);
      if ( v29 )
        ExFreePoolWithTag(v29, 0);
      ExFreePoolWithTag((PVOID)v5, 0x44436152u);
    }
    v30 = a2;
    goto LABEL_52;
  }
LABEL_94:
  RaidDriverGetName(*(_QWORD *)(v2 + 16), &String2);
  if ( *(_BYTE *)(v2 + 4242) != v38 )
  {
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(v5 + 8), 0x1EuLL, L"%ws.sys", String2.Buffer);
    v39 = (*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8;
    if ( !v39 )
      v39 = 16;
    MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v2 + 800) + 4095 + 16 * v39) & 0xFFFFF000;
    if ( !HIDWORD(MasterIrp->IoStatus.Information) )
      HIDWORD(MasterIrp->IoStatus.Information) = P->ByteCount;
    *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v2 + 752);
    MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v2 + 824);
    if ( (*(_DWORD *)(v2 + 564) & 1) != 0 || (v40 = *(_DWORD *)(a1 + 3296), v40 == 10) || v40 == 1 )
      MasterIrp->IoStatus.Status |= 2u;
  }
  MasterIrp->IoStatus.Status |= 8u;
  RtlInitUnicodeString((PUNICODE_STRING)(v15 + 9), L"\\SystemRoot\\System32\\Drivers\\diskdump.sys");
  v41 = (unsigned __int16 *)(v5 + 72);
  AdditionalCrashDumpArea = 0;
  FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL), v5 + 72);
  if ( FullDriverPath >= 0 && !*(_BYTE *)(v2 + 4242) )
  {
    v60 = 0LL;
    v61 = 0;
    *(_OWORD *)pszDest = 0LL;
    v62 = 0;
    DestinationString = 0LL;
    FullDriverPath = RtlStringCbPrintfW(pszDest, 0x1EuLL, L"%ws.sys", String2.Buffer);
    if ( FullDriverPath >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      if ( *v41 > DestinationString.Length )
      {
        v45 = *v41 - (unsigned __int64)DestinationString.Length;
        String2 = 0LL;
        RtlInitUnicodeString(&String2, (PCWSTR)(v5 + 8));
        if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
        {
          if ( DestinationString.Length < String2.Length )
          {
            v46 = (WCHAR *)RaidAllocatePool(
                             64LL,
                             String2.Length + *(unsigned __int16 *)(v5 + 74) - DestinationString.Length + 2LL,
                             1145266514LL,
                             *(_QWORD *)(a1 + 8));
            v47 = v46;
            if ( v46 )
            {
              memmove(v46, *(const void **)(v5 + 80), v45);
              memmove((char *)v47 + v45, String2.Buffer, String2.Length);
            }
            v48 = *(void **)(v5 + 80);
            AdditionalCrashDumpArea = 0;
            if ( v48 )
            {
              ExFreePoolWithTag(v48, 0);
              *(_OWORD *)v41 = 0LL;
            }
            if ( v47 )
              RtlInitUnicodeString((PUNICODE_STRING)(v5 + 72), v47);
            goto LABEL_119;
          }
          memset((void *)(v45 + *(_QWORD *)(v5 + 80)), 0, DestinationString.Length);
          memmove((void *)(v45 + *(_QWORD *)(v5 + 80)), String2.Buffer, String2.Length);
          *v41 = String2.Length + v45;
        }
        AdditionalCrashDumpArea = 0;
        goto LABEL_119;
      }
    }
    v49 = *(void **)(v5 + 80);
    if ( v49 )
    {
      ExFreePoolWithTag(v49, 0);
      *(_OWORD *)v41 = 0LL;
    }
  }
LABEL_119:
  if ( FullDriverPath >= 0 )
    AdditionalCrashDumpArea = FullDriverPath;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_S(WPP_GLOBAL_Control->AttachedDevice, v42, v43, v5 + 8);
  }
  v28 = *(unsigned int *)(v2 + 536);
  if ( (_DWORD)v28 )
    AdditionalCrashDumpArea = StorPortGetAdditionalCrashDumpArea(v2, &P->Process);
  if ( AdditionalCrashDumpArea < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        33LL,
        &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        (unsigned int)AdditionalCrashDumpArea);
    }
    goto LABEL_44;
  }
  v30 = a2;
  v27 = v50;
  a2->IoStatus.Information = 104LL;
LABEL_52:
  v31 = v55;
  if ( v55 )
  {
    RaidXrbDeallocateResources(v27, 0, v28);
    StorFreeContiguousIoResources(v2, v31);
  }
  if ( Srb )
  {
    if ( *((_BYTE *)Srb + 2) == 40 )
    {
      v32 = v57;
      if ( !v57 )
        v32 = Srb;
      *((_QWORD *)v32 + 10) = 0LL;
      *((_QWORD *)v32 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( v56 )
    ExFreePoolWithTag(v56, 0x44436152u);
  return RaidCompleteRequestEx(v30, 0, AdditionalCrashDumpArea);
}
