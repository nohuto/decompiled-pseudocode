/*
 * XREFs of ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800C4A50
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x1800C4260 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800C4C94 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0325_0005@@@Z @ 0x1801B4348 (-DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ShellPositionerTelemetry::PositionViewForActivation_(__int64 a1, __int64 a2, int a3)
{
  wil::TraceLoggingProvider *v5; // rax
  char result; // al
  void (__fastcall *v7)(__int64, LPCWSTR *); // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  bool v11; // zf
  char v12; // al
  const unsigned __int16 *v13; // rdx
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rax
  int v16; // ecx
  char v17; // [rsp+30h] [rbp-79h] BYREF
  char HaveQuirk; // [rsp+31h] [rbp-78h] BYREF
  int v19; // [rsp+34h] [rbp-75h] BYREF
  LPCWSTR pszPath; // [rsp+38h] [rbp-71h] BYREF
  __int64 v21; // [rsp+40h] [rbp-69h]
  __int64 v22; // [rsp+48h] [rbp-61h]
  unsigned int v23; // [rsp+50h] [rbp-59h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v26; // [rsp+80h] [rbp-29h]
  int v27; // [rsp+88h] [rbp-21h]
  int v28; // [rsp+8Ch] [rbp-1Dh]
  const WCHAR *v29; // [rsp+90h] [rbp-19h]
  int v30; // [rsp+98h] [rbp-11h]
  int v31; // [rsp+9Ch] [rbp-Dh]
  int *v32; // [rsp+A0h] [rbp-9h]
  __int64 v33; // [rsp+A8h] [rbp-1h]
  char *p_HaveQuirk; // [rsp+B0h] [rbp+7h]
  __int64 v35; // [rsp+B8h] [rbp+Fh]
  char *v36; // [rsp+C0h] [rbp+17h]
  __int64 v37; // [rsp+C8h] [rbp+1Fh]

  v5 = (wil::TraceLoggingProvider *)wil::details::static_lazy<WindowManagementLogging>::get(
                                      a1,
                                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  result = wil::TraceLoggingProvider::IsEnabled_(v5, 0);
  if ( result )
  {
    pszPath = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v7 = *(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
    v8 = -1LL;
    v21 = -1LL;
    v22 = -1LL;
    v7(a2, &pszPath);
    v10 = wil::details::static_lazy<WindowManagementLogging>::get(
            v9,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v10 > 5u
      && (*(_QWORD *)(v10 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v10 + 24) & 0x400000000000LL) == *(_QWORD *)(v10 + 24) )
    {
      if ( (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 0LL)
        || (v11 = (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 5LL) == 0, v12 = 0, !v11) )
      {
        v12 = 1;
      }
      v17 = v12;
      HaveQuirk = ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 4LL);
      v19 = a3;
      v14 = &LocaleName;
      if ( pszPath )
        v14 = pszPath;
      v15 = SQM::CensorAppID(v14, v13);
      v36 = &v17;
      v37 = 1LL;
      p_HaveQuirk = &HaveQuirk;
      v35 = 1LL;
      v32 = &v19;
      v33 = 4LL;
      if ( v15 )
      {
        do
          ++v8;
        while ( v15[v8] );
        v16 = 2 * v8 + 2;
      }
      else
      {
        v15 = &LocaleName;
        v16 = 2;
      }
      v29 = v15;
      v30 = v16;
      v31 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Ptr = *(_QWORD *)(v10 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v26 = &unk_1806BF1E2;
      v27 = 84;
      v28 = 1;
      v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
  }
  return result;
}
