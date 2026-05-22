/*
 * XREFs of ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1801CB800
 * Callers:
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1801C6990 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180020420 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x180037BD8 (-Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$As@UIInputTarget@@@?$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180055614 (--$As@UIInputTarget@@@-$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800B33F0 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800D1400 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1801CB45C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x1801CB704 (--0ContextualProcessorInitialState@@QEAA@AEBU0@@Z.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x1801CBBBC (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContextualProcessorManager::OnFocusRequest(
        ContextualProcessorManager *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget **v8; // rbx
  unsigned int v9; // esi
  _QWORD *v10; // r14
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  struct ContextualProcessorBuffer *v23; // rax
  int v24; // eax
  char *v25; // rdi
  void (__fastcall *v26)(char *, _QWORD, ContextualProcessorInitialState *); // rbx
  ContextualProcessorInitialState *v27; // rax
  int v28; // eax
  int v30; // [rsp+20h] [rbp-C1h]
  struct ContextualProcessorBuffer *v31; // [rsp+30h] [rbp-B1h] BYREF
  struct IInputTarget *v32; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v33; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v34; // [rsp+48h] [rbp-99h] BYREF
  __int64 v35; // [rsp+50h] [rbp-91h] BYREF
  struct IInputTarget **v36; // [rsp+58h] [rbp-89h]
  __int64 v37; // [rsp+60h] [rbp-81h] BYREF
  struct IInputBuffer *v38; // [rsp+68h] [rbp-79h]
  _QWORD *v39; // [rsp+70h] [rbp-71h]
  _BYTE v40[16]; // [rsp+78h] [rbp-69h] BYREF
  _BYTE v41[48]; // [rsp+88h] [rbp-59h] BYREF
  _BYTE v42[48]; // [rsp+B8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]

  v38 = a4;
  v8 = a5;
  v36 = a5;
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v41,
    "ContextualProcessingFocusRequest",
    0LL);
  v32 = 0LL;
  v31 = 0LL;
  v9 = 0;
  v10 = (_QWORD *)*((_QWORD *)this + 2);
  v39 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v10 != v39 )
  {
    while ( 1 )
    {
      v34 = 0LL;
      v33 = 0LL;
      InputTraceLogging::PerfRegion::PerfRegion(
        (InputTraceLogging::PerfRegion *)v42,
        "ContextualProcessorFocusRequest",
        (const struct InputTraceLogging::PerfRegion *)v41);
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v10 + 32LL))(
              *v10,
              a2,
              a3,
              &v33);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
          (const char *)(unsigned int)v11,
          v30);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 48LL))(*v10);
      v14 = wil::details::static_lazy<InputETW>::get(
              v13,
              _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v14 > 4u
        && (*(_BYTE *)(v14 + 16) & 1) != 0
        && (*(_QWORD *)(v14 + 24) & 1LL) == *(_QWORD *)(v14 + 24) )
      {
        v35 = v12;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v14,
          (unsigned __int8 *)dword_180237AB9,
          v15,
          v16,
          (const WCHAR **)&v35);
      }
      v17 = v33;
      v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 48LL))(*v10);
      v20 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                          v19,
                          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
            + 1);
      if ( *(_DWORD *)v20 > 4u
        && (*(_DWORD *)(v20 + 16) & 0x400LL) != 0
        && (*(_QWORD *)(v20 + 24) & 0x400LL) == *(_QWORD *)(v20 + 24) )
      {
        v35 = InputTraceLogging::ProcessorStateToString(v17);
        v37 = v18;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          v21,
          (unsigned __int8 *)dword_180237A0D,
          v21,
          v22,
          (const WCHAR **)&v37,
          (const unsigned __int16 **)&v35);
      }
      InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v42);
      v23 = v31;
      if ( !v31 )
      {
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v31);
        v24 = ContextualProcessorBuffer::Create(a3, v38, &v31);
        if ( v24 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x118,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
            (const char *)(unsigned int)v24,
            v30);
        v23 = v31;
      }
      v25 = (char *)v23 + 16;
      v26 = *(void (__fastcall **)(char *, _QWORD, ContextualProcessorInitialState *))(*((_QWORD *)v23 + 2) + 40LL);
      v27 = ContextualProcessorInitialState::ContextualProcessorInitialState(
              (ContextualProcessorInitialState *)v40,
              (const struct ContextualProcessorInitialState *)&v33);
      v26(v25, *v10, v27);
      if ( (_DWORD)v33 == 2 )
        break;
      if ( (_DWORD)v33 == 3 )
        v9 = 1;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v34);
      v10 += 2;
      if ( v10 == v39 )
      {
        v8 = v36;
        goto LABEL_19;
      }
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v34);
    v8 = v36;
  }
LABEL_19:
  *((_BYTE *)a3 + 184) = 1;
  if ( (*((_BYTE *)a2 + 4) & 4) != 0 && v9 != *((_DWORD *)this + 10) )
  {
    NtMITSetKeyboardInputRoutingPolicy(v9);
    *((_DWORD *)this + 10) = v9;
  }
  if ( v31 )
  {
    v28 = Microsoft::WRL::ComPtr<ContextualProcessorBuffer>::As<IInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v31,
            (__int64 *)&v32);
    if ( v28 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v28,
        v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v32);
    *v8 = v32;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v32);
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v41);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v32);
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v41);
    return 2147500037LL;
  }
}
