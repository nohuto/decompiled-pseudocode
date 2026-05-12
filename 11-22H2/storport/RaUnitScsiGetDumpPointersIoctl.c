/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C000FA90 (RaidGetTelemetryLogPageIds.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0010464 (RaidQueryCrashdumpFunctions.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     RtlStringCbPrintfW @ 0x1C001A150 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     WPP_SF_qD @ 0x1C003E980 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0063580 (StorPortGetAdditionalCrashDumpArea.c)
 *     WPP_SF_S @ 0x1C0063A98 (WPP_SF_S.c)
 */

__int64 __fastcall RaUnitScsiGetDumpPointersIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // r14
  unsigned int *Srb; // r15
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
  __int64 v25; // r8
  int v26; // eax
  signed int AdditionalCrashDumpArea; // ebx
  PVOID v28; // r13
  unsigned int v29; // eax
  unsigned int ByteCount; // eax
  char v31; // r11
  unsigned int v32; // ecx
  unsigned __int16 *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  NTSTATUS FullDriverPath; // r13d
  __int64 v37; // r8
  IRP *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // r13
  unsigned int *v41; // rax
  void *v43; // rcx
  int v44; // eax
  int v45; // eax
  size_t v46; // rbx
  WCHAR *v47; // rax
  const WCHAR *v48; // rdi
  void *v49; // rcx
  void *v50; // rcx
  __int64 v51; // [rsp+30h] [rbp-59h]
  _MDL *v52; // [rsp+38h] [rbp-51h]
  UNICODE_STRING String2; // [rsp+48h] [rbp-41h] BYREF
  PVOID v55; // [rsp+58h] [rbp-31h]
  __int64 v56; // [rsp+60h] [rbp-29h]
  PVOID P; // [rsp+68h] [rbp-21h]
  unsigned int *v58; // [rsp+70h] [rbp-19h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-11h] BYREF
  wchar_t pszDest[8]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v61; // [rsp+98h] [rbp+Fh]
  int v62; // [rsp+A0h] [rbp+17h]
  __int16 v63; // [rsp+A4h] [rbp+1Bh]

  v2 = *(_QWORD *)(a1 + 24);
  P = 0LL;
  Srb = 0LL;
  v56 = 0LL;
  v5 = 0LL;
  v51 = 0LL;
  v6 = 0;
  v58 = 0LL;
  String2 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( a2->RequestorMode )
  {
    AdditionalCrashDumpArea = -1073741790;
LABEL_78:
    v38 = a2;
    return RaidCompleteRequestEx(v38, 0, AdditionalCrashDumpArea);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    AdditionalCrashDumpArea = -1073741789;
    goto LABEL_78;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset_0(MasterIrp, 0, 0x68uLL);
  Pool = RaidAllocatePool(64LL, 352LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v52 = (_MDL *)Pool;
  if ( !Pool )
  {
    v38 = a2;
    AdditionalCrashDumpArea = -1073741670;
    return RaidCompleteRequestEx(v38, 0, AdditionalCrashDumpArea);
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
  RaidGetTelemetryLogPageIds(*(_DWORD *)(a1 + 3344), Pool + 240, (_WORD *)(Pool + 272));
  v10 = *(_QWORD *)(v2 + 568);
  if ( (*(_DWORD *)(v10 + 184) & 0x80u) != 0 && (*(_DWORD *)(v10 + 188) & 2) != 0 )
    WORD1(v52[5].StartVa) = HiberFileHybridPriority;
  else
    WORD1(v52[5].StartVa) = -1;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1792)) >= 0 )
    {
      *(_BYTE *)v9 = 1;
      v6 = 1;
      *(_QWORD *)(v9 + 8) = **(_QWORD **)(a1 + 1792);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
  v11 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 4896LL);
  if ( v11 && (int)PoFxRegisterCrashdumpDevice(*v11) >= 0 )
  {
    v6 = 1;
    *(_BYTE *)(v9 + 32) = 1;
    *(_QWORD *)(v9 + 40) = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 4896LL);
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 4962LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 4960LL) = 40;
  if ( (int)RaidQueryCrashdumpFunctions(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL)) >= 0
    && (v12 = *(_QWORD *)(a1 + 24), (v13 = *(_QWORD *)(v12 + 4992)) != 0)
    && *(_QWORD *)(v12 + 4984) )
  {
    *(_QWORD *)(v9 + 56) = v13;
    *(_QWORD *)(v9 + 64) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4968LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 4962LL) = 0;
    if ( !v6 )
      goto LABEL_19;
  }
  MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (void *)v9;
  MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
