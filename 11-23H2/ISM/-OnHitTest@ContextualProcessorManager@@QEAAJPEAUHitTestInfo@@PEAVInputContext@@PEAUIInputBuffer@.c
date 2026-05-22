/*
 * XREFs of ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180020610
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18001F480 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801B9380 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001F3A0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x18003BC28 (-Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 *     _tlgKeywordOn @ 0x18003F41C (_tlgKeywordOn.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x1800542B4 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$As@UIInputTarget@@@?$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800548A4 (--$As@UIInputTarget@@@-$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800A0520 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C10F8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800CBC0C (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x1801BDCC4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapSz@G@@.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x1801BE34C (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ContextualProcessorManager::OnHitTest(
        ContextualProcessorManager *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5,
        enum ContextualProcessorState *a6)
{
  enum ContextualProcessorState *v10; // rdi
  int v11; // r12d
  BOOL inited; // eax
  void *v13; // r9
  _DWORD *v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *i; // r15
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  int v23; // eax
  void *v24; // rbx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rbx
  void (__fastcall *v31)(__int64, _QWORD, _QWORD, union _RTL_RUN_ONCE **); // rsi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v36; // eax
  LPVOID v37; // rbx
  __int64 (__fastcall *v38)(LPVOID, GUID *, __int64 *); // rdi
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // r8d
  int v46; // [rsp+20h] [rbp-E0h]
  char v47; // [rsp+50h] [rbp-B0h]
  LPVOID v48; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h] BYREF
  WINBOOL v58; // [rsp+A8h] [rbp-58h] BYREF
  WINBOOL v59; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h] BYREF
  union _RTL_RUN_ONCE *v61; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h]
  enum ContextualProcessorState *v63; // [rsp+C8h] [rbp-38h]
  union _RTL_RUN_ONCE *v64; // [rsp+D0h] [rbp-30h] BYREF
  int v65; // [rsp+D8h] [rbp-28h]
  __int64 v66; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v67; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-10h] BYREF
  union _RTL_RUN_ONCE *v69; // [rsp+F8h] [rbp-8h] BYREF
  int v70; // [rsp+100h] [rbp+0h]
  union _RTL_RUN_ONCE *v71; // [rsp+108h] [rbp+8h] BYREF
  int v72; // [rsp+110h] [rbp+10h]
  union _RTL_RUN_ONCE *v73; // [rsp+118h] [rbp+18h] BYREF
  int v74; // [rsp+120h] [rbp+20h]
  char *v75; // [rsp+128h] [rbp+28h]
  GUID v76; // [rsp+130h] [rbp+30h] BYREF
  GUID v77; // [rsp+140h] [rbp+40h] BYREF
  GUID *v78; // [rsp+150h] [rbp+50h]
  const char *v79; // [rsp+158h] [rbp+58h] BYREF
  GUID ActivityId; // [rsp+160h] [rbp+60h] BYREF
  __int128 v81; // [rsp+170h] [rbp+70h]
  __int64 v82; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v60 = (__int64)this;
  v10 = a6;
  v63 = a6;
  if ( !a5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)0x80070057LL,
      v46);
    return 2147942487LL;
  }
  v79 = "ContextualProcessingHitTest";
  ActivityId = 0LL;
  v81 = 0LL;
  v11 = 0;
  v82 = 0LL;
  Context = 0LL;
  inited = __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v13 = &`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && fPending )
  {
    v61 = &`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180268B08;
    qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    LODWORD(v62) = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v61);
  }
  v14 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v14 )
  {
    if ( (unsigned __int8)tlgKeywordOn(v14, 1LL) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v42 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                          v41,
                          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
            + 1);
      if ( *(_DWORD *)v42 > 6u
        && (*(_BYTE *)(v42 + 16) & 1) != 0
        && (*(_QWORD *)(v42 + 24) & 1LL) == *(_QWORD *)(v42 + 24) )
      {
        v57 = (__int64)v79;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v42,
          (__int64)&v57);
      }
    }
  }
  v51 = 0LL;
  if ( (*((_DWORD *)a2 + 8) & 0x10000) == 0 || (v47 = 1, *(_DWORD *)a2 != 2) )
    v47 = 0;
  if ( !*a5
    || (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *, void *))*a5)(
         *a5,
         &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245,
         &v51,
         v13) < 0 )
  {
    Context = 0LL;
    v50 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&Context);
    v36 = ContextualProcessorBuffer::Create(a3, a4, (struct ContextualProcessorBuffer **)&Context);
    if ( v36 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v36,
        v46);
    v37 = Context;
    v38 = **(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))Context;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v51);
    v39 = v38(v37, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &v51);
    if ( v39 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x70,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v39,
        v46);
    v40 = Microsoft::WRL::ComPtr<ContextualProcessorBuffer>::As<IInputTarget>(&Context, &v50);
    if ( v40 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x71,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v40,
        v46);
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v50);
    *a5 = (struct IInputTarget *)v50;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v50);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&Context);
    goto LABEL_12;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 64LL))(v51, *((unsigned int *)a2 + 10))
    || !v47 )
  {
    (*(void (__fastcall **)(__int64, struct InputContext *))(*(_QWORD *)v51 + 32LL))(v51, a3);
LABEL_12:
    v15 = (_QWORD *)*((_QWORD *)this + 2);
    for ( i = (_QWORD *)*((_QWORD *)this + 3); v15 != i; v15 += 2 )
    {
      v17 = *((_QWORD *)a3 + 22);
      if ( !v17 || ((*(_QWORD *)(v17 + 8) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 || *((_DWORD *)v15 + 2) == 1 )
      {
        v54 = 0LL;
        v53 = 0LL;
        v18 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v51 + 56LL))(
                           v51,
                           &v57,
                           *v15);
        v19 = 0LL;
        if ( &v56 != v18 )
        {
          v19 = *v18;
          *v18 = 0LL;
        }
        v20 = v54;
        v54 = v19;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v21 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v75 = "ContextualProcessorHitTest";
        v76 = 0LL;
        v77 = ActivityId;
        v78 = &v77;
        v50 = 0LL;
        if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &v50)
          && fPending )
        {
          v69 = &`InputTraceLogging::Instance'::`2'::wrapper;
          v50 = &qword_180268B08;
          qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
          qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
          v70 = 0;
          wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v69);
        }
        v22 = (_DWORD *)*((_QWORD *)v50 + 1);
        if ( *v22 )
        {
          if ( (unsigned __int8)tlgKeywordOn(v22, 1LL) )
          {
            EventActivityIdControl(3u, &v76);
            v44 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                                v43,
                                _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                  + 1);
            if ( *(_DWORD *)v44 > 6u
              && (*(_BYTE *)(v44 + 16) & 1) != 0
              && (*(_QWORD *)(v44 + 24) & 1LL) == *(_QWORD *)(v44 + 24) )
            {
              v48 = v75;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                v44,
                (__int64)&v48);
            }
          }
        }
        v23 = (*(__int64 (__fastcall **)(_QWORD, struct HitTestInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v15 + 24LL))(
                *v15,
                a2,
                a3,
                &v53);
        if ( v23 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x9D,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
            (const char *)(unsigned int)v23,
            v46);
        v24 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 48LL))(*v15);
        v55 = 0LL;
        if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &v58, &v55) && v58 )
        {
          v71 = &`InputETW::Instance'::`2'::wrapper;
          v55 = &qword_180268F98;
          qword_180268F98 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
          qword_180268FB0 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
          v72 = 0;
          wil::details::static_lazy<InputETW>::Completer::~Completer(&v71);
        }
        v25 = *((_QWORD *)v55 + 1);
        if ( *(_DWORD *)v25 > 4u
          && (*(_BYTE *)(v25 + 16) & 1) != 0
          && (*(_QWORD *)(v25 + 24) & 1LL) == *(_QWORD *)(v25 + 24) )
        {
          v48 = v24;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            v25,
            (int)&dword_1802289A2,
            (__int64)&v48);
        }
        v26 = v53;
        v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 48LL))(*v15);
        v48 = 0LL;
        if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v59, &v48) && v59 )
        {
          v73 = &`InputTraceLogging::Instance'::`2'::wrapper;
          v48 = &qword_180268B08;
          qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
          qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
          v74 = 0;
          wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v73);
        }
        v28 = *((_QWORD *)v48 + 1);
        if ( *(_DWORD *)v28 > 4u
          && (*(_DWORD *)(v28 + 16) & 0x400LL) != 0
          && (*(_QWORD *)(v28 + 24) & 0x400LL) == *(_QWORD *)(v28 + 24) )
        {
          v66 = InputTraceLogging::ProcessorStateToString(v26);
          v67 = v27;
          LODWORD(v55) = *((_DWORD *)a2 + 1);
          v68 = InputTraceLogging::InputTypeToString(*(unsigned int *)a2);
          LODWORD(v50) = *((_DWORD *)a2 + 10);
          v56 = *((_QWORD *)a2 + 2);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            v45,
            (int)&dword_180228A21,
            (__int64)&v56,
            (__int64)&v50,
            (__int64)&v68,
            (__int64)&v55,
            (__int64)&v67,
            (__int64)&v66);
        }
        v48 = 0LL;
        if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v48)
          && (_DWORD)Context )
        {
          v64 = &`InputTraceLogging::Instance'::`2'::wrapper;
          v48 = &qword_180268B08;
          qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
          qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
          v65 = 0;
          wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v64);
        }
        v29 = *((_QWORD *)v48 + 1);
        if ( *(_DWORD *)v29 > 6u
          && (*(_BYTE *)(v29 + 16) & 1) != 0
          && (*(_QWORD *)(v29 + 24) & 1LL) == *(_QWORD *)(v29 + 24) )
        {
          v56 = (__int64)v75;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            v29,
            (__int64)&v56);
        }
        v30 = v51;
        v31 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, union _RTL_RUN_ONCE **))(*(_QWORD *)v51 + 48LL);
        LODWORD(v61) = v53;
        v62 = v54;
        if ( v54 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
        v31(v30, *((unsigned int *)a2 + 10), *v15, &v61);
        if ( (_DWORD)v53 == 2 )
        {
          v11 = 2;
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v54);
          break;
        }
        if ( (_DWORD)v53 == 1 )
        {
          v11 = 1;
        }
        else if ( (_DWORD)v53 == 3 && !v11 )
        {
          v11 = 3;
        }
        v32 = v54;
        if ( v54 )
        {
          v54 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    *((_BYTE *)a3 + 184) = 1;
    v10 = v63;
    if ( v47 )
      *(_DWORD *)(v60 + 44) = v11;
    goto LABEL_50;
  }
  v11 = *((_DWORD *)this + 11);
LABEL_50:
  if ( v11 )
  {
    if ( v10 )
      *(_DWORD *)v10 = v11;
    v33 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v48 = 0LL;
    if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v48)
      && (_DWORD)Context )
    {
      v64 = &`InputTraceLogging::Instance'::`2'::wrapper;
      v48 = &qword_180268B08;
      qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
      v65 = 0;
      wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v64);
    }
    v34 = *((_QWORD *)v48 + 1);
    if ( *(_DWORD *)v34 > 6u
      && (*(_BYTE *)(v34 + 16) & 1) != 0
      && (*(_QWORD *)(v34 + 24) & 1LL) == *(_QWORD *)(v34 + 24) )
    {
      v60 = (__int64)v79;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        v34,
        (__int64)&v60);
    }
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v51);
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)&v79);
    return 2147500037LL;
  }
}
