/*
 * XREFs of ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180025840
 * Callers:
 *     ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800256F0 (-OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18004A82C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CC844 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800CD770 (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

int __fastcall GameControllerRawInputProvider::UpdateFocusPids(GameControllerRawInputProvider *this)
{
  WINBOOL v2; // edx
  __int64 v3; // rcx
  char *v4; // rcx
  WINBOOL v5; // eax
  int v6; // eax
  WINBOOL v7; // eax
  int v8; // edi
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  int v13; // eax
  const char *v14; // r9
  WINBOOL v15; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-BCh] BYREF
  WINBOOL v17; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL v18; // [rsp+4Ch] [rbp-B4h] BYREF
  WINBOOL v19; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL InBuffer; // [rsp+54h] [rbp-ACh] BYREF
  LPVOID v21; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v22; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  WINBOOL v24; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  LPVOID v27; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  union _RTL_RUN_ONCE *v29; // [rsp+98h] [rbp-68h] BYREF
  int v30; // [rsp+A0h] [rbp-60h]
  union _RTL_RUN_ONCE *v31; // [rsp+A8h] [rbp-58h] BYREF
  int v32; // [rsp+B0h] [rbp-50h]
  union _RTL_RUN_ONCE *v33; // [rsp+B8h] [rbp-48h] BYREF
  int v34; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  LPVOID *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  LPVOID *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  int *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  int *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  WINBOOL *p_fPending; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  WINBOOL *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  WINBOOL *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v2 = *((_DWORD *)this + 38);
  if ( !v2 )
  {
    v2 = *((_DWORD *)this + 39);
    if ( !v2 )
      v2 = *((_DWORD *)this + 37);
  }
  InBuffer = v2;
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  v4 = (char *)*((_QWORD *)this + 9);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !DeviceIoControl(v4, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x352,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             v14);
  }
  v5 = *((_DWORD *)this + 38);
  if ( !v5 )
    v5 = *((_DWORD *)this + 37);
  v19 = v5;
  v6 = RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v19, 4LL);
  if ( v6 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x36E,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             (const char *)(unsigned int)v6,
             0);
  if ( *((_DWORD *)this + 38) )
    v7 = 0;
  else
    v7 = *((_DWORD *)this + 39);
  v15 = v7;
  v8 = *((_DWORD *)this + 40);
  if ( v7 != v8 )
  {
    v13 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v15, 4LL);
    if ( v13 < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x388,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontr"
                             "ollerrawinputprovider.cpp",
               (const char *)(unsigned int)v13,
               0);
    *((_DWORD *)this + 40) = v15;
  }
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&EventDescriptor);
  }
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v9 && *v9 )
  {
    v22 = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v17, &v22) && v17 )
    {
      v29 = &`ISMTracing::Instance'::`2'::wrapper;
      v22 = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v30 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v29);
    }
    v21 = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v18, &v21) && v18 )
    {
      v31 = &`ISMTracing::Instance'::`2'::wrapper;
      v21 = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v32 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v31);
    }
    v10 = (_DWORD *)*((_QWORD *)v21 + 1);
    if ( v10 && *v10 )
    {
      v27 = 0LL;
      if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v24, &v27) && v24 )
      {
        v33 = &`ISMTracing::Instance'::`2'::wrapper;
        v27 = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v34 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v33);
      }
      v11 = *((_QWORD *)v27 + 1);
      if ( *(_DWORD *)v11 > 4u )
      {
        v18 = v15;
        v17 = v19;
        fPending = InBuffer;
        v25 = v8;
        v26 = *((_DWORD *)this + 39);
        LODWORD(v22) = *((_DWORD *)this + 38);
        LODWORD(v21) = *((_DWORD *)this + 37);
        v51 = &v18;
        v52 = 4LL;
        v49 = &v17;
        v50 = 4LL;
        p_fPending = &fPending;
        v48 = 4LL;
        v45 = &v25;
        v46 = 4LL;
        v43 = &v26;
        v44 = 4LL;
        v41 = &v22;
        v42 = 4LL;
        v39 = &v21;
        v40 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 4;
        EventDescriptor.Keyword = 0LL;
        UserData.Ptr = *(_QWORD *)(v11 + 8);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v36 = &unk_18022310C;
        v37 = 198;
        v38 = 1;
        LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      }
    }
  }
  return 0;
}
