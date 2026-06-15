/*
 * XREFs of ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x1800DAAE0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f033015d1266eb5b3cb7a7ade2ee99f9__void_IAudioStreamInfo___::_Do_call @ 0x180070580 (std--_Func_impl_no_alloc__lambda_f033015d1266eb5b3cb7a7ade2ee99f9__void_IAudioStreamInfo___--_Do.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D7E40 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempl.c)
 *     ?ConnectToNewStreamGroup@CAudioStream@@QEAAJPEAUIStreamGroupProxy@@@Z @ 0x1800EB5BC (-ConnectToNewStreamGroup@CAudioStream@@QEAAJPEAUIStreamGroupProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioResourceManager::FindAppropriateStreamGroupAndSaDeviceForStream(
        CAudioResourceManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        unsigned __int16 *a3,
        struct IAudioStreamInfo *a4)
{
  int EndpointStore; // eax
  unsigned int v8; // ebx
  struct CEndpointStore *v9; // rdi
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, struct IStreamGroupProxy **); // r12
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64 *); // rsi
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  BOOL v31; // r12d
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, _QWORD, _QWORD, int, __int64, char *); // rsi
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  __int64 v38; // rdx
  int v39; // eax
  __int64 *v41; // [rsp+48h] [rbp-79h] BYREF
  char v42; // [rsp+50h] [rbp-71h] BYREF
  struct IStreamGroupProxy *v43; // [rsp+58h] [rbp-69h] BYREF
  LPCRITICAL_SECTION v44; // [rsp+60h] [rbp-61h] BYREF
  __int64 v45; // [rsp+68h] [rbp-59h] BYREF
  int v46[2]; // [rsp+70h] [rbp-51h] BYREF
  __int64 *v47; // [rsp+78h] [rbp-49h] BYREF
  int v48; // [rsp+80h] [rbp-41h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-39h] BYREF
  struct CEndpointStore *v50; // [rsp+90h] [rbp-31h] BYREF
  __int128 v51; // [rsp+98h] [rbp-29h] BYREF
  char v52; // [rsp+A8h] [rbp-19h]
  __int64 (__fastcall **v53)(); // [rsp+B8h] [rbp-9h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-1h]
  __int64 (__fastcall ***v55)(); // [rsp+F0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v50 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(this, a3, &v50);
  v8 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCDF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_61:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v50);
    return v8;
  }
  v9 = v50;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v50 + 13) + 120LL))(*((_QWORD *)v50 + 13), &v44);
  v10 = ((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL);
  v11 = *(_QWORD *)a4;
  v41 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 **))(v11 + 112))(a4, &v41);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 3304LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_59;
  }
  v12 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, int *))(*v41 + 456))(v41, v10 + 592, &v48);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 3305LL;
    goto LABEL_5;
  }
  v15 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    v14,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v15 > 4u )
  {
    LODWORD(v45) = v48;
    lpCriticalSection = (LPCRITICAL_SECTION)a3;
    v47 = v41;
    *(_QWORD *)v46 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 80LL))(a4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v15,
      byte_1801900D1,
      v16,
      v17,
      (__int64)v46,
      (__int64)&v47,
      (const WCHAR **)&lpCriticalSection,
      (__int64)&v45);
  }
  if ( v48 == 1 )
  {
LABEL_24:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
    if ( v44 )
      LeaveCriticalSection(v44);
    v8 = 0;
    goto LABEL_61;
  }
  v43 = 0LL;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v9 + 13) + 72LL))(
    *((_QWORD *)v9 + 13),
    &lpCriticalSection);
  v18 = *((_QWORD *)v9 + 13);
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IStreamGroupProxy **))(*(_QWORD *)v18 + 32LL);
  if ( v43 )
    (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v43 + 16LL))(v43);
  v8 = v19(v18, *(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 0x270), &v43);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147023728 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCFC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v8);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_58;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v43 )
  {
    v20 = CAudioStream::ConnectToNewStreamGroup(
            (CAudioStream *)(((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)),
            v43);
    v8 = v20;
    if ( v20 < 0 )
    {
      v21 = 3330LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v20);
LABEL_58:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
LABEL_59:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
      if ( v44 )
        LeaveCriticalSection(v44);
      goto LABEL_61;
    }
    goto LABEL_23;
  }
  if ( (*(__int64 (__fastcall **)(__int64 *))(*v41 + 448))(v41) == 1 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v41 + 464))(v41, v10 + 592);
    v8 = v20;
    if ( v20 < 0 )
    {
      v21 = 3340LL;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  if ( v48 == 2 )
  {
    v42 = 1;
    v22 = *v41;
    *(_QWORD *)&v51 = &v42;
    *((_QWORD *)&v51 + 1) = v10 + 592;
    v53 = off_18017B178;
    v54 = v51;
    v55 = &v53;
    (*(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)()))(v22 + 384))(v41, &v53);
    if ( v42 )
      (*(void (__fastcall **)(__int64 *, unsigned __int64))(*v41 + 464))(v41, v10 + 592);
LABEL_23:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
    goto LABEL_24;
  }
  v45 = 0LL;
  v23 = (__int64)v41;
  v24 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v41 + 232);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v45);
  v25 = v24(v23, &v45);
  v8 = v25;
  if ( v25 < 0 )
  {
    v26 = (unsigned int)v25;
    v27 = 3374LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v26);
LABEL_57:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v45);
    goto LABEL_58;
  }
  if ( !v45 )
  {
    v8 = -2147418113;
    v26 = 2147549183LL;
    v27 = 3375LL;
    goto LABEL_35;
  }
  v28 = *(_QWORD *)a4;
  *(_QWORD *)v46 = 0LL;
  v29 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, int *))(v28 + 184))(a4, v46);
  v8 = v29;
  if ( v29 < 0 )
  {
    v30 = 3378LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v29);
LABEL_56:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v46);
    goto LABEL_57;
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioStreamInfo *))(**(_QWORD **)v46 + 80LL))(*(_QWORD *)v46, a4);
  v8 = v29;
  if ( v29 < 0 )
  {
    v30 = 3379LL;
    goto LABEL_40;
  }
  v31 = (*(unsigned __int8 (__fastcall **)(__int64 *))(*v41 + 248))(v41) == 0;
  v32 = (__int64)v41;
  v41 = 0LL;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v47 = 0LL;
  v33 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, _QWORD, _QWORD, int, __int64, char *))(*(_QWORD *)g_DeviceGraphManager + 48LL);
  *(_QWORD *)&v51 = &v47;
  *((_QWORD *)&v51 + 1) = 0LL;
  v52 = 1;
  v34 = *(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 0x278);
  v35 = (*(__int64 (**)(void))(*(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 8) + 72LL))();
  v8 = v33(
         g_DeviceGraphManager,
         a2,
         *((_QWORD *)v9 + 13),
         *(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 0x270),
         v35,
         v34,
         (char *)&v51 + 8);
  if ( v52 )
  {
    v36 = *(_QWORD *)v51;
    *(_QWORD *)v51 = *((_QWORD *)&v51 + 1);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    v37 = v8;
    v38 = 3389LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v37);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v47);
    goto LABEL_56;
  }
  v39 = (*(__int64 (__fastcall **)(__int64 *, __int64, BOOL, _QWORD))(*v47 + 216))(v47, v45, v31, 0LL);
  v8 = v39;
  if ( v39 < 0 )
  {
    v38 = 3391LL;
LABEL_54:
    v37 = (unsigned int)v39;
    goto LABEL_55;
  }
  v39 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioStreamInfo *, __int64 *))(**(_QWORD **)v46 + 72LL))(
          *(_QWORD *)v46,
          a4,
          v47);
  v8 = v39;
  if ( v39 < 0 )
  {
    v38 = 3393LL;
    goto LABEL_54;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v47);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v46);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v45);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
  if ( v44 )
    LeaveCriticalSection(v44);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v9);
  return 0LL;
}
