/*
 * XREFs of ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400085F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140008288 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x140008790 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x14002AC3C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 *     ?GetMixerAPOConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14002B5AC (-GetMixerAPOConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMixSplitConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14004A254 (-GetMixSplitConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToMixSplitConnection(CPipeInstance **this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const struct CConnectionInstance *MixerAPOConnection; // rax
  const struct CConnectionInstance *v6; // rbp
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  const struct CConnectionInstance *MixSplitConnection; // rbp
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 31);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 31));
  v14 = v2;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetImpl'::`2'::impl) )
  {
    MixSplitConnection = CPipeInstance::GetMixSplitConnection(this[18]);
    v7 = CPipeInstance::ResolvePendingConnections(a2, -1LL, *((_QWORD *)MixSplitConnection + 1), 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1286LL;
      goto LABEL_10;
    }
    v7 = CPipeInstance::ResolvePendingConnections(a2, -2LL, *((_QWORD *)MixSplitConnection + 1), 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1289LL;
      goto LABEL_10;
    }
    v7 = (*((__int64 (__fastcall **)(CPipeInstance **, struct CPipeInstance *))*this + 5))(this, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1291LL;
      goto LABEL_10;
    }
    goto LABEL_19;
  }
  if ( *((_DWORD *)this + 31) != 1 || *((_DWORD *)a2 + 3) )
    MixerAPOConnection = CPipeInstance::GetMixSplitConnection(this[18]);
  else
    MixerAPOConnection = CPipeInstance::GetMixerAPOConnection(this[18]);
  v6 = MixerAPOConnection;
  v7 = CPipeInstance::ResolvePendingConnections(a2, -1LL, *((_QWORD *)MixerAPOConnection + 1), 0LL);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = CPipeInstance::ResolvePendingConnections(a2, -2LL, *((_QWORD *)v6 + 1), 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1278LL;
      goto LABEL_10;
    }
    v7 = (*((__int64 (__fastcall **)(CPipeInstance **, struct CPipeInstance *))*this + 5))(this, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1280LL;
      goto LABEL_10;
    }
LABEL_19:
    v8 = 0;
    goto LABEL_20;
  }
  v9 = 1275LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)v7,
    v12);
LABEL_20:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  return v8;
}
