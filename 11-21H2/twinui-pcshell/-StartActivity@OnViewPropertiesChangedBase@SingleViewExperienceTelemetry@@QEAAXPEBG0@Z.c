/*
 * XREFs of ?StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800A168C
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800A120C (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180072828 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::StartActivity(
        SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  const GUID *v9; // r8
  __int64 v10; // rcx
  const GUID *v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  REGHANDLE v15; // rcx
  _DWORD v16[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v17; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  void *v20; // [rsp+68h] [rbp-19h]
  int v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+74h] [rbp-Dh]
  __int64 *v23; // [rsp+78h] [rbp-9h]
  __int64 v24; // [rsp+80h] [rbp-1h]
  _DWORD *v25; // [rsp+88h] [rbp+7h]
  __int64 v26; // [rsp+90h] [rbp+Fh]
  const unsigned __int16 *v27; // [rsp+98h] [rbp+17h]
  int v28; // [rsp+A0h] [rbp+1Fh]
  int v29; // [rsp+A4h] [rbp+23h]
  const unsigned __int16 *v30; // [rsp+A8h] [rbp+27h]
  int v31; // [rsp+B0h] [rbp+2Fh]
  int v32; // [rsp+B4h] [rbp+33h]

  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v7 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
         v6,
         _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 5u )
  {
    v17 = 0LL;
    v16[0] = GetCurrentThreadId();
    v8 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v9 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    v10 = -1LL;
    v11 = (const GUID *)v8;
    if ( a3 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      a3 = &LocaleName;
      v13 = 2;
    }
    v30 = a3;
    v31 = v13;
    v32 = 0;
    if ( a2 )
    {
      do
        ++v10;
      while ( a2[v10] );
      v14 = 2 * v10 + 2;
    }
    else
    {
      a2 = &LocaleName;
      v14 = 2;
    }
    v28 = v14;
    v27 = a2;
    v25 = v16;
    v29 = 0;
    v23 = &v17;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v26 = 4LL;
    v24 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v20 = &unk_1806CEB8F;
    UserData.Reserved = 2;
    v15 = *(_QWORD *)(v7 + 32);
    v21 = 90;
    v22 = 1;
    v16[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v15, &EventDescriptor, v9, v11, 6u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *)((char *)this + 8));
}
