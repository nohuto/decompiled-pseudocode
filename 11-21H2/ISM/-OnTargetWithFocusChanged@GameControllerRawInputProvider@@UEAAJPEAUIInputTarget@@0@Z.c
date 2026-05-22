/*
 * XREFs of ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180013EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameControllerRawInputProvider::OnTargetWithFocusChanged(
        RTL_SRWLOCK *this,
        struct IInputTarget *a2,
        __int64 (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v5; // rsi
  __int64 (__fastcall **v6)(struct IInputTarget *, GUID *, __int64 *); // rax
  int LastError; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int Ptr; // edx
  PVOID v12; // rcx
  char *v13; // rcx
  int Ptr_high; // eax
  int v15; // eax
  int v16; // eax
  int v17; // r14d
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  const char *v22; // r9
  int v23; // eax
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  int UserDataCounta; // [rsp+20h] [rbp-E0h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int InBuffer; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  WINBOOL fPending; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL v33; // [rsp+64h] [rbp-9Ch] BYREF
  WINBOOL v34; // [rsp+68h] [rbp-98h] BYREF
  WINBOOL v35; // [rsp+6Ch] [rbp-94h] BYREF
  int v36; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+74h] [rbp-8Ch] BYREF
  int v38; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+7Ch] [rbp-84h] BYREF
  int v40; // [rsp+80h] [rbp-80h] BYREF
  LPVOID Context; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v42; // [rsp+90h] [rbp-70h] BYREF
  LPVOID v43; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID v45; // [rsp+B0h] [rbp-50h] BYREF
  union _RTL_RUN_ONCE *v46; // [rsp+B8h] [rbp-48h] BYREF
  int v47; // [rsp+C0h] [rbp-40h]
  union _RTL_RUN_ONCE *v48; // [rsp+C8h] [rbp-38h] BYREF
  int v49; // [rsp+D0h] [rbp-30h]
  union _RTL_RUN_ONCE *v50; // [rsp+D8h] [rbp-28h] BYREF
  int v51; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  int *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  int *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  int *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  int *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  int *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  int *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  int *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v5 = this + 7;
  AcquireSRWLockExclusive(this + 7);
  if ( a3 )
  {
    v6 = *a3;
    LastError = 0;
    v31 = 0LL;
    v8 = (*v6)((struct IInputTarget *)a3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v31);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        (const char *)(unsigned int)v8,
        UserDataCount);
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 32LL))(v31, &v26);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE6,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        (const char *)(unsigned int)v9,
        UserDataCount);
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 72LL))(v31, &v28);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        (const char *)(unsigned int)v10,
        UserDataCount);
    if ( v28 )
    {
      HIDWORD(this[18].Ptr) = v26;
    }
    else
    {
      HIDWORD(this[17].Ptr) = v26;
      HIDWORD(this[18].Ptr) = 0;
    }
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  else
  {
    LastError = 0;
    HIDWORD(this[17].Ptr) = 0;
    HIDWORD(this[18].Ptr) = 0;
  }
  Ptr = (int)this[18].Ptr;
  if ( !Ptr )
  {
    Ptr = HIDWORD(this[18].Ptr);
    if ( !Ptr )
      Ptr = HIDWORD(this[17].Ptr);
  }
  InBuffer = Ptr;
  v12 = this[6].Ptr;
  if ( v12 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 64LL))(v12);
  v13 = (char *)this[8].Ptr;
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !DeviceIoControl(v13, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x326,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gameco"
                                "ntrollerrawinputprovider.cpp",
                  v22);
    goto LABEL_39;
  }
  Ptr_high = (int)this[18].Ptr;
  if ( !Ptr_high )
    Ptr_high = HIDWORD(this[17].Ptr);
  v29 = Ptr_high;
  UserDataCounta = 0;
  v15 = RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v29, 4LL);
  if ( v15 < 0 )
  {
    LastError = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x342,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gameco"
                                "ntrollerrawinputprovider.cpp",
                  (const char *)(unsigned int)v15,
                  0);
    goto LABEL_39;
  }
  if ( LODWORD(this[18].Ptr) )
    v16 = 0;
  else
    v16 = HIDWORD(this[18].Ptr);
  v27 = v16;
  v17 = (int)this[19].Ptr;
  if ( v16 != v17 )
  {
    UserDataCounta = 0;
    v23 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v27, 4LL);
    if ( v23 < 0 )
    {
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x35C,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\game"
                                  "controllerrawinputprovider.cpp",
                    (const char *)(unsigned int)v23,
                    0);
      goto LABEL_39;
    }
    LODWORD(this[19].Ptr) = v27;
  }
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180242A80;
    qword_180242A80 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A98 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&EventDescriptor);
  }
  v18 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v18 && *v18 )
  {
    v45 = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v33, &v45) && v33 )
    {
      v46 = &`ISMTracing::Instance'::`2'::wrapper;
      v45 = &qword_180242A80;
      qword_180242A80 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242A98 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v47 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v46);
    }
    v42 = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v34, &v42) && v34 )
    {
      v48 = &`ISMTracing::Instance'::`2'::wrapper;
      v42 = &qword_180242A80;
      qword_180242A80 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242A98 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v49 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v48);
    }
    v19 = (_DWORD *)*((_QWORD *)v42 + 1);
    if ( v19 && *v19 )
    {
      v43 = 0LL;
      if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v35, &v43) && v35 )
      {
        v50 = &`ISMTracing::Instance'::`2'::wrapper;
        v43 = &qword_180242A80;
        qword_180242A80 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180242A98 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v51 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v50);
      }
      v20 = *((_QWORD *)v43 + 1);
      if ( *(_DWORD *)v20 > 4u )
      {
        v28 = v27;
        v26 = v29;
        v36 = InBuffer;
        v37 = v17;
        v38 = HIDWORD(this[18].Ptr);
        v39 = (int)this[18].Ptr;
        v40 = HIDWORD(this[17].Ptr);
        v68 = &v28;
        v69 = 4LL;
        v66 = &v26;
        v67 = 4LL;
        v64 = &v36;
        v65 = 4LL;
        v62 = &v37;
        v63 = 4LL;
        v60 = &v38;
        v61 = 4LL;
        v58 = &v39;
        v59 = 4LL;
        v56 = &v40;
        v57 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 4;
        EventDescriptor.Keyword = 0LL;
        UserData.Ptr = *(_QWORD *)(v20 + 8);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v53 = &unk_180201764;
        v54 = 198;
        v55 = 1;
        LODWORD(v31) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(*(_QWORD *)(v20 + 32), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      }
    }
  }
LABEL_39:
  if ( LastError < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x103,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)LastError,
      UserDataCounta);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return 0LL;
}
