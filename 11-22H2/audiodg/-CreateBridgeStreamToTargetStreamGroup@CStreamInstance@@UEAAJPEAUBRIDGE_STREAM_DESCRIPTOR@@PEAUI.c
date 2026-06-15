/*
 * XREFs of ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140077400
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x14001818C (-GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005C204 (-CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005C624 (-CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@.c)
 *     ?ValidateBridgeStreamDescriptor@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@@Z @ 0x140076658 (-ValidateBridgeStreamDescriptor@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::CreateBridgeStreamToTargetStreamGroup(
        struct _RTL_CRITICAL_SECTION *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroup *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, struct IAudioProcessingObject **); // rdi
  int v17; // eax
  struct tWAVEFORMATEX *v18; // rbx
  struct tWAVEFORMATEX *v19; // rax
  int DeviceGraphObjectCache; // edi
  __int64 v21; // rdx
  CPipeInstance *v22; // rdi
  int BridgeToApo; // r15d
  __int64 v24; // rdx
  struct SYSTEM_AUDIO_STREAM *v25; // r9
  ULONG_PTR SpinCount; // rax
  __int64 v27; // rdx
  int v28; // eax
  struct SYSTEM_AUDIO_STREAM *v30; // [rsp+30h] [rbp-50h]
  struct IDeviceGraphObjectCache *v31[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v32; // [rsp+60h] [rbp-20h] BYREF
  CPipeInstance *v33[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IAudioProcessingObject *v35; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+48h] BYREF

  v33[0] = 0LL;
  v8 = this + 5;
  EnterCriticalSection(this + 5);
  *((_DWORD *)a4 + 236) = 0;
  v9 = ValidateBridgeStreamDescriptor(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x222,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  v35 = 0LL;
  v36 = 0LL;
  (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
    a3,
    &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
    &v36);
  v15 = v36;
  if ( v36 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v36 + 24LL);
    if ( v35 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v35->lpVtbl->Release)(v35);
    v17 = v16(v15, &v35);
    v10 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22A,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v17);
LABEL_8:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
LABEL_9:
      if ( v8 )
        LeaveCriticalSection(v8);
      goto LABEL_41;
    }
  }
  if ( v35 )
  {
    v18 = 0LL;
    *(_QWORD *)&v32 = 0LL;
    if ( *((_DWORD *)a2 + 15) )
    {
      v19 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(*((unsigned int *)a2 + 15));
      v18 = v19;
      *(_QWORD *)&v32 = v19;
      if ( !v19 )
      {
        v10 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x233,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          (const char *)0x8007000ELL);
        wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v32);
        goto LABEL_8;
      }
      memcpy_0(v19, *((const void **)a2 + 8), *((unsigned int *)a2 + 15));
    }
    v31[0] = 0LL;
    DeviceGraphObjectCache = GetDeviceGraphObjectCache(
                               *((const unsigned __int16 **)a2 + 6),
                               *((_QWORD *)a2 + 5),
                               *((_DWORD *)a2 + 2) == 1,
                               v18,
                               v31);
    if ( DeviceGraphObjectCache < 0 )
    {
      v21 = 568LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)DeviceGraphObjectCache);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v31);
      wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v32);
LABEL_19:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
      if ( v8 )
        LeaveCriticalSection(v8);
      v10 = DeviceGraphObjectCache;
      goto LABEL_41;
    }
    DeviceGraphObjectCache = CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo(
                               1,
                               (struct IUnknown *)v31[0],
                               a2,
                               v35,
                               0LL,
                               v18,
                               v30,
                               v33);
    if ( DeviceGraphObjectCache < 0 )
    {
      v21 = 578LL;
      goto LABEL_18;
    }
    v22 = v33[0];
    BridgeToApo = CPipeInstance::Initialize(v33[0]);
    if ( BridgeToApo < 0 )
    {
      v24 = 580LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)BridgeToApo);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v31);
      wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v32);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
      if ( v8 )
        LeaveCriticalSection(v8);
      v10 = BridgeToApo;
      goto LABEL_41;
    }
    BridgeToApo = CPipeInstance::ConnectAPOs(v22, 0LL);
    if ( BridgeToApo < 0 )
    {
      v24 = 581LL;
      goto LABEL_26;
    }
    BridgeToApo = CPipeInstance::CreateBridgeToApo(v22, a2, v35, v25);
    if ( BridgeToApo < 0 )
    {
      v24 = 582LL;
      goto LABEL_26;
    }
    SpinCount = this[-1].SpinCount;
    v27 = *((_QWORD *)a2 + 5);
    v32 = *(_OWORD *)((char *)a2 + 24);
    v28 = (*(__int64 (__fastcall **)(ULONG_PTR *, _QWORD, _QWORD, CPipeInstance *, CPipeInstance *, _QWORD, __int64, __int128 *))(SpinCount + 144))(
            &this[-1].SpinCount,
            0LL,
            *(unsigned int *)a2,
            v22,
            v22,
            0LL,
            v27,
            &v32);
    DeviceGraphObjectCache = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24F,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v28);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v31);
      if ( v18 )
        CoTaskMemFree(v18);
      goto LABEL_19;
    }
    v33[0] = 0LL;
    BYTE1(this[6].DebugInfo) = 1;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v31);
    if ( v18 )
      CoTaskMemFree(v18);
  }
  PublishDeviceGraphWnfState(v12, v11, v13, v14);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
  if ( v8 )
    LeaveCriticalSection(v8);
  v10 = 0;
LABEL_41:
  ATL::CAutoPtr<CPipeInstance>::Free(v33);
  return v10;
}
