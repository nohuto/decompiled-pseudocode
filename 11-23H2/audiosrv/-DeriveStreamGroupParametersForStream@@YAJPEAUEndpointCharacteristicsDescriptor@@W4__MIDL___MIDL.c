/*
 * XREFs of ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180010920
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180043A3C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA80 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 * Callees:
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000BEC4 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x180016C24 (--1StreamGroupParams@@QEAA@XZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800D7F0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x1800D8694 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x1800DD8FC (-_Clear_and_reserve_geometric@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     WPP_SF_Idd @ 0x1800DDCD4 (WPP_SF_Idd.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveStreamGroupParametersForStream(
        __int64 *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        struct tWAVEFORMATEX *Src,
        const void **a10,
        StreamGroupParams **a11)
{
  const void **v13; // r12
  StreamGroupParams **v14; // r13
  _DWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // ebx
  void *v20; // rcx
  char *v21; // rax
  char *v22; // rsi
  StreamGroupParams *v23; // rbx
  LPVOID v24; // rdi
  LPVOID v25; // rdi
  __int64 v26; // r8
  void *v27; // rcx
  const char *v28; // r9
  StreamGroupParams *v29; // rdi
  void *v30; // rcx
  __int64 v32; // rdx
  const void **v33; // rdi
  char *v34; // rdx
  const void ***v35; // r15
  void **v36; // r14
  const void *v37; // r13
  signed __int64 v38; // r12
  char *v39; // rdi
  _DWORD *v40; // rdi
  int v41; // r8d
  int v42; // r9d
  int v43; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v45; // [rsp+41h] [rbp-BFh] BYREF
  LPVOID v46; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v47; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  const void **v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  __int64 v53; // [rsp+88h] [rbp-78h]
  LPVOID *v54; // [rsp+90h] [rbp-70h]
  struct tWAVEFORMATEX *v55; // [rsp+98h] [rbp-68h] BYREF
  char v56; // [rsp+A0h] [rbp-60h]
  char v57[32]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD *v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+D8h] [rbp-28h]
  int v60; // [rsp+DCh] [rbp-24h]
  char *v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E8h] [rbp-18h]
  int v63; // [rsp+ECh] [rbp-14h]
  char *v64; // [rsp+F0h] [rbp-10h]
  int v65; // [rsp+F8h] [rbp-8h]
  int v66; // [rsp+FCh] [rbp-4h]
  void **v67; // [rsp+100h] [rbp+0h]
  int v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+10Ch] [rbp+Ch]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v53 = a4;
  LODWORD(pv[0]) = a3;
  v50 = (__int64)a1;
  v13 = a10;
  v51 = a10;
  v14 = a11;
  v52 = (__int64)a11;
  v15 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       a1,
                       _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v15 > 4u )
  {
    if ( a10 )
      v16 = (*((__int64 (__fastcall **)(const void **))*a10 + 10))(a10);
    else
      v16 = 0LL;
    v48 = v16;
    v44 = a8;
    v45 = a7;
    v67 = (void **)&v48;
    v68 = 8;
    v69 = 0;
    v64 = (char *)&v44;
    v65 = 1;
    v66 = 0;
    v61 = (char *)&v45;
    v62 = 1;
    v63 = 0;
    v58 = a6;
    v59 = 16;
    v60 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v15, (unsigned int)&unk_1801911AC, 0, 0, 6, (__int64)v57);
  }
  v47 = 0LL;
  v17 = *a1;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &v47,
    0LL);
  v18 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(v17 + 40) + 40LL))(*(_QWORD *)(v17 + 40), &v47);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v18,
      v43);
LABEL_49:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v47);
    return (unsigned int)v19;
  }
  v46 = 0LL;
  v54 = &v46;
  v55 = 0LL;
  v56 = 1;
  v19 = CloneWaveFormat(Src, &v55);
  if ( v56 )
  {
    v20 = *v54;
    *v54 = v55;
    if ( v20 )
      CoTaskMemFree(v20);
  }
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x370,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v19,
      v43);
LABEL_48:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v46);
    goto LABEL_49;
  }
  v21 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  v48 = (__int64)v21;
  if ( v21 )
  {
    memset_0(v21, 0, 0x58uLL);
    *(_QWORD *)v22 = 0LL;
    *((_QWORD *)v22 + 2) = 0LL;
    *((_QWORD *)v22 + 7) = 0LL;
    *((_QWORD *)v22 + 8) = 0LL;
    *((_QWORD *)v22 + 9) = 0LL;
    *((_QWORD *)v22 + 10) = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  v23 = (StreamGroupParams *)v22;
  v48 = (__int64)v22;
  if ( !v22 )
  {
    v32 = 883LL;
LABEL_47:
    v19 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x8007000ELL,
      v43);
    std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v48);
    goto LABEL_48;
  }
  v24 = v47;
  v47 = 0LL;
  CoTaskMemFree(*(LPVOID *)v22);
  *(_QWORD *)v22 = v24;
  v22[49] = a2 == eKeywordDetectorConnector;
  v25 = v46;
  v46 = 0LL;
  CoTaskMemFree(*((LPVOID *)v22 + 2));
  *((_QWORD *)v22 + 2) = v25;
  *((_QWORD *)v22 + 3) = v53;
  *((_OWORD *)v22 + 2) = *a6;
  v22[48] = a7;
  v22[50] = a8;
  *((_DWORD *)v22 + 2) = pv[0];
  if ( a10 )
  {
    *(_OWORD *)pv = *a6;
    if ( EffectPack::CanProcessingModeBeParameterized(*(EffectPack **)(v50 + 8), (struct _GUID *)pv, a2) )
    {
      v33 = a10 + 73;
      v34 = (char *)a10[76];
      if ( !v34 )
      {
        v35 = (const void ***)(v22 + 80);
LABEL_34:
        v36 = (void **)(v22 + 56);
        if ( v22 + 56 != (char *)v33 )
        {
          v37 = *v33;
          v38 = (_BYTE *)a10[74] - (_BYTE *)a10[73];
          if ( v38 >> 4 > (unsigned __int64)((__int64)(*((_QWORD *)v22 + 9) - *((_QWORD *)v22 + 7)) >> 4) )
            std::vector<_GUID>::_Clear_and_reserve_geometric(v22 + 56);
          v39 = (char *)*v36;
          memmove_0(*v36, v37, v38);
          *((_QWORD *)v22 + 8) = &v39[v38];
          v13 = v51;
          v14 = (StreamGroupParams **)v52;
        }
        v40 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             v27,
                             _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                         + 8);
        if ( *v40 > 4u )
        {
          v52 = (__int64)(*((_QWORD *)v22 + 8) - *((_QWORD *)v22 + 7)) >> 4;
          v51 = *v35;
          v50 = (*((__int64 (__fastcall **)(const void **))*v13 + 10))(v13);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
            (_DWORD)v40,
            (unsigned int)&unk_18019114E,
            v41,
            v42,
            (__int64)&v50,
            (__int64)&v51,
            (__int64)&v52);
        }
        goto LABEL_15;
      }
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        pv,
        v34,
        0xFFFFFFFFFFFFFFFFuLL,
        v28);
      v35 = (const void ***)(v22 + 80);
      if ( v22 + 80 == (char *)pv )
      {
        v27 = pv[0];
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          v22 + 80,
          pv[0]);
        v27 = 0LL;
      }
      if ( v27 )
        CoTaskMemFree(v27);
      if ( *v35 )
        goto LABEL_34;
      v32 = 901LL;
      goto LABEL_47;
    }
  }
LABEL_15:
  if ( v14 != (StreamGroupParams **)&v48 )
  {
    v23 = 0LL;
    v29 = *v14;
    *v14 = (StreamGroupParams *)v22;
    if ( v29 )
    {
      StreamGroupParams::~StreamGroupParams(v29);
      operator delete(v29, 0x58uLL);
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2), a7, v26, v53, a7, a8);
  }
  if ( v23 )
  {
    StreamGroupParams::~StreamGroupParams(v23);
    operator delete(v23, 0x58uLL);
  }
  v30 = v46;
  v46 = 0LL;
  if ( v30 )
    CoTaskMemFree(v30);
  if ( v47 )
    CoTaskMemFree(v47);
  return 0LL;
}
