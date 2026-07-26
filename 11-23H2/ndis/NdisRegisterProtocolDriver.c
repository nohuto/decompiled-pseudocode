/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1C002FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026ED8 (WPP_RECORDER_SF_Z.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C0030074 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0030164 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C00302E4 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C0030410 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C009BDD0 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0111AC0 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C011CC84 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C011D0A0 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C011E4A8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C011E588 (-ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@.c)
 *     ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C011E628 (-ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERI.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D6C4 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  struct _NDIS_PROTOCOL_BLOCK *v3; // rdi
  _UNICODE_STRING *p_Name; // r14
  NDIS_STATUS v8; // ebx
  unsigned int v9; // ebx
  __int64 Pool2; // rax
  _QWORD *v11; // r15
  __int64 v12; // rax
  unsigned __int8 MajorNdisVersion; // cl
  unsigned __int8 MinorNdisVersion; // dl
  unsigned int Flags; // eax
  unsigned __int16 Length; // ax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 ProtocolDriver; // rax
  unsigned int v20; // edx
  unsigned int v21; // edx
  int v22; // edx
  PVOID v24; // rbx
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING v27; // [rsp+58h] [rbp-28h] BYREF
  UNICODE_STRING v28; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+C8h] [rbp+48h] BYREF

  *(_QWORD *)&String2.Length = 786442LL;
  String2.Buffer = L"TCPIP";
  LOBYTE(v3) = 0;
  v29 = 0;
  v27.Buffer = L"TCPIP6";
  *(_QWORD *)&v27.Length = 917516LL;
  v28.Buffer = L"NDISTEST6";
  *(_QWORD *)&v28.Length = 1310738LL;
  p_Name = &ProtocolCharacteristics->Name;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      &ProtocolCharacteristics->Name.Length);
  ndisIfEnsureNsiInitialized();
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v8 = ndisValidateProtocolDriverCharacteristicsHeader(ProtocolCharacteristics, &v29);
  if ( !v8 )
  {
    v8 = -1073676283;
    if ( (unsigned int)ndisValidate60Protocol(ProtocolCharacteristics) != -1073676283 )
    {
      if ( (ProtocolCharacteristics->MajorNdisVersion > 6u
         || ProtocolCharacteristics->MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion >= 0x32u)
        && (ProtocolCharacteristics->Flags & 0xFFFFFF9) != 0 )
      {
        v8 = -1073741811;
      }
      else
      {
        v9 = p_Name->Length + 890;
        Pool2 = ExAllocatePool2(64LL, v9, 1651524686);
        v3 = (struct _NDIS_PROTOCOL_BLOCK *)Pool2;
        if ( Pool2 )
        {
          v11 = (_QWORD *)(Pool2 + 824);
          *(_QWORD *)(Pool2 + 824) = 0LL;
          v12 = Pool2 + 832;
          *(_QWORD *)(v12 + 40) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
          *(_QWORD *)(v12 + 16) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v12 + 48) = 0;
          *(_QWORD *)(v12 + 32) = v3;
          *(_QWORD *)(v12 + 24) = v12;
          KeInitializeMutex(&v3->Mutex, 0xFFFFu);
          MajorNdisVersion = ProtocolCharacteristics->MajorNdisVersion;
          MinorNdisVersion = ProtocolCharacteristics->MinorNdisVersion;
          v3->MajorDriverVersion = ProtocolCharacteristics->MajorDriverVersion;
          v3->MinorDriverVersion = ProtocolCharacteristics->MinorDriverVersion;
          v3->Header.Size = v9;
          v3->Name.Buffer = (wchar_t *)&v3[1].Header.Type;
          Flags = ProtocolCharacteristics->Flags;
          v3->Flags = Flags;
          *(_WORD *)&v3->Header.Type = 259;
          v3->MajorNdisVersion = MajorNdisVersion;
          v3->MinorNdisVersion = MinorNdisVersion;
          v3->ProtocolDriverContext = ProtocolDriverContext;
          if ( MajorNdisVersion <= 6u && (MajorNdisVersion != 6 || MinorNdisVersion < 0x32u) )
            v3->Flags = Flags & 0xF0000000;
          Length = p_Name->Length;
          v3->Name.Length = p_Name->Length;
          v3->Name.MaximumLength = Length;
          RtlUpcaseUnicodeString(&v3->Name, p_Name, 0);
          v3->IsIPv4 = RtlCompareUnicodeString(&v3->Name, &String2, 0) == 0;
          v3->IsIPv6 = RtlCompareUnicodeString(&v3->Name, &v27, 0) == 0;
          v3->IsNdisTest6 = RtlCompareUnicodeString(&v3->Name, &v28, 0) == 0;
          v3->BindAdapterHandlerEx = ProtocolCharacteristics->BindAdapterHandlerEx;
          v3->UnbindAdapterHandlerEx = ProtocolCharacteristics->UnbindAdapterHandlerEx;
          v3->OpenAdapterCompleteHandlerEx = ProtocolCharacteristics->OpenAdapterCompleteHandlerEx;
          v3->CloseAdapterCompleteHandlerEx = ProtocolCharacteristics->CloseAdapterCompleteHandlerEx;
          v3->PnPEventHandler = (int (__fastcall *)(void *, _NET_PNP_EVENT *))ProtocolCharacteristics->NetPnPEventHandler;
          v3->UninstallHandler = ProtocolCharacteristics->UninstallHandler;
          v3->StatusHandlerEx = ProtocolCharacteristics->StatusHandlerEx;
          v3->ReceiveNetBufferListsHandler = ProtocolCharacteristics->ReceiveNetBufferListsHandler;
          v3->SendNetBufferListsCompleteHandler = ProtocolCharacteristics->SendNetBufferListsCompleteHandler;
          v3->OidRequestCompleteHandler = ProtocolCharacteristics->OidRequestCompleteHandler;
          if ( ProtocolCharacteristics->MajorNdisVersion > 6u
            || ProtocolCharacteristics->MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion )
          {
            v3->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
          }
          ndisInitializeRef(&v3->Ref, 0xFu);
          LOBYTE(v18) = v3->MajorNdisVersion <= 6u && (v3->MajorNdisVersion != 6 || v3->MinorNdisVersion < 0x52u);
          LOBYTE(v17) = 1;
          ProtocolDriver = ndisBindGetProtocolDriver(&P, &v3->Name, v17, v18);
          KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(v11, ProtocolDriver);
          if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 12, 0xFFFFFFFF) == 1 )
          {
            v24 = P;
            NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)P);
            ExFreePoolWithTag(v24, 0x44745042u);
          }
          if ( *v11 )
          {
            *NdisProtocolHandle = v3;
            v8 = ndisInvokeSetOptions(v3, ProtocolCharacteristics);
            if ( v8 )
            {
              _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3, v21);
              ExFreePoolWithTag(v3, 0);
              LOBYTE(v3) = 0;
              *NdisProtocolHandle = 0LL;
            }
            else
            {
              ndisWriteDriverNDISVersionToServiceKey(
                v3->MajorNdisVersion,
                v3->MinorNdisVersion,
                1u,
                v3->MajorDriverVersion,
                v3->MinorDriverVersion,
                &v3->Name);
              ndisRegisterProtocolDriverCommon(v3);
            }
          }
          else
          {
            _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3, v20);
            ExFreePoolWithTag(v3, 0);
            v8 = -1073741670;
          }
        }
        else
        {
          v8 = -1073741670;
        }
      }
    }
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      13,
      11,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)v3,
      (__int64)p_Name,
      v8);
  return v8;
}
