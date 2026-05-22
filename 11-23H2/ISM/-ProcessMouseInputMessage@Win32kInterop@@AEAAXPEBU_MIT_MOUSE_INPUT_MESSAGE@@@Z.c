/*
 * XREFs of ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180022450
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x18001F250 (std--_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180002F48 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044CFC (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x1800542B4 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x18005BAFC (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800A3F3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800CB8C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800CBC0C (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ??R?$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z @ 0x1800F8830 (--R-$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z.c)
 *     ??R?$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z @ 0x1800F8878 (--R-$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z.c)
 *     ?ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA?AU_MIT_INPUT_INTEROP_MESSAGE@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800F8994 (-ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA-AU_MIT_INPUT_INTEROP_MESSAGE@@AEB.c)
 *     ?ConstructInputNotificationFromMouseInputMessage@@YA?AU_InputMessageNotification@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800F8ACC (-ConstructInputNotificationFromMouseInputMessage@@YA-AU_InputMessageNotification@@AEBU_MIT_MOUSE.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x1800F8BD0 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800F9944 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800FA1AC (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Win32kInterop::ProcessMouseInputMessage(LPVOID *this, const struct _MIT_MOUSE_INPUT_MESSAGE *a2)
{
  int v4; // r9d
  __int64 v5; // r8
  struct _MIT_MOUSE_INPUT_MESSAGE *v6; // rbx
  unsigned int v7; // edi
  int v8; // ecx
  char v9; // al
  _OWORD *v10; // rax
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r8d
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rbx
  LPVOID v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rbx
  __int64 (__fastcall ***v23)(); // rcx
  const char *v24; // r9
  __int64 (__fastcall ***v25)(); // rdx
  __int64 (__fastcall ***v26)(); // rcx
  int v27; // eax
  __int64 (__fastcall ***v28)(); // rdx
  __int64 (__fastcall ***v29)(); // rdx
  struct _MIT_MOUSE_INPUT_MESSAGE *v30; // rdx
  _OWORD *v31; // rax
  __int64 v32; // rdx
  void *v33; // rbx
  LPVOID *v34; // [rsp+20h] [rbp-E0h]
  LPVOID v35; // [rsp+40h] [rbp-C0h] BYREF
  struct _MIT_MOUSE_INPUT_MESSAGE *v36; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v40; // [rsp+70h] [rbp-90h] BYREF
  int *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-48h] BYREF
  __int64 (__fastcall **v48)(); // [rsp+C0h] [rbp-40h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-38h]
  int *v50; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall ***v51)(); // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall **v52)(); // [rsp+100h] [rbp+0h] BYREF
  __int128 v53; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall ***v54)(); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall ***v55)(); // [rsp+140h] [rbp+40h]
  _BYTE v56[408]; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v57; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int v58; // [rsp+2E4h] [rbp+1E4h]
  int v59; // [rsp+2E8h] [rbp+1E8h]
  int v60; // [rsp+2ECh] [rbp+1ECh]
  __int64 v61; // [rsp+2F0h] [rbp+1F0h]
  int v62; // [rsp+2F8h] [rbp+1F8h]
  char v63[60]; // [rsp+2FCh] [rbp+1FCh] BYREF
  __int128 v64; // [rsp+338h] [rbp+238h]
  __int64 v65; // [rsp+348h] [rbp+248h]
  char v66; // [rsp+35Dh] [rbp+25Dh]
  char v67; // [rsp+35Eh] [rbp+25Eh]
  char v68; // [rsp+360h] [rbp+260h] BYREF
  _OWORD v69[15]; // [rsp+500h] [rbp+400h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+638h] [rbp+538h]

  v36 = a2;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&v40 = &`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180268B08;
    qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    DWORD2(v40) = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v40);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*(_DWORD *)(v5 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x200LL) == *(_QWORD *)(v5 + 24) )
  {
    v35 = (LPVOID)*((unsigned int *)a2 + 48);
    v45 = *((_QWORD *)a2 + 5);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v5,
      (unsigned int)&unk_180224DDA,
      v5,
      v4,
      (__int64)&v45,
      (__int64)&v35);
  }
  v6 = v36;
  v46 = *((_QWORD *)v36 + 6);
  v7 = *(_DWORD *)v36;
  if ( *(_DWORD *)v36 )
  {
    if ( v7 != -1 )
    {
      if ( !Win32kInterop::IsDeviceAttached((Win32kInterop *)this, v7, 1) )
      {
        InputTraceLogging::ISM::DropMouseInput(v36);
        v35 = (LPVOID)1;
        NtMITPostMouseInputMessage(&v46, 1LL, 0LL, &v35);
        return;
      }
      v6 = v36;
    }
  }
  else
  {
    v7 = -1;
  }
  v60 = 0;
  memset_0(v63, 0, 0x1FCuLL);
  v62 = 536;
  v58 = v7;
  v57 = 4096;
  v59 = *((_DWORD *)v6 + 8);
  v61 = *((_QWORD *)v6 + 5);
  v64 = *(_OWORD *)((char *)v6 + 8);
  v65 = *((_QWORD *)v6 + 3);
  v8 = *((_DWORD *)v6 + 19);
  if ( ((v8 - 1) & 0xFFFFFFFC) == 0 )
  {
    v9 = v66;
    if ( v8 != 3 )
      v9 = 1;
    v66 = v9;
  }
  if ( *((_DWORD *)v6 + 19) == 3 )
  {
    v67 = 1;
    v10 = (_OWORD *)ConstructInputInteropMessageFromMouseInputMessageForWheel(v56, v6);
    v11 = &v68;
    v12 = 3LL;
    do
    {
      *(_OWORD *)v11 = *v10;
      *((_OWORD *)v11 + 1) = v10[1];
      *((_OWORD *)v11 + 2) = v10[2];
      *((_OWORD *)v11 + 3) = v10[3];
      *((_OWORD *)v11 + 4) = v10[4];
      *((_OWORD *)v11 + 5) = v10[5];
      *((_OWORD *)v11 + 6) = v10[6];
      v11 += 128;
      *((_OWORD *)v11 - 1) = v10[7];
      v10 += 8;
      --v12;
    }
    while ( v12 );
    *(_OWORD *)v11 = *v10;
    *((_QWORD *)v11 + 2) = *((_QWORD *)v10 + 2);
    v6 = v36;
  }
  InputDestTarget::GetExistingOrCreateNewInputTarget(v39, (char *)v6 + 72, this[53]);
  v47 = *((_QWORD *)v36 + 21);
  v44 = *((_DWORD *)v36 + 44);
  *(_QWORD *)&v40 = &v36;
  *((_QWORD *)&v40 + 1) = &v57;
  v52 = off_180204CD8;
  v53 = v40;
  v54 = &v52;
  v55 = &v52;
  *(_QWORD *)&v40 = v39;
  *((_QWORD *)&v40 + 1) = &v47;
  v41 = &v44;
  v48 = off_180204CA8;
  v49 = v40;
  v50 = &v44;
  v51 = &v48;
  *(_QWORD *)&v40 = &v48;
  v35 = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &v35) && fPending )
  {
    v42 = (__int64)&`InputTraceLogging::Instance'::`2'::wrapper;
    v35 = &qword_180268B08;
    qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v43 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v42);
  }
  v13 = *((_QWORD *)v35 + 1);
  if ( *(_DWORD *)v13 > 4u
    && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0
    && (*(_QWORD *)(v13 + 24) & 0x400LL) == *(_QWORD *)(v13 + 24) )
  {
    LODWORD(Context) = v58;
    v45 = InputTraceLogging::InputTypeToString(v57);
    v42 = v61;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v14,
      (__int64)&v42,
      (__int64)&v45,
      (__int64)&Context);
  }
  v15 = this + 25;
  if ( *((_BYTE *)this + 192) )
  {
    v16 = this[11];
    v17 = v16[2
            * ((0x100000001B3LL
              * (HIBYTE(v58) ^ (0x100000001B3LL
                              * (BYTE2(v58) ^ (0x100000001B3LL
                                             * (BYTE1(v58) ^ (0x100000001B3LL
                                                            * ((unsigned __int8)v58 ^ 0xCBF29CE484222325uLL)))))))) & (unsigned __int64)this[14])
            + 1];
    v18 = this[9];
    if ( (LPVOID)v17 == v18 )
    {
LABEL_35:
      v17 = 0LL;
    }
    else
    {
      v19 = v16[2
              * ((0x100000001B3LL
                * (HIBYTE(v58) ^ (0x100000001B3LL
                                * (BYTE2(v58) ^ (0x100000001B3LL
                                               * (BYTE1(v58) ^ (0x100000001B3LL
                                                              * ((unsigned __int8)v58 ^ 0xCBF29CE484222325uLL)))))))) & (unsigned __int64)this[14])];
      while ( v58 != *(_DWORD *)(v17 + 16) )
      {
        if ( v17 == v19 )
          goto LABEL_35;
        v17 = *(_QWORD *)(v17 + 8);
      }
    }
    if ( !v17 || (LPVOID)v17 == v18 )
    {
      v42 = 0LL;
      v23 = v54;
      if ( !v54 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 *))(*v23)[2])(v23, &v42);
      if ( v51 )
      {
        v25 = &v48;
        LOBYTE(v25) = v51 != &v48;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v51)[4])(v51, v25);
        v51 = 0LL;
      }
      v26 = v54;
      if ( v54 )
        goto LABEL_57;
      goto LABEL_58;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 25);
    v20 = InputContext::Create((struct InputContext **)this + 25);
    if ( v20 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x688,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v20,
        (int)v34);
    v35 = 0LL;
    v34 = &v35;
    v21 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, char *))(*(_QWORD *)this[6] + 64LL))(
            this[6],
            *(_QWORD *)(v17 + 24),
            *v15,
            (char *)this + 8);
    v22 = this + 26;
    if ( v21 >= 0 )
      Microsoft::WRL::ComPtr<IMessageSession>::operator=(this + 26, &v35);
    *((_BYTE *)this + 192) = 0;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v35);
  }
  else
  {
    v22 = this + 26;
  }
  std::_Func_class<void,InputContext *>::operator()(&v48, *v15);
  if ( *v22 )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v22 + 24LL))(*v22, &v57);
    if ( v27 != -2147417853 && v27 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6A0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v27,
        (int)v34);
  }
  else
  {
    std::_Func_class<void,IInputTarget *>::operator()(&v52, *(_QWORD *)(*v15 + 16LL));
  }
  if ( v51 )
  {
    v28 = &v48;
    LOBYTE(v28) = v51 != &v48;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v51)[4])(v51, v28);
    v51 = 0LL;
  }
  v26 = v54;
  if ( v54 )
  {
LABEL_57:
    v29 = &v52;
    LOBYTE(v29) = v54 != &v52;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v54)[4])(v26, v29);
  }
LABEL_58:
  v30 = v36;
  if ( *((_DWORD *)v36 + 19) != 2 )
  {
    if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
      __fastfail(7u);
    if ( ((1LL << gdwDeviceFamily) & 0x3DDA1) == 0 )
      goto LABEL_65;
    v30 = v36;
  }
  if ( *((_DWORD *)v30 + 19) == 4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x394,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      v24);
  v31 = (_OWORD *)ConstructInputNotificationFromMouseInputMessage(v56);
  v69[0] = *v31;
  v69[1] = v31[1];
  v69[2] = v31[2];
  v69[3] = v31[3];
  v69[4] = v31[4];
  v69[5] = v31[5];
  v69[6] = v31[6];
  v69[7] = v31[7];
  v31 += 8;
  v69[8] = *v31;
  v69[9] = v31[1];
  v69[10] = v31[2];
  v69[11] = v31[3];
  v69[12] = v31[4];
  v69[13] = v31[5];
  v69[14] = v31[6];
  LODWORD(v40) = 0;
  DWORD1(v40) = *(_DWORD *)(v32 + 76);
  *((_QWORD *)&v40 + 1) = *(_QWORD *)(v32 + 48);
  Win32kInterop::ProcessInputMessage(
    (Win32kInterop *)this,
    (const struct Win32kInterop::InputMessageContext *)&v40,
    (const struct _InputMessageNotification *)v69,
    *(_DWORD *)(v32 + 188) != 0);
LABEL_65:
  v33 = (void *)v39[0];
  if ( (unsigned int)(*((_DWORD *)v36 + 19) - 1) <= 1 && this[53] != (LPVOID)v39[0] )
  {
    v35 = (LPVOID)v39[0];
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v35);
    v35 = this[53];
    this[53] = v33;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v35);
    v33 = (void *)v39[0];
  }
  if ( v33 )
  {
    v39[0] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
  }
}
