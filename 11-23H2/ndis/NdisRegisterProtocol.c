/*
 * XREFs of NdisRegisterProtocol @ 0x1C009D850
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026ED8 (WPP_RECORDER_SF_Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0030164 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C00302E4 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C0030410 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C009CF98 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0111AC0 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C011CC84 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C011D0A0 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C011E45C (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C011E4A8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D6C4 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

void __fastcall NdisRegisterProtocol(
        int *a1,
        struct _NDIS_PROTOCOL_BLOCK **a2,
        struct _NDIS50_PROTOCOL_CHARACTERISTICS *a3,
        unsigned int a4)
{
  struct _NDIS_PROTOCOL_BLOCK *v4; // rdi
  unsigned __int16 *p_Length; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ebx
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
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
  p_Length = &a3->Ndis40Chars.Name.Length;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0xEu,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      &a3->Ndis40Chars.Name.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a3->Ndis40Chars.MajorNdisVersion < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_5:
    v12 = -1073676284;
    goto LABEL_6;
  }
  if ( a3->Ndis40Chars.MajorNdisVersion != 4 || a3->Ndis40Chars.MinorNdisVersion )
  {
    if ( a3->Ndis40Chars.MajorNdisVersion != 5 || a3->Ndis40Chars.MinorNdisVersion > 1u )
      goto LABEL_5;
    v14 = 208;
  }
  else
  {
    v14 = 144;
  }
  if ( a4 >= v14 && ndisValidateLegacyProtocols(a3, v10, v11) )
  {
    LOBYTE(v16) = 1;
    p_Length = &a3->Ndis40Chars.Name.Length;
    LOBYTE(v15) = 1;
    ProtocolDriver = ndisBindGetProtocolDriver(&v27, (char *)&a3->2 + 88, v15, v16);
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
      v20 = *p_Length + 890;
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
        LOWORD(Reserved) = *p_Length;
        v4->Name.Length = *p_Length;
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
        v12 = 0;
      }
      else
      {
        v12 = -1073741670;
      }
    }
    else
    {
      v12 = -1073741670;
    }
  }
  else
  {
    v12 = -1073676283;
  }
LABEL_6:
  *a1 = v12;
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      5u,
      0xFu,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)v4,
      p_Length,
      v12);
  if ( P )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 12, 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)P);
      ExFreePoolWithTag(P, 0x44745042u);
    }
  }
}
