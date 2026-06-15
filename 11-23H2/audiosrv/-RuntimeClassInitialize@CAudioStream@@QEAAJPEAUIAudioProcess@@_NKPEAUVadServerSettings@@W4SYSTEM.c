/*
 * XREFs of ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@@Z @ 0x18000C398
 * Callers:
 *     ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@Z @ 0x1800102E4 (--$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4S.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000C61C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18000C918 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x18000C968 (-InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180082234 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800CCBCC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CAudioStream::RuntimeClassInitialize(
        __int64 a1,
        __int64 *a2,
        char a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  wil::details *v11; // rcx
  HANDLE Event; // rdi
  wil::details *v13; // rcx
  HANDLE v14; // rdi
  int LastErrorFailHr; // edi
  int v16; // esi
  bool v17; // al
  __int64 v18; // rdi
  bool v19; // zf
  std::_Ref_count_base *v20; // rcx
  std::_Ref_count_base *v21; // rdx
  signed __int64 v22; // rax
  signed __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp+20h] [rbp-48h]
  int v32; // [rsp+40h] [rbp-28h] BYREF
  int v33; // [rsp+44h] [rbp-24h] BYREF
  __int64 v34; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v36; // [rsp+70h] [rbp+8h] BYREF

  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      a1 + 408,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v11);
    if ( LastErrorFailHr < 0 )
    {
      v27 = 141LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)LastErrorFailHr,
        v31);
      return (unsigned int)LastErrorFailHr;
    }
  }
  v14 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( v14 )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      a1 + 400,
      v14);
    goto LABEL_5;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v13);
  if ( LastErrorFailHr < 0 )
  {
    v27 = 142LL;
    goto LABEL_26;
  }
LABEL_5:
  LastErrorFailHr = CAudioStream::InitializeVolumeCoefficientCount((CAudioStream *)a1, *(unsigned __int16 *)(a7 + 2));
  if ( LastErrorFailHr < 0 )
  {
    v27 = 143LL;
    goto LABEL_26;
  }
  *(_BYTE *)(a1 + 40) = a3;
  v16 = a6;
  v17 = (a4 & 4) != 0 || a6 == 2;
  v18 = a5;
  *(_BYTE *)(a1 + 42) = v17;
  *(_BYTE *)(a1 + 41) = a4 & 1;
  *(_BYTE *)(a1 + 136) = *(_DWORD *)(v18 + 136) != 0;
  *(_DWORD *)(a1 + 424) = *(_DWORD *)(v18 + 48);
  *(_DWORD *)(a1 + 432) = *(_DWORD *)(v18 + 60);
  v19 = *(_DWORD *)(v18 + 68) == 0;
  *(_DWORD *)(a1 + 428) = v16;
  *(_BYTE *)(a1 + 436) = !v19;
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(a1 + 72, a2);
  *(_DWORD *)(a1 + 456) = a4;
  *(_OWORD *)(a1 + 440) = *(_OWORD *)v18;
  *(_BYTE *)(a1 + 43) = *(_DWORD *)(v18 + 56) != 0;
  *(_BYTE *)(a1 + 584) = *(_DWORD *)(v18 + 140) != 0;
  if ( !v16 )
  {
    v21 = qword_1801CFF08;
    if ( qword_1801CFF08 )
    {
      _InterlockedAdd((volatile signed __int32 *)qword_1801CFF08 + 2, 1u);
      v21 = qword_1801CFF08;
    }
    v20 = *(std::_Ref_count_base **)(a1 + 560);
    *(_QWORD *)(a1 + 552) = g_RenderStreamTaperTranslator;
    *(_QWORD *)(a1 + 560) = v21;
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
  }
  *(_OWORD *)(a1 + 464) = *(_OWORD *)(v18 + 72);
  *(_OWORD *)(a1 + 480) = *(_OWORD *)(v18 + 88);
  *(_OWORD *)(a1 + 496) = *(_OWORD *)(v18 + 104);
  *(_QWORD *)(a1 + 512) = *(_QWORD *)(v18 + 120);
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_DWORD *)(a1 + 504) = 0;
  do
  {
    v22 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
    *(_QWORD *)(a1 + 416) = v22 + 1;
  }
  while ( v22 == -1 );
  do
    v23 = _InterlockedIncrement64(&CAudioStream::s_llStreamIdentifier);
  while ( !v23 );
  *(_QWORD *)(a1 + 416) = v23;
  v24 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v20,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v25 = *(_DWORD **)(v24 + 8);
  if ( *v25 > 4u )
  {
    if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v24 + 8), 512LL) )
    {
      v36 = *(_DWORD *)(a1 + 424);
      v34 = *(_QWORD *)(a1 + 416);
      v28 = *a2;
      v32 = v16;
      v33 = (*(__int64 (__fastcall **)(__int64 *))(v28 + 40))(a2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (_DWORD)v25,
        (unsigned int)&unk_180191AC1,
        v29,
        v30,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v34,
        (__int64)&v36);
    }
  }
  return 0LL;
}
