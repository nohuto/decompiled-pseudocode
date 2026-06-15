/*
 * XREFs of ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140019110
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140018B80 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPipeInstance::SetModulesManagerOnAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v10[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v10[0] = 0LL;
  v13 = 0LL;
  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
    goto LABEL_16;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    if ( *(_DWORD *)(v5 + 40) == 2 )
      break;
LABEL_15:
    if ( !v4 )
      goto LABEL_16;
  }
  v6 = 0LL;
  v11 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 40LL);
  v12 = v7;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v6 = v11;
  }
  v3 = 0;
  if ( v6 != v7 )
  {
    v8 = v6;
    v6 = 0LL;
    v11 = 0LL;
    if ( v7 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v7)(v7, &GUID_98f37dac_d0b6_49f5_896a_aa4d169a4c48, &v11);
      v6 = v11;
    }
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v6 = v11;
    }
  }
  if ( !v6 )
  {
LABEL_11:
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_15;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, struct Windows::Media::Devices::IAudioDeviceModulesManager *))(*(_QWORD *)v6 + 24LL))(
         v6,
         a2);
  if ( v3 >= 0 )
  {
    v6 = v11;
    goto LABEL_11;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v11);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v12);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      39LL,
      &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
      (unsigned int)v3);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::SetModulesManagerOnAPOs", 0xC41u, v3);
LABEL_16:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v13);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v10);
  return (unsigned int)v3;
}
