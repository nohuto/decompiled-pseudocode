/*
 * XREFs of ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x1400148F4
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140011338 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400148CC (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140014B4C (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::SetModulesManagerOnAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v3; // ebx
  __int64 v4; // rax
  struct IUnknown *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-10h] BYREF
  __int64 v8; // [rsp+28h] [rbp-8h] BYREF
  struct IUnknown *v9; // [rsp+50h] [rbp+20h] BYREF
  struct IUnknown *v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  v8 = 0LL;
  v7 = 0LL;
  v11 = *((_QWORD *)this + 3);
  if ( !v11 )
    goto LABEL_9;
  while ( 1 )
  {
    v4 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev((__int64)this, &v11);
    if ( *(_DWORD *)(v4 + 40) == 2 )
      break;
LABEL_8:
    if ( !v11 )
      goto LABEL_9;
  }
  v10 = 0LL;
  v9 = 0LL;
  v3 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(*(_QWORD *)(v4 + 32) + 40LL, &v10);
  if ( v3 >= 0 )
  {
    v5 = v9;
    if ( v9 != v10 )
    {
      ATL::AtlComQIPtrAssign(&v9, v10, &GUID_98f37dac_d0b6_49f5_896a_aa4d169a4c48);
      v5 = v9;
    }
    if ( !v5
      || (v3 = ((__int64 (__fastcall *)(struct IUnknown *, struct Windows::Media::Devices::IAudioDeviceModulesManager *))v5->lpVtbl[1].QueryInterface)(
                 v5,
                 a2),
          v3 >= 0) )
    {
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v9);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v10);
      goto LABEL_8;
    }
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v9);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v10);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      37LL,
      &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
      (unsigned int)v3);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::SetModulesManagerOnAPOs", 0xC5Du, v3);
LABEL_9:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v7);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v8);
  return (unsigned int)v3;
}
