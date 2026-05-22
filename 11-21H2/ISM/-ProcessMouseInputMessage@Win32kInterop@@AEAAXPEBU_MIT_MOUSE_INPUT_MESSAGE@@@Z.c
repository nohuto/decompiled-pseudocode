/*
 * XREFs of ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180018D90
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800181D0 (std--_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180048394 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x18004D778 (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18008D28C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B2690 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800B2A20 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE7F4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??R?$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z @ 0x1800DEAC8 (--R-$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z.c)
 *     ??R?$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z @ 0x1800DEB10 (--R-$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z.c)
 *     ?ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA?AU_MIT_INPUT_INTEROP_MESSAGE@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800DECF4 (-ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA-AU_MIT_INPUT_INTEROP_MESSAGE@@AEB.c)
 *     ?ConstructInputNotificationFromMouseInputMessage@@YA?AU_InputMessageNotification@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800DEE2C (-ConstructInputNotificationFromMouseInputMessage@@YA-AU_InputMessageNotification@@AEBU_MIT_MOUSE.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x1800DEF30 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800DFCF8 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800E01D0 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800E090C (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Win32kInterop::ProcessMouseInputMessage(Win32kInterop *this, const struct _MIT_MOUSE_INPUT_MESSAGE *a2)
{
  int v4; // r9d
  __int64 v5; // r8
  struct _MIT_MOUSE_INPUT_MESSAGE *v6; // rbx
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // r8
  _QWORD *v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(); // rcx
  __int64 (__fastcall **v15)(); // rax
  __int64 (__fastcall ***v16)(); // rdx
  __int64 (__fastcall ***v17)(); // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  _OWORD *v21; // rax
  char *v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // eax
  char *v26; // r9
  __int64 v27; // rcx
  int v28; // eax
  __int64 (__fastcall ***v29)(); // rdx
  __int64 (__fastcall ***v30)(); // rdx
  _OWORD *v31; // rax
  __int64 v32; // rdx
  LPVOID *v33; // [rsp+20h] [rbp-E0h]
  LPVOID v34; // [rsp+40h] [rbp-C0h] BYREF
  struct _MIT_MOUSE_INPUT_MESSAGE *v35; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+70h] [rbp-90h] BYREF
  int *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+90h] [rbp-70h] BYREF
  int v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-48h] BYREF
  __int64 (__fastcall **v47)(); // [rsp+C0h] [rbp-40h] BYREF
  __int128 v48; // [rsp+C8h] [rbp-38h]
  int *v49; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall ***v50)(); // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall **v51)(); // [rsp+100h] [rbp+0h] BYREF
  __int128 v52; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall ***v53)(); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall ***v54)(); // [rsp+140h] [rbp+40h]
  _BYTE v55[408]; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v56; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int v57; // [rsp+2E4h] [rbp+1E4h]
  int v58; // [rsp+2E8h] [rbp+1E8h]
  __int64 v59; // [rsp+2F0h] [rbp+1F0h]
  int v60; // [rsp+2F8h] [rbp+1F8h]
  __int128 v61; // [rsp+338h] [rbp+238h]
  __int64 v62; // [rsp+348h] [rbp+248h]
  char v63; // [rsp+35Dh] [rbp+25Dh]
  char v64; // [rsp+35Eh] [rbp+25Eh]
  char v65; // [rsp+360h] [rbp+260h] BYREF
  _OWORD v66[15]; // [rsp+500h] [rbp+400h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+638h] [rbp+538h]

  v35 = a2;
  Context[0] = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    *(_QWORD *)&v39 = &`InputTraceLogging::Instance'::`2'::wrapper;
    Context[0] = &qword_180242A58;
    qword_180242A58 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A70 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    DWORD2(v39) = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v39);
  }
  v5 = *((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*(_DWORD *)(v5 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x200LL) == *(_QWORD *)(v5 + 24) )
  {
    v34 = (LPVOID)*((unsigned int *)a2 + 48);
    v44 = *((_QWORD *)a2 + 5);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v5,
      (unsigned int)&unk_1802033D7,
      v5,
      v4,
      (__int64)&v44,
      (__int64)&v34);
  }
  v6 = v35;
  v45 = *((_QWORD *)v35 + 6);
  v7 = *(_DWORD *)v35;
  if ( *(_DWORD *)v35 )
  {
    if ( v7 != -1 )
    {
      if ( !Win32kInterop::IsDeviceAttached(this, v7, 1) )
      {
        InputTraceLogging::ISM::DropMouseInput(v35);
        v34 = (LPVOID)1;
        NtMITPostMouseInputMessage(&v45, 1LL, 0LL, &v34);
        return;
      }
      v6 = v35;
    }
  }
  else
  {
    v7 = -1;
  }
  memset_0(&v56, 0, 0x218uLL);
  v60 = 536;
  v57 = v7;
  v56 = 4096;
  v58 = *((_DWORD *)v6 + 8);
  v59 = *((_QWORD *)v6 + 5);
  v61 = *(_OWORD *)((char *)v6 + 8);
  v62 = *((_QWORD *)v6 + 3);
  v8 = *((_DWORD *)v6 + 19);
  if ( v8 == 1 || v8 == 2 )
  {
    v63 = 1;
    v8 = *((_DWORD *)v6 + 19);
  }
  if ( v8 == 3 )
  {
    v64 = 1;
    v21 = (_OWORD *)ConstructInputInteropMessageFromMouseInputMessageForWheel(v55, v6);
    v22 = &v65;
    v23 = 3LL;
    do
    {
      *(_OWORD *)v22 = *v21;
      *((_OWORD *)v22 + 1) = v21[1];
      *((_OWORD *)v22 + 2) = v21[2];
      *((_OWORD *)v22 + 3) = v21[3];
      *((_OWORD *)v22 + 4) = v21[4];
      *((_OWORD *)v22 + 5) = v21[5];
      *((_OWORD *)v22 + 6) = v21[6];
      v22 += 128;
      *((_OWORD *)v22 - 1) = v21[7];
      v21 += 8;
      --v23;
    }
    while ( v23 );
    *(_OWORD *)v22 = *v21;
    *((_QWORD *)v22 + 2) = *((_QWORD *)v21 + 2);
    v6 = v35;
  }
  InputDestTarget::GetExistingOrCreateNewInputTarget(&v37, (char *)v6 + 72, *((_QWORD *)this + 53));
  v46 = *((_QWORD *)v35 + 21);
  v43 = *((_DWORD *)v35 + 44);
  *(_QWORD *)&v39 = &v35;
  *((_QWORD *)&v39 + 1) = &v56;
  v51 = off_1801E4620;
  v52 = v39;
  v53 = &v51;
  v54 = &v51;
  *(_QWORD *)&v39 = &v37;
  *((_QWORD *)&v39 + 1) = &v46;
  v40 = &v43;
  v47 = off_1801E45F0;
  v48 = v39;
  v49 = &v43;
  v50 = &v47;
  *(_QWORD *)&v39 = &v47;
  v34 = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &v34) && fPending )
  {
    v41 = (__int64)&`InputTraceLogging::Instance'::`2'::wrapper;
    v34 = &qword_180242A58;
    qword_180242A58 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A70 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v42 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v41);
  }
  v9 = *((_QWORD *)v34 + 1);
  if ( *(_DWORD *)v9 > 4u
    && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0
    && (*(_QWORD *)(v9 + 24) & 0x400LL) == *(_QWORD *)(v9 + 24) )
  {
    LODWORD(Context[0]) = v57;
    v44 = InputTraceLogging::InputTypeToString(v56);
    v41 = v59;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v24,
      (__int64)&v41,
      (__int64)&v44,
      (__int64)Context);
  }
  v10 = (_QWORD *)((char *)this + 200);
  if ( !*((_BYTE *)this + 192) )
    goto LABEL_65;
  v11 = (_QWORD *)(*((_QWORD *)this + 11)
                 + 16
                 * (*((_QWORD *)this + 14) & (0x100000001B3LL
                                            * (HIBYTE(v57) ^ (0x100000001B3LL
                                                            * (BYTE2(v57) ^ (0x100000001B3LL
                                                                           * (BYTE1(v57) ^ (0x100000001B3LL
                                                                                          * ((unsigned __int8)v57 ^ 0xCBF29CE484222325uLL))))))))));
  v12 = v11[1];
  v13 = *((_QWORD *)this + 9);
  if ( v12 != v13 )
  {
    while ( v57 != *(_DWORD *)(v12 + 16) )
    {
      if ( v12 == *v11 )
        goto LABEL_18;
      v12 = *(_QWORD *)(v12 + 8);
    }
    if ( v12 != v13 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 25);
      v25 = InputContext::Create((struct InputContext **)this + 25);
      if ( v25 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6D1,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v25,
          (int)v33);
      v34 = 0LL;
      v26 = (char *)this + 8;
      if ( !this )
        v26 = 0LL;
      v33 = &v34;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 6) + 64LL))(
             *((_QWORD *)this + 6),
             *(_QWORD *)(v12 + 24),
             *v10,
             v26) >= 0 )
        Microsoft::WRL::ComPtr<IInputTarget>::operator=((char *)this + 208, &v34);
      *((_BYTE *)this + 192) = 0;
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v34);
LABEL_65:
      std::_Func_class<void,InputContext *>::operator()(&v47, *v10);
      v27 = *((_QWORD *)this + 26);
      if ( v27 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 24LL))(v27, &v56);
        if ( v28 != -2147417853 && v28 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x6E9,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
            (const char *)(unsigned int)v28,
            (int)v33);
      }
      else
      {
        std::_Func_class<void,IInputTarget *>::operator()(&v51, *(_QWORD *)(*v10 + 16LL));
      }
      if ( v50 )
      {
        v29 = &v47;
        LOBYTE(v29) = v50 != &v47;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v50)[4])(v50, v29);
        v50 = 0LL;
      }
      if ( v53 )
      {
        v30 = &v51;
        LOBYTE(v30) = v53 != &v51;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v53)[4])(v53, v30);
      }
      goto LABEL_27;
    }
  }
LABEL_18:
  v41 = 0LL;
  if ( !v53 )
  {
    std::_Xbad_function_call();
LABEL_70:
    LOBYTE(v16) = 1;
    goto LABEL_22;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 *))(*v53)[2])(v53, &v41);
  v14 = v50;
  if ( !v50 )
    goto LABEL_23;
  v15 = *v50;
  v16 = &v47;
  if ( v50 != &v47 )
    goto LABEL_70;
  v16 = 0LL;
LABEL_22:
  ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))v15[4])(v14, v16);
  v50 = 0LL;
LABEL_23:
  if ( v53 )
  {
    v17 = &v51;
    if ( v53 == &v51 )
      v17 = 0LL;
    else
      LOBYTE(v17) = 1;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v53)[4])(v53, v17);
  }
LABEL_27:
  if ( *((_DWORD *)v35 + 19) == 2 )
    goto LABEL_78;
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x3DDA1) != 0 )
  {
LABEL_78:
    v31 = (_OWORD *)ConstructInputNotificationFromMouseInputMessage(v55);
    v66[0] = *v31;
    v66[1] = v31[1];
    v66[2] = v31[2];
    v66[3] = v31[3];
    v66[4] = v31[4];
    v66[5] = v31[5];
    v66[6] = v31[6];
    v66[7] = v31[7];
    v31 += 8;
    v66[8] = *v31;
    v66[9] = v31[1];
    v66[10] = v31[2];
    v66[11] = v31[3];
    v66[12] = v31[4];
    v66[13] = v31[5];
    v66[14] = v31[6];
    LODWORD(v39) = 0;
    DWORD1(v39) = *(_DWORD *)(v32 + 76);
    *((_QWORD *)&v39 + 1) = *(_QWORD *)(v32 + 48);
    Win32kInterop::ProcessInputMessage(
      this,
      (const struct Win32kInterop::InputMessageContext *)&v39,
      (const struct _InputMessageNotification *)v66,
      *(_DWORD *)(v32 + 188) != 0);
  }
  v18 = v37;
  if ( (unsigned int)(*((_DWORD *)v35 + 19) - 1) <= 1 )
  {
    v19 = *((_QWORD *)this + 53);
    if ( v19 != v37 )
    {
      v20 = v37;
      if ( v37 )
      {
        (*(void (**)(void))(*(_QWORD *)v37 + 8LL))();
        v19 = *((_QWORD *)this + 53);
        v18 = v37;
      }
      *((_QWORD *)this + 53) = v20;
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v18 = v37;
      }
    }
  }
  if ( v18 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
}
