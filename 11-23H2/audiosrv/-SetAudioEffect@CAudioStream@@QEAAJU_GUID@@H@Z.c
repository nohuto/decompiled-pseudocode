/*
 * XREFs of ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800ED534
 * Callers:
 *     ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x18011F478 (-SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180016538 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800EB344 (--1-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ.c)
 *     ?UpdatePMPEffectToggle@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800EE3C0 (-UpdatePMPEffectToggle@CAudioStream@@AEAAXU_GUID@@H@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioStream::SetAudioEffect(CAudioStream *this, struct _GUID *a2, unsigned int a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 **v17; // rdi
  __int64 **v18; // r14
  __int128 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(struct IAudioResourceManager *, int *, __int64, char *); // rbx
  __int64 v24; // rax
  __int64 v26; // [rsp+40h] [rbp-39h] BYREF
  __int128 v27; // [rsp+48h] [rbp-31h] BYREF
  __int64 v28; // [rsp+58h] [rbp-21h]
  struct _GUID v29; // [rsp+60h] [rbp-19h] BYREF
  int v30[4]; // [rsp+70h] [rbp-9h] BYREF
  std::_Ref_count_base *v31; // [rsp+80h] [rbp+7h]
  unsigned __int64 v32; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v33[8]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *(_OWORD *)v30 = 0LL;
  v31 = 0LL;
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                        + 40LL))(
         g_pEndpointCharacteristicsCache,
         v6,
         0LL,
         0LL,
         v30);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v7);
LABEL_29:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v30);
    return v8;
  }
  v9 = *((_QWORD *)this + 1);
  v26 = 0LL;
  v10 = (*(__int64 (__fastcall **)(char *, __int64 *))(v9 + 112))((char *)this + 8, &v26);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v10);
LABEL_28:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
    goto LABEL_29;
  }
  v27 = 0LL;
  v28 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v26 + 472LL))(v26, &v27);
  v8 = v11;
  if ( v11 < 0 )
  {
    v13 = 2017LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v11);
LABEL_27:
    std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>((__int64)&v27);
    goto LABEL_28;
  }
  v14 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    v12,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v14 > 4u )
  {
    v32 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)&v27 + 1) - v27) >> 3);
    v33[0] = (__int64)(*((_QWORD *)this + 30) - *((_QWORD *)this + 29)) >> 3;
    *(_QWORD *)&v29.Data1 = *((_QWORD *)this + 52);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v14,
      byte_1801917B8,
      v15,
      v16,
      (__int64)&v29,
      (__int64)v33,
      (__int64)&v32);
  }
  v17 = (__int64 **)*((_QWORD *)this + 29);
  v18 = (__int64 **)*((_QWORD *)this + 30);
  if ( v17 == v18 )
  {
    v19 = v27;
    if ( (_QWORD)v27 == *((_QWORD *)&v27 + 1) )
    {
      std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>((__int64)&v27);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
      v8 = -2004287423;
      goto LABEL_29;
    }
    v8 = -2004287423;
  }
  else
  {
    v8 = -2004287423;
    do
    {
      v20 = *v17;
      v21 = **v17;
      v29 = *a2;
      v8 &= -((*(unsigned int (__fastcall **)(__int64 *, struct _GUID *, _QWORD))(v21 + 64))(v20, &v29, a3) != 0);
      ++v17;
    }
    while ( v17 != v18 );
    v19 = v27;
  }
  while ( (_QWORD)v19 != *((_QWORD *)&v19 + 1) )
  {
    v22 = *(_QWORD *)v19 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)v19 == *(_QWORD *)&a2->Data1 )
      v22 = *(_QWORD *)(v19 + 8) - *(_QWORD *)a2->Data4;
    if ( !v22 )
      break;
    *(_QWORD *)&v19 = v19 + 24;
  }
  if ( (_QWORD)v19 == *((_QWORD *)&v19 + 1) )
    goto LABEL_27;
  if ( !*(_DWORD *)(v19 + 16) )
  {
    std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>((__int64)&v27);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
    v8 = -2004287422;
    goto LABEL_29;
  }
  v29 = *a2;
  CAudioStream::UpdatePMPEffectToggle(this, &v29, a3);
  v23 = *(__int64 (__fastcall **)(struct IAudioResourceManager *, int *, __int64, char *))(*(_QWORD *)g_AudioResourceManager
                                                                                         + 88LL);
  v24 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
  v11 = v23(g_AudioResourceManager, v30, v24, (char *)this + 8);
  v8 = v11;
  if ( v11 < 0 )
  {
    v13 = 2060LL;
    goto LABEL_26;
  }
  if ( (_QWORD)v27 )
  {
    std::_Deallocate<16,0>((void *)v27, 8 * ((v28 - (__int64)v27) >> 3));
    v27 = 0LL;
    v28 = 0LL;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v30);
  return 0LL;
}
