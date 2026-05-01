/*
 * XREFs of ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180095EF0
 * Callers:
 *     ?RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x180095EB0 (-RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@Vie.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x1801214A8 (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180171890 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::RegisterForViewEventsWithOptions(
        RTL_SRWLOCK *a1,
        __int64 a2,
        HSTRING a3,
        HSTRING a4,
        int a5,
        __int64 a6)
{
  char *v10; // rsi
  const char *v11; // r9
  HSTRING *v12; // r12
  HRESULT v13; // ebx
  HSTRING v14; // rcx
  HRESULT v15; // ebx
  HSTRING v16; // rcx
  __int64 v17; // rax
  int AgileReference; // ebx
  __int64 v19; // rcx
  __int64 v20; // rdx
  RTL_SRWLOCK *v21; // rbx
  HSTRING **Ptr; // rdi
  HSTRING **v23; // r13
  UINT32 StringLen; // r15d
  const WCHAR *StringRawBuffer; // r14
  UINT32 v26; // esi
  const WCHAR *v27; // rax
  HSTRING *v28; // rcx
  _QWORD *v29; // r14
  HSTRING v30; // rcx
  HSTRING **v31; // rdx
  std::_Ref_count_base *v32; // rsi
  PCWSTR v33; // r14
  PCWSTR v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  int v39; // edx
  __int64 v41; // rdx
  void (*v42)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  std::_Ref_count_base *v43; // rbx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-108h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-108h]
  __int64 v46; // [rsp+30h] [rbp-F8h] BYREF
  INT32 result; // [rsp+38h] [rbp-F0h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-E8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-E0h] BYREF
  HSTRING *v50; // [rsp+50h] [rbp-D8h] BYREF
  std::_Ref_count_base *v51; // [rsp+58h] [rbp-D0h]
  volatile signed __int32 *v52; // [rsp+60h] [rbp-C8h]
  RTL_SRWLOCK *v53; // [rsp+68h] [rbp-C0h]
  EVENT_DESCRIPTOR v54; // [rsp+70h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+80h] [rbp-A8h] BYREF
  int v56; // [rsp+88h] [rbp-A0h]
  HSTRING newString; // [rsp+90h] [rbp-98h] BYREF
  HSTRING v58; // [rsp+98h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-88h] BYREF
  void *v60; // [rsp+B0h] [rbp-78h]
  int v61; // [rsp+B8h] [rbp-70h]
  int v62; // [rsp+BCh] [rbp-6Ch]
  PCWSTR v63; // [rsp+C0h] [rbp-68h]
  int v64; // [rsp+C8h] [rbp-60h]
  int v65; // [rsp+CCh] [rbp-5Ch]
  PCWSTR v66; // [rsp+D0h] [rbp-58h]
  int v67; // [rsp+D8h] [rbp-50h]
  int v68; // [rsp+DCh] [rbp-4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  string = a4;
  *(_QWORD *)&v54.Id = a3;
  Context = a1;
  *(_QWORD *)fPending = a6;
  v10 = (char *)operator new(0x38uLL);
  v52 = (volatile signed __int32 *)v10;
  *((_DWORD *)v10 + 2) = 1;
  *((_DWORD *)v10 + 3) = 1;
  *(_QWORD *)v10 = &std::_Ref_count_obj2<ViewEventRegistration>::`vftable';
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 6) = 0LL;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 5) = 0LL;
  v12 = (HSTRING *)(v10 + 16);
  v50 = (HSTRING *)(v10 + 16);
  v51 = (std::_Ref_count_base *)v10;
  if ( v10 == (char *)-16LL )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x728,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v11);
  v13 = WindowsDuplicateString(a3, &newString);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x729,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v13,
      bIgnoreCase);
  v14 = *v12;
  *v12 = newString;
  WindowsDeleteString(v14);
  v15 = WindowsDuplicateString(a4, &v58);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v15,
      bIgnoreCase);
  v16 = (HSTRING)*((_QWORD *)v10 + 3);
  *((_QWORD *)v10 + 3) = v58;
  WindowsDeleteString(v16);
  *((_DWORD *)v10 + 8) = a5;
  v17 = 0LL;
  v46 = 0LL;
  AgileReference = 0;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
    AgileReference = RoGetAgileReference(0LL, &GUID_c1659867_0cf6_5f3b_99df_4f036280926c, a2, &v46);
    v17 = v46;
  }
  v19 = 0LL;
  v46 = 0LL;
  v20 = *((_QWORD *)v10 + 5);
  *((_QWORD *)v10 + 5) = v17;
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v19 = v46;
  }
  if ( v19 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( AgileReference < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72C,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)AgileReference,
      bIgnoreCase);
  v21 = a1 + 56;
  AcquireSRWLockExclusive(a1 + 56);
  v53 = a1 + 56;
  Ptr = (HSTRING **)a1[50].Ptr;
  v23 = (HSTRING **)a1[51].Ptr;
  while ( Ptr != v23 )
  {
    StringLen = WindowsGetStringLen(*v12);
    StringRawBuffer = WindowsGetStringRawBuffer(*v12, 0LL);
    v26 = WindowsGetStringLen(**Ptr);
    v27 = WindowsGetStringRawBuffer(**Ptr, 0LL);
    if ( CompareStringOrdinal(v27, v26, StringRawBuffer, StringLen, 1) == 2 )
    {
      if ( WindowsIsStringEmpty((*Ptr)[1])
        || WindowsIsStringEmpty(v12[1])
        || (v28 = *Ptr, result = 0, WindowsCompareStringOrdinal(v28[1], v12[1], &result), !result) )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x749,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)0x80070057LL,
          bIgnoreCasea);
      }
    }
    Ptr += 2;
  }
  v29 = Context;
  v30 = (HSTRING)*((_QWORD *)Context + 49);
  *((_QWORD *)Context + 49) = (char *)v30 + 1;
  v12[4] = v30;
  v31 = (HSTRING **)v29[51];
  if ( v31 == (HSTRING **)v29[52] )
  {
    std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
      v29 + 50,
      v31,
      &v50);
    v32 = v51;
    v12 = v50;
  }
  else
  {
    *v31 = 0LL;
    v31[1] = 0LL;
    v32 = (std::_Ref_count_base *)v52;
    if ( v52 )
    {
      _InterlockedIncrement(v52 + 2);
      v32 = v51;
      v12 = v50;
      v21 = v53;
    }
    *v31 = v12;
    v31[1] = (HSTRING *)v32;
    v29[51] += 16LL;
  }
  **(_QWORD **)fPending = v12[4];
  v33 = WindowsGetStringRawBuffer(string, 0LL);
  v34 = WindowsGetStringRawBuffer(*(HSTRING *)&v54.Id, 0LL);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    string = (HSTRING)&`ViewManagerInteropLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B4348;
    qword_1807B4348 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B4360 = (__int64)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    v56 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&string, v41, v42);
  }
  v35 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v35 > 5u )
  {
    if ( v33 )
    {
      v36 = -1LL;
      do
        ++v36;
      while ( v33[v36] );
      v37 = 2 * v36 + 2;
    }
    else
    {
      v33 = &LocaleName;
      v37 = 2;
    }
    v66 = v33;
    v67 = v37;
    v68 = 0;
    if ( v34 )
    {
      v38 = -1LL;
      do
        ++v38;
      while ( v34[v38] );
      v39 = 2 * v38 + 2;
    }
    else
    {
      v34 = &LocaleName;
      v39 = 2;
    }
    v63 = v34;
    v64 = v39;
    v65 = 0;
    *(_QWORD *)&v54.Id = 0x50B000000LL;
    v54.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v35 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v60 = &unk_1806B15B0;
    v61 = 89;
    v62 = 1;
    LODWORD(v52) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v35 + 32), &v54, 0LL, 0LL, 4u, &UserData);
  }
  if ( v21 )
    ReleaseSRWLockExclusive(v21);
  if ( v32 && _InterlockedExchangeAdd((volatile signed __int32 *)v32 + 2, 0xFFFFFFFF) == 1 )
  {
    v43 = v51;
    (**(void (__fastcall ***)(std::_Ref_count_base *))v51)(v51);
    std::_Ref_count_base::_Decwref(v43);
  }
  return 0LL;
}
