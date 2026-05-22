/*
 * XREFs of ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180041344
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800328A8 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800409D8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ??4?$ComPtr@UIMessagePort@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessagePort@@@Z @ 0x180041570 (--4-$ComPtr@UIMessagePort@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessagePort@@@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800415D4 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UICursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAUICursorBroker@@@Z @ 0x180041630 (--4-$ComPtr@UICursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAUICursorBroker@@@Z.c)
 *     ?InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ @ 0x180041694 (-InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorNotificationProcessor::Initialize(CursorNotificationProcessor *this, struct ICursorBroker *a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  SystemCursorController2 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned __int64 v9; // r8
  wil::details *v10; // rbx
  __int64 (__fastcall *v11)(wil::details *, const wchar_t *, __int64 *); // rdi
  int v12; // eax
  unsigned __int64 v13; // r8
  wil::details *v14; // rbx
  __int64 (__fastcall *v15)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), CursorNotificationProcessor *, __int64); // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r8
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  int *v26; // [rsp+20h] [rbp-60h]
  wil::details *v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  wil::details *v29; // [rsp+40h] [rbp-40h] BYREF
  int v30[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v31[40]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( !IsEdition(253345LL) )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v5 = (SystemCursorController2 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                     + 29)
                                                                                   + 8LL)
                                                                       + 216LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
    v6 = SystemCursorController2::InitializeDesktopCursorService(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursor"
                      "notificationprocessor.cpp",
        (const char *)(unsigned int)v6,
        (int)v26);
      return v7;
    }
  }
  v28 = 0LL;
  v29 = 0LL;
  *(_QWORD *)v30 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v27);
  v8 = CoreUICreate(&v27);
  v7 = v8;
  if ( v8 < 0 )
  {
    v24 = (unsigned int)v8;
    v25 = 37LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursorno"
                    "tificationprocessor.cpp",
      (const char *)v24,
      (int)v26);
    goto LABEL_9;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v29,
    v27,
    v9);
  v10 = v27;
  v11 = *(__int64 (__fastcall **)(wil::details *, const wchar_t *, __int64 *))(*(_QWORD *)v27 + 80LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v28);
  v12 = v11(v10, L"Kernel\\MIT\\InputPort", &v28);
  v7 = v12;
  if ( v12 < 0 )
  {
    v24 = (unsigned int)v12;
    v25 = 41LL;
    goto LABEL_17;
  }
  v14 = v27;
  v15 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), CursorNotificationProcessor *, __int64))(*(_QWORD *)v27 + 104LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v29,
    v29,
    v13);
  v26 = v30;
  v16 = v15(v14, CursorNotificationProcessor::OnMitMessageReceived, this, v28);
  v7 = v16;
  if ( v16 < 0 )
  {
    v24 = (unsigned int)v16;
    v25 = 48LL;
    goto LABEL_17;
  }
  v17 = (*(__int64 (__fastcall **)(wil::details *, _QWORD, _BYTE *))(*(_QWORD *)v27 + 136LL))(v27, *(_QWORD *)v30, v31);
  v7 = v17;
  if ( v17 < 0 )
  {
    v24 = (unsigned int)v17;
    v25 = 52LL;
    goto LABEL_17;
  }
  v18 = NtMITCoreMsgKOpenConnectionTo(1LL, v31);
  v7 = v18 | 0x10000000;
  if ( v18 < 0 )
  {
    v24 = v7;
    v25 = 56LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<ICursorBroker>::operator=(this, a2);
  Microsoft::WRL::ComPtr<IMessageSession>::operator=((char *)this + 8, &v27);
  v19 = v28;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IMessagePort>::operator=((char *)this + 24, v19);
  v20 = *(_QWORD *)v30;
  *(_QWORD *)v30 = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v29,
    0LL,
    v21);
  *((_QWORD *)this + 4) = v20;
  v7 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v27);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v29,
    0LL,
    v22);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v28);
  return v7;
}
