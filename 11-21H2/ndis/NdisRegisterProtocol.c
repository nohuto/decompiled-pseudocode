/*
 * XREFs of NdisRegisterProtocol @ 0x1C00977F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C002AA58 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C002AB84 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C002AD90 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C0096F38 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C010AA7C (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C010F630 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C010FA40 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C0110DA4 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0110FC8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C0121C44 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

void __fastcall NdisRegisterProtocol(
        int *a1,
        struct _NDIS_PROTOCOL_BLOCK **a2,
        struct _NDIS50_PROTOCOL_CHARACTERISTICS *a3,
        unsigned int a4)
{
  struct _NDIS_PROTOCOL_BLOCK *v4; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ebx
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  _UNICODE_STRING *p_Name; // r14
  __int64 ProtocolDriver; // rax
  NDIS_BIND_PROTOCOL_DRIVER *v18; // rbx
  PVOID v19; // rbx
  USHORT v20; // bp
  __int64 Pool2; // rax
  PVOID *v22; // rcx
  __int64 v23; // rax
  unsigned int Reserved; // eax
  unsigned __int8 MajorNdisVersion; // cl
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  PVOID v27; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(v4) = 0;
  P = 0LL;
  ndisIfEnsureNsiInitialized();
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0xEu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      &a3->Ndis40Chars.Name.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a3->Ndis40Chars.MajorNdisVersion < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_5:
    v11 = -1073676284;
    goto LABEL_6;
  }
  if ( a3->Ndis40Chars.MajorNdisVersion == 4 )
  {
    if ( a3->Ndis40Chars.MinorNdisVersion )
      goto LABEL_5;
    v13 = 144;
  }
  else
  {
    if ( a3->Ndis40Chars.MajorNdisVersion != 5 || a3->Ndis40Chars.MinorNdisVersion > 1u )
      goto LABEL_5;
    v13 = 208;
  }
  if ( a4 >= v13 && ndisValidateLegacyProtocols(a3, v9, v10) )
  {
    LOBYTE(v15) = 1;
    p_Name = &a3->Ndis40Chars.Name;
    LOBYTE(v14) = 1;
    ProtocolDriver = ndisBindGetProtocolDriver(&v27, (char *)&a3->2 + 88, v14, v15);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&P, ProtocolDriver);
    v18 = (NDIS_BIND_PROTOCOL_DRIVER *)v27;
    if ( v27 && _InterlockedExchangeAdd((volatile signed __int32 *)v27 + 12, 0xFFFFFFFF) == 1 && v18 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER(v18);
      ExFreePoolWithTag(v18, 0x44745042u);
    }
    v19 = P;
    if ( P )
    {
      v20 = p_Name->Length + 890;
      Pool2 = ExAllocatePool2(64LL, v20, 1651524686);
      v4 = (struct _NDIS_PROTOCOL_BLOCK *)Pool2;
      if ( Pool2 )
      {
        v22 = (PVOID *)(Pool2 + 824);
        v23 = Pool2 + 832;
        *v22 = 0LL;
        *(_QWORD *)v23 = 0LL;
        *(_DWORD *)(v23 + 48) = 0;
        *(_QWORD *)(v23 + 40) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
        *(_QWORD *)(v23 + 16) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
        *(_QWORD *)(v23 + 32) = v4;
        *(_QWORD *)(v23 + 24) = v23;
        if ( v22 != &P )
          KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(v22, v19);
        KeInitializeMutex(&v4->Mutex, 0xFFFFu);
        v4->MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
        v4->MinorNdisVersion = a3->Ndis40Chars.MinorNdisVersion;
        *(_WORD *)&v4->Header.Type = 259;
        v4->Name.Buffer = (wchar_t *)&v4[1].Header.Type;
        Reserved = a3->Ndis40Chars.Reserved;
        v4->Reserved = Reserved;
        v4->Flags = Reserved & 0xF0000000;
        LOWORD(Reserved) = p_Name->Length;
        v4->Name.Length = p_Name->Length;
        v4->Name.MaximumLength = Reserved;
        v4->Header.Size = v20;
        RtlUpcaseUnicodeString(&v4->Name, &a3->Ndis40Chars.Name, 0);
        MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
        v4->OpenAdapterCompleteHandler = a3->Ndis40Chars.OpenAdapterCompleteHandler;
        v4->CloseAdapterCompleteHandler = a3->Ndis40Chars.CloseAdapterCompleteHandler;
        v4->SendCompleteHandler = a3->Ndis40Chars.SendCompleteHandler;
        v4->TransferDataCompleteHandler = a3->Ndis40Chars.TransferDataCompleteHandler;
        v4->ResetCompleteHandler = a3->Ndis40Chars.ResetCompleteHandler;
        v4->RequestCompleteHandler = a3->Ndis40Chars.RequestCompleteHandler;
        v4->ReceiveHandler = a3->Ndis40Chars.ReceiveHandler;
        v4->ReceiveCompleteHandler = a3->Ndis40Chars.ReceiveCompleteHandler;
        v4->StatusHandlerEx = (void (__fastcall *)(void *, _NDIS_STATUS_INDICATION *))a3->Ndis40Chars.StatusHandler;
        v4->StatusCompleteHandler = a3->Ndis40Chars.StatusCompleteHandler;
        if ( MajorNdisVersion >= 4u )
        {
          v4->ReceivePacketHandler = a3->Ndis40Chars.ReceivePacketHandler;
          v4->BindAdapterHandler = a3->Ndis40Chars.BindAdapterHandler;
          v4->UnbindAdapterHandler = a3->Ndis40Chars.UnbindAdapterHandler;
          v4->PnPEventHandler = a3->Ndis40Chars.PnPEventHandler;
          v4->UnloadHandler = a3->Ndis40Chars.UnloadHandler;
        }
        if ( MajorNdisVersion == 5 )
        {
          v4->CoSendCompleteHandler = a3->CoSendCompleteHandler;
          v4->CoStatusHandlerEx = (void (__fastcall *)(void *, void *, _NDIS_STATUS_INDICATION *))a3->CoStatusHandler;
          v4->CoReceivePacketHandler = a3->CoReceivePacketHandler;
          v4->CoAfRegisterNotifyHandler = a3->CoAfRegisterNotifyHandler;
        }
        *a2 = v4;
        ndisInitializeRef(&v4->Ref, 0xFu);
        ndisRegisterProtocolDriverCommon(v4);
        ndisWriteDriverNDISVersionToServiceKey(v4->MajorNdisVersion, v4->MinorNdisVersion, 0, 0, 0, &v4->Name);
        v11 = 0;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073676283;
  }
LABEL_6:
  *a1 = v11;
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      5u,
      0xFu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)v4,
      &a3->Ndis40Chars.Name.Length,
      v11);
  if ( P )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 12, 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)P);
      ExFreePoolWithTag(P, 0x44745042u);
    }
  }
}
