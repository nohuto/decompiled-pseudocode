/*
 * XREFs of imp_WdfDriverCreate @ 0x1C0027650
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0022E2C (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00230E8 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0026F1C (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     GetImageName @ 0x1C0026FBC (GetImageName.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C00278E4 (--1FxAutoString@@QEAA@XZ.c)
 *     FxInitialize @ 0x1C0027E24 (FxInitialize.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ?_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z @ 0x1C00315F0 (-_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U4@U?$_tlgWrapperByVal@$00@@U5@U5@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$03@@6AEBU?$_tlgWrapperByVal@$00@@776@Z @ 0x1C0065E18 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03.c)
 *     WPP_IFR_SF_dddd @ 0x1C00660B4 (WPP_IFR_SF_dddd.c)
 *     FxDestroy @ 0x1C006B75C (FxDestroy.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes,
        _WDF_DRIVER_CONFIG *DriverConfig,
        WDFDRIVER__ **Driver)
{
  _FX_DRIVER_GLOBALS *v6; // rbx
  _WDF_DRIVER_CONFIG *v11; // rdi
  unsigned int DriverInitFlags; // eax
  __int64 result; // rax
  WDFDRIVER__ **v14; // r15
  _WDF_DRIVER_CONFIG *v15; // rdx
  unsigned int DriverPoolTag; // eax
  _WDF_DRIVER_CONFIG *v17; // r9
  FxDriver *v18; // rax
  FxDriver *v19; // rax
  FxObject *v20; // r14
  int v21; // esi
  FxObject *v22; // rcx
  WDFDRIVER__ *v23; // rcx
  bool v24; // al
  const _GUID *v25; // r8
  const _GUID *v26; // r9
  unsigned int v27; // edi
  unsigned int DriverFlags; // ecx
  bool v29; // al
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  __int64 v31; // rcx
  _tlgWrapperByVal<1> v32; // [rsp+70h] [rbp-39h] BYREF
  FxAutoString imageName; // [rsp+80h] [rbp-29h] BYREF
  _tlgWrapperByVal<4> v34; // [rsp+90h] [rbp-19h] BYREF
  _tlgWrapperByVal<4> v35; // [rsp+94h] [rbp-15h] BYREF
  _tlgWrapperByVal<4> v36; // [rsp+98h] [rbp-11h] BYREF
  _tlgWrapSz<unsigned short> v37; // [rsp+A0h] [rbp-9h] BYREF
  _tlgWrapSz<unsigned short> v38; // [rsp+A8h] [rbp-1h] BYREF
  _tlgWrapSz<char> v39; // [rsp+B0h] [rbp+7h] BYREF
  _tlgWrapperByRef<16> v40; // [rsp+B8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+F8h] [rbp+4Fh]
  WDFDRIVER__ *hDriver; // [rsp+100h] [rbp+57h] BYREF
  _tlgWrapperByVal<1> hProvider; // [rsp+108h] [rbp+5Fh] BYREF

  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hDriver = 0LL;
  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v6->IsDriverCompanion = 0;
  if ( !RegistryPath )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v11 = DriverConfig;
  if ( !DriverConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( DriverConfig->Size != 32 )
  {
    v27 = -1073741820;
    WPP_IFR_SF_dddd(v6, 2u, 0x11u, 0xAu, WPP_FxDriverApi_cpp_Traceguids, DriverConfig->Size, 32, 32, -1073741820);
    return v27;
  }
  DriverInitFlags = DriverConfig->DriverInitFlags;
  if ( (DriverInitFlags & 0xFFFFFFEC) != 0 )
  {
    WPP_IFR_SF_DDd(
      v6,
      (unsigned __int8)DriverObject,
      0x11u,
      0xBu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverInitFlags,
      19,
      -1073741811);
    return 3221225485LL;
  }
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    if ( v6->IsDriverCompanion || (result = FxValidateUnicodeString(v6, RegistryPath), (int)result >= 0) )
    {
      if ( !v6->Driver && !DriverGlobals->Driver )
      {
        v14 = Driver;
        if ( Driver )
          *Driver = 0LL;
        FxDriver::_InitializeDriverName(v6, RegistryPath);
        if ( v11->Size == 32 && (DriverPoolTag = v11->DriverPoolTag) != 0 && DriverPoolTag != 543908932 )
        {
          v6->Tag = DriverPoolTag;
          v6->Public.DriverTag = v11->DriverPoolTag;
        }
        else
        {
          FxDriver::_InitializeTag(v6, v15);
        }
        if ( (v11->DriverInitFlags & 3) != 1 || !v11->EvtDriverDeviceAdd )
        {
          result = FxValidateObjectAttributes(v6, DriverAttributes, 7);
          if ( (int)result < 0 )
            return result;
          FxInitialize(v6, DriverObject, RegistryPath, v17);
          *(_QWORD *)&imageName.m_UnicodeString.Length = 0LL;
          imageName.m_UnicodeString.Buffer = (wchar_t *)64;
          v18 = (FxDriver *)FxObjectHandleAllocCommon(
                              v6,
                              (FxPoolTypeOrPoolFlags *)&imageName,
                              0x170uLL,
                              0,
                              DriverAttributes,
                              0,
                              FxObjectTypeExternal);
          if ( v18 && (FxDriver::FxDriver(v18, DriverObject, v11, v6), (v20 = v19) != 0LL) )
          {
            v21 = FxDriver::Initialize(v19, RegistryPath, v11, DriverAttributes);
            v22 = v20;
            if ( v21 >= 0 )
            {
              v21 = FxObject::Commit(v20, (_FX_DRIVER_GLOBALS *)DriverAttributes, (void **)&hDriver, 0LL, 1u);
              v22 = v20;
              if ( v21 >= 0 )
              {
                v23 = hDriver;
                DriverGlobals->Driver = hDriver;
                v6->Driver = (FxDriver *)v20;
                v6->Public.DriverFlags |= v11->DriverInitFlags;
                v24 = (v11->DriverInitFlags & 3) == 0 || v11->EvtDriverUnload != 0LL;
                v6->Public.DisplaceDriverUnload = v24;
                if ( v14 )
                  *v14 = v23;
                if ( v6->TelemetryContext )
                {
                  imageName = 0LL;
                  GetImageName(v6, &imageName.m_UnicodeString);
                  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5
                    && (Tlgg_TelemetryProviderProv.KeywordAny & 0x200000000000LL) != 0
                    && (Tlgg_TelemetryProviderProv.KeywordAll & 0x200000000000LL) == Tlgg_TelemetryProviderProv.KeywordAll )
                  {
                    DriverFlags = v6->Public.DriverFlags;
                    v34.Value = v6->FxEnhancedVerifierOptions;
                    v29 = (DriverFlags & 2) != 0;
                    hProvider.Value = DriverFlags & 1;
                    WdfBindInfo = v6->WdfBindInfo;
                    LOBYTE(hDriver) = v29;
                    v32.Value = v6->FxVerifierOn;
                    v35.Value = WdfBindInfo->Version.Minor;
                    v36.Value = WdfBindInfo->Version.Major;
                    v37.Psz = L"01.033.0";
                    v38.Psz = imageName.m_UnicodeString.Buffer;
                    v39.Psz = v6->Public.DriverName;
                    v40.Ptr = v6->TelemetryContext;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                      (const _tlgProvider_t *)WdfBindInfo,
                      &tlgEvent_0._tlgChannel,
                      v25,
                      v26,
                      &v40,
                      &v39,
                      &v38,
                      &v37,
                      &v36,
                      &v35,
                      &v32,
                      &hProvider,
                      (const _tlgWrapperByVal<1> *)&hDriver,
                      &v34);
                  }
                  FxAutoString::~FxAutoString(&imageName);
                }
                return (unsigned int)v21;
              }
            }
            FxObject::ClearEvtCallbacks(v22);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 48LL))(v31);
          }
          else
          {
            v21 = -1073741670;
          }
          FxDestroy(v6);
          return (unsigned int)v21;
        }
        WPP_IFR_SF_(v6, 2u, 0x11u, 0xEu, WPP_FxDriverApi_cpp_Traceguids);
        return 3221225485LL;
      }
      v27 = -1073741437;
      WPP_IFR_SF_qL(v6, 2u, 0x11u, 0xDu, WPP_FxDriverApi_cpp_Traceguids, DriverObject, 0xC0000183);
      return v27;
    }
  }
  return result;
}
