/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180015040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180015400 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180021FA0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct ISubmixProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 v6; // rax
  int (__fastcall *v7)(struct IAudioStreamInfo *, __int64 *); // rbx
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  int v10; // r8d
  int v11; // r9d
  __int64 (__fastcall *v12)(struct ISubmixProxy *, __int64 *); // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbx
  void (__fastcall *v16)(__int64, __int64 *); // rdi
  void (__fastcall *v17)(struct ISubmixProxy *, GUID *, __int64 *); // rbx
  __int64 v18; // rcx
  char v19; // bl
  char v20; // di
  char v21; // r15
  unsigned int v22; // esi
  __int64 v23; // rcx
  char v24; // al
  const unsigned __int16 *v26; // rax
  CEndpointStoreCache *v27; // rcx
  int EndpointStore; // eax
  struct CEndpointStore *v29; // rbx
  volatile int *v30; // rdx
  int v31; // r8d
  int v32; // r14d
  __int64 v33; // r10
  char *v34; // r11
  int v35; // eax
  int v36; // [rsp+20h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-A8h] BYREF
  struct CEndpointStore *v38; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-98h] BYREF
  __int64 v40; // [rsp+58h] [rbp-90h] BYREF
  int v41[2]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v42[14]; // [rsp+78h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  unsigned int v44; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v45; // [rsp+100h] [rbp+18h] BYREF
  __int64 v46; // [rsp+108h] [rbp+20h] BYREF

  v39 = 0LL;
  v6 = *(_QWORD *)a3;
  v37 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v6 + 32))(a3, &v37) >= 0 )
  {
    if ( v37 )
    {
      v7 = *(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a3 + 24LL);
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v39);
      if ( v7(a3, &v39) >= 0 )
      {
        if ( v37 )
        {
          v9 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v8,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                          + 8);
          if ( *v9 > 4u )
          {
            v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 40LL))(v39);
            v38 = (struct CEndpointStore *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 64LL))(v37);
            *(_QWORD *)v41 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 80LL))(a3);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              (_DWORD)v9,
              (unsigned int)&unk_1801909A2,
              v10,
              v11,
              (__int64)v41,
              (__int64)&v38,
              (__int64)&v44);
          }
        }
      }
    }
  }
  v45 = 0LL;
  v46 = 0LL;
  v12 = *(__int64 (__fastcall **)(struct ISubmixProxy *, __int64 *))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v46);
  v13 = v12(a2, &v46);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F4,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v13,
      v36);
    goto LABEL_25;
  }
  v15 = v46;
  v16 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 232LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v45);
  v16(v15, &v45);
  v40 = 0LL;
  v17 = **(void (__fastcall ***)(struct ISubmixProxy *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v40);
  v17(a2, &GUID_3a5c2657_1b5f_474a_96ef_4cfdc4deeb2a, &v40);
  v18 = v45;
  if ( !v45 )
    goto LABEL_12;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 152LL))(v45)
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 120LL))(v45) )
  {
    v18 = v45;
LABEL_12:
    v19 = 1;
    v20 = 0;
    goto LABEL_13;
  }
  v19 = 1;
  v20 = 1;
  v18 = v45;
LABEL_13:
  if ( v18 )
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 128LL))(v18);
  else
    v21 = 0;
  v22 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2, a3);
  v44 = v22;
  v23 = v45;
  if ( v45 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 152LL))(v45)
      || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 120LL))(v45) )
    {
      v23 = v45;
      goto LABEL_20;
    }
    v23 = v45;
  }
  v19 = 0;
LABEL_20:
  if ( v23 )
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 128LL))(v23);
  else
    v24 = 0;
  if ( v20 && !v19 || v21 && v24 )
  {
    v38 = 0LL;
    v26 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 168LL))(v46);
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v27, v26, &v38);
    v29 = v38;
    if ( EndpointStore >= 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v38 + 48));
      *(_QWORD *)v41 = (char *)v29 + 48;
      v32 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
      v33 = (__int64)v29 + 88;
      v34 = (char *)this - 8;
      if ( v29 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((struct CEndpointStore *)((char *)v29 + 12), v30);
      v42[0] = off_180170070;
      v42[1] = v34;
      v42[2] = v29;
      v42[7] = v42;
      v35 = CSerialWorkQueue::QueueRecurringItem(v32, 10000, v31, (unsigned int)v42, v33);
      if ( v35 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x713,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v35);
      if ( v29 != (struct CEndpointStore *)-48LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v29 + 48));
    }
    if ( v29 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v29);
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v40);
  v14 = v22;
LABEL_25:
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v46);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v45);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v39);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v37);
  return v14;
}