LABEL_19:
  *(_QWORD *)(v9 + 16) = a1 + 1782;
  v14 = *(_QWORD *)(a1 + 24) + 4829LL;
  *(_QWORD *)(v9 + 24) = a1 + 1783;
  *(_QWORD *)(v9 + 48) = v14;
  v15 = (_QWORD *)RaidAllocatePool(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v55 = v15;
  if ( !v15 || (v5 = RaidAllocatePool(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8))) == 0 )
  {
    AdditionalCrashDumpArea = -1073741670;
    v39 = 0LL;
    goto LABEL_87;
  }
  RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v15 + 4, 0x1EuLL, L"diskdump.sys");
  RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v15 + 19, 0x1EuLL, L"storport.sys");
  *v15 = v5;
  *(_QWORD *)v5 = 0LL;
  MasterIrp->MdlAddress = v52;
  MasterIrp->UserEvent = (_KEVENT *)(a1 + 1783);
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
  if ( !*(_BYTE *)(v2 + 4306) || (*(_DWORD *)(*(_QWORD *)(v2 + 568) + 184LL) & 8) != 0 )
  {
    P = (PVOID)RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v16 = P;
    if ( P )
    {
      Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v2 + 442), 0);
      if ( Srb
        && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                      ((*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                      v17,
                                      v2),
            (v56 = ContiguousIoResources) != 0) )
      {
        v20 = ContiguousIoResources + 48;
        v51 = ContiguousIoResources + 48;
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
          v22 = *(_BYTE *)(v2 + 4306) == 0;
          Srb[10] = 10;
          if ( v22 )
            v21 = 64;
          v58 = Srb;
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
          v44 = Srb[3];
          *((_QWORD *)Srb + 6) = v20;
          *((_BYTE *)Srb + 2) = 38;
          *((_QWORD *)Srb + 3) = v16;
          Srb[4] = 112;
          v22 = *(_BYTE *)(v2 + 4306) == 0;
          Srb[5] = 10;
          if ( v22 )
            v44 = 64;
          Srb[3] = v44;
          *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 96);
          *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 97);
          *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 98);
        }
        RaSrbSetMiniportContext(v2, (__int64)Srb, v56 + 1104);
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
            &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
            v20,
            Srb);
        }
        if ( *(_BYTE *)(v2 + 4306) )
          v26 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v20);
        else
          v26 = RaidAdapterExecuteXrb(v2, (_QWORD *)v20, v25);
        AdditionalCrashDumpArea = v26;
        if ( v26 >= 0 )
        {
          KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
          AdditionalCrashDumpArea = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            30LL,
            &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
            (unsigned int)AdditionalCrashDumpArea,
            *((unsigned __int8 *)Srb + 3));
        }
        if ( AdditionalCrashDumpArea < 0 )
        {
          if ( !*(_BYTE *)(v2 + 4306) || (*(_DWORD *)(*(_QWORD *)(v2 + 568) + 184LL) & 0x1000) != 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 )
            {
              v39 = v51;
              if ( BYTE1(WPP_GLOBAL_Control->Timer) )
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  31LL,
                  &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
                  v51,
                  AdditionalCrashDumpArea);
              goto LABEL_87;
            }
            goto LABEL_86;
          }
          goto LABEL_47;
        }
        v28 = P;
        v29 = *((_DWORD *)P + 20);
        if ( v29 )
        {
          v52->ByteCount = v29;
          ByteCount = *((_DWORD *)v28 + 20);
        }
        else
        {
          ByteCount = v52->ByteCount;
        }
        HIDWORD(MasterIrp->IoStatus.Information) = ByteCount;
        v52[1].StartVa = (void *)*((_QWORD *)v28 + 8);
        if ( *(_BYTE *)(v2 + 4306) )
        {
LABEL_46:
          *(_BYTE *)(a1 + 1781) = 1;
LABEL_47:
          v15 = v55;
          goto LABEL_48;
        }
        HIDWORD(v52->Process) = *((_DWORD *)v28 + 18);
        LODWORD(v52->MappedSystemVa) = *((_DWORD *)v28 + 19);
        v52->ByteOffset = *((_DWORD *)v28 + 21);
        LODWORD(v52[1].Process) = *((_DWORD *)v28 + 22);
        HIDWORD(v52[1].Process) = *((_DWORD *)v28 + 23);
        v52[1].MappedSystemVa = (void *)*((_QWORD *)v28 + 12);
        LOBYTE(v52[1].ByteCount) = *((_BYTE *)v28 + 104);
        BYTE2(v52[2].Next) = *((_BYTE *)v28 + 105);
        HIBYTE(v52[2].Size) = *((_BYTE *)v28 + 106);
        BYTE1(v52[2].Process) = *((_BYTE *)v28 + 107);
        if ( *((_WORD *)v28 + 2) )
        {
          AdditionalCrashDumpArea = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(v5 + 8), 0x1EuLL, (NTSTRSAFE_PCWSTR)v28 + 2);
          if ( AdditionalCrashDumpArea >= 0 )
          {
            *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
            MasterIrp->UserIosb = 0LL;
            MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v28 + 14);
            goto LABEL_46;
          }
        }
        else
        {
          AdditionalCrashDumpArea = -1073741637;
        }
      }
      else
      {
        AdditionalCrashDumpArea = -1073741670;
      }
LABEL_86:
      v39 = v51;
      goto LABEL_87;
    }
    AdditionalCrashDumpArea = -1073741670;
    v39 = 0LL;
