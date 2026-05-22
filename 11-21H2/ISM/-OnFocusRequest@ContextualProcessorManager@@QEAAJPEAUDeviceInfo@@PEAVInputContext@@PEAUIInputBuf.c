/*
 * XREFs of ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18019FE88
 * Callers:
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18019A870 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800183C0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180089C20 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??$As@UIInputTarget@@@?$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18019F9AC (--$As@UIInputTarget@@@-$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x18019FA08 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x18019FCB0 (--0ContextualProcessorInitialState@@QEAA@AEBU0@@Z.c)
 *     ?OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x18019FDB0 (-OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x1801A01E0 (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 *     ?Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1801A22AC (-Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContextualProcessorManager::OnFocusRequest(
        ContextualProcessorManager *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget **v7; // rbx
  unsigned int v8; // esi
  unsigned int v9; // r14d
  _QWORD *v10; // r15
  int v11; // eax
  const unsigned __int16 *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r9
  struct ContextualProcessorBuffer *v19; // rax
  int v20; // eax
  char *v21; // rdi
  void (__fastcall *v22)(char *, _QWORD, ContextualProcessorInitialState *); // rbx
  ContextualProcessorInitialState *v23; // rax
  int v24; // eax
  int v26; // [rsp+20h] [rbp-E0h]
  struct ContextualProcessorBuffer *v27; // [rsp+30h] [rbp-D0h] BYREF
  struct IInputTarget *v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  struct IInputTarget **v31; // [rsp+50h] [rbp-B0h]
  struct DeviceInfo *v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  struct IInputBuffer *v35; // [rsp+70h] [rbp-90h]
  _QWORD *v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v38[48]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v39[48]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v35 = a4;
  v32 = a2;
  v7 = a5;
  v31 = a5;
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v38,
    "ContextualProcessingFocusRequest",
    0LL);
  v8 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v9 = 0;
  v10 = (_QWORD *)*((_QWORD *)this + 2);
  v36 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v10 != v36 )
  {
    while ( 1 )
    {
      v30 = 0LL;
      v29 = 0LL;
      InputTraceLogging::PerfRegion::PerfRegion(
        (InputTraceLogging::PerfRegion *)v39,
        "ContextualProcessorFocusRequest",
        (const struct InputTraceLogging::PerfRegion *)v38);
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v10 + 32LL))(
              *v10,
              v32,
              a3,
              &v29);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
          (const char *)(unsigned int)v11,
          v26);
      v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 48LL))(*v10);
      InputETW::ContextualProcessing::OnFocusRequest(v12);
      v13 = v29;
      v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 48LL))(*v10);
      v16 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                          v15,
                          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
            + 1);
      if ( *(_DWORD *)v16 > 4u
        && (*(_DWORD *)(v16 + 16) & 0x400LL) != 0
        && (*(_QWORD *)(v16 + 24) & 0x400LL) == *(_QWORD *)(v16 + 24) )
      {
        v34 = InputTraceLogging::ProcessorStateToString(v13);
        v33 = v14;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          v17,
          (unsigned __int8 *)dword_18020663E,
          v17,
          v18,
          (unsigned __int16 **)&v33,
          (const unsigned __int16 **)&v34);
      }
      InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v39);
      v19 = v27;
      if ( !v27 )
      {
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v27);
        v20 = ContextualProcessorBuffer::Create(a3, v35, &v27);
        if ( v20 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x118,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
            (const char *)(unsigned int)v20,
            v26);
        v19 = v27;
      }
      v21 = (char *)v19 + 16;
      v22 = *(void (__fastcall **)(char *, _QWORD, ContextualProcessorInitialState *))(*((_QWORD *)v19 + 2) + 40LL);
      v23 = ContextualProcessorInitialState::ContextualProcessorInitialState(
              (ContextualProcessorInitialState *)v37,
              (const struct ContextualProcessorInitialState *)&v29);
      v22(v21, *v10, v23);
      if ( (_DWORD)v29 == 2 )
        break;
      if ( (_DWORD)v29 == 3 )
        v9 = 1;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v30);
      v10 += 2;
      if ( v10 == v36 )
        goto LABEL_17;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v30);
LABEL_17:
    v7 = v31;
  }
  *((_BYTE *)a3 + 184) = 1;
  if ( (*((_BYTE *)v32 + 4) & 4) != 0 && v9 != *((_DWORD *)this + 10) )
  {
    NtMITSetKeyboardInputRoutingPolicy(v9);
    *((_DWORD *)this + 10) = v9;
  }
  if ( v27 )
  {
    v24 = Microsoft::WRL::ComPtr<ContextualProcessorBuffer>::As<IInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v27,
            (__int64 *)&v28);
    if ( v24 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v24,
        v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v28);
    *v7 = v28;
  }
  else
  {
    v8 = -2147467259;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v27);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v28);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v38);
  return v8;
}