LABEL_87:
    ExFreePoolWithTag(v52, 0x44436152u);
    if ( v55 )
      ExFreePoolWithTag(v55, 0x44436152u);
    if ( v5 )
    {
      v43 = *(void **)(v5 + 80);
      if ( v43 )
        ExFreePoolWithTag(v43, 0);
      ExFreePoolWithTag((PVOID)v5, 0x44436152u);
    }
    v38 = a2;
    goto LABEL_65;
  }
LABEL_48:
  RaidDriverGetName(*(_QWORD *)(v2 + 16), &String2);
  if ( *(_BYTE *)(v2 + 4306) != v31 )
  {
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(v5 + 8), 0x1EuLL, L"%ws.sys", String2.Buffer);
    v32 = (*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8;
    if ( !v32 )
      v32 = 16;
    MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v2 + 808) + 4095 + 16 * v32) & 0xFFFFF000;
    if ( !HIDWORD(MasterIrp->IoStatus.Information) )
      HIDWORD(MasterIrp->IoStatus.Information) = v52->ByteCount;
    *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v2 + 760);
    MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v2 + 832);
    if ( (*(_DWORD *)(v2 + 564) & 1) != 0 || (v45 = *(_DWORD *)(a1 + 3344), v45 == 10) || v45 == 1 )
      MasterIrp->IoStatus.Status |= 2u;
  }
  MasterIrp->IoStatus.Status |= 8u;
  RtlInitUnicodeString((PUNICODE_STRING)(v15 + 9), L"\\SystemRoot\\System32\\Drivers\\diskdump.sys");
  v33 = (unsigned __int16 *)(v5 + 72);
  AdditionalCrashDumpArea = 0;
  FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL), v5 + 72);
  if ( FullDriverPath >= 0 && !*(_BYTE *)(v2 + 4306) )
  {
    v61 = 0LL;
    *(_OWORD *)pszDest = 0LL;
    v62 = 0;
    v63 = 0;
    DestinationString = 0LL;
    FullDriverPath = RtlStringCbPrintfW(pszDest, 0x1EuLL, L"%ws.sys", String2.Buffer);
    if ( FullDriverPath >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      if ( *v33 > DestinationString.Length )
      {
        v46 = *v33 - (unsigned __int64)DestinationString.Length;
        String2 = 0LL;
        RtlInitUnicodeString(&String2, (PCWSTR)(v5 + 8));
        if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
        {
          if ( DestinationString.Length < String2.Length )
          {
            v47 = (WCHAR *)RaidAllocatePool(
                             64LL,
                             String2.Length + *(unsigned __int16 *)(v5 + 74) - DestinationString.Length + 2LL,
                             1145266514LL,
                             *(_QWORD *)(a1 + 8));
            v48 = v47;
            if ( v47 )
            {
              memmove(v47, *(const void **)(v5 + 80), v46);
              memmove((char *)v48 + v46, String2.Buffer, String2.Length);
            }
            v49 = *(void **)(v5 + 80);
            AdditionalCrashDumpArea = 0;
            if ( v49 )
            {
              ExFreePoolWithTag(v49, 0);
              *(_OWORD *)v33 = 0LL;
            }
            if ( v48 )
              RtlInitUnicodeString((PUNICODE_STRING)(v5 + 72), v48);
            goto LABEL_57;
          }
          memset_0((void *)(v46 + *(_QWORD *)(v5 + 80)), 0, DestinationString.Length);
          memmove((void *)(v46 + *(_QWORD *)(v5 + 80)), String2.Buffer, String2.Length);
          *v33 = String2.Length + v46;
        }
        AdditionalCrashDumpArea = 0;
        goto LABEL_57;
      }
    }
    v50 = *(void **)(v5 + 80);
    if ( v50 )
    {
      ExFreePoolWithTag(v50, 0);
      *(_OWORD *)v33 = 0LL;
    }
  }
LABEL_57:
  if ( FullDriverPath >= 0 )
    AdditionalCrashDumpArea = FullDriverPath;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_S(WPP_GLOBAL_Control->AttachedDevice, v34, v35, v5 + 8);
  }
  v37 = *(unsigned int *)(v2 + 536);
  if ( (_DWORD)v37 )
    AdditionalCrashDumpArea = StorPortGetAdditionalCrashDumpArea(v2, &v52->Process);
  if ( AdditionalCrashDumpArea < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        33LL,
        &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
        (unsigned int)AdditionalCrashDumpArea);
    }
    goto LABEL_86;
  }
  v38 = a2;
  v39 = v51;
  a2->IoStatus.Information = 104LL;
LABEL_65:
  v40 = v56;
  if ( v56 )
  {
    RaidXrbDeallocateResources(v39, 0, v37);
    StorFreeContiguousIoResources(v2, v40);
  }
  if ( Srb )
  {
    if ( *((_BYTE *)Srb + 2) == 40 )
    {
      v41 = v58;
      if ( !v58 )
        v41 = Srb;
      *((_QWORD *)v41 + 10) = 0LL;
      *((_QWORD *)v41 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44436152u);
  return RaidCompleteRequestEx(v38, 0, AdditionalCrashDumpArea);
}
