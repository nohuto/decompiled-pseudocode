/*
 * XREFs of ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x1800438D8
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180044794 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044CFC (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UICursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAUICursorBroker@@@Z @ 0x180044D9C (--4-$ComPtr@UICursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAUICursorBroker@@@Z.c)
 *     ??4?$ComPtr@UIMessagePort@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessagePort@@@Z @ 0x180044DFC (--4-$ComPtr@UIMessagePort@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessagePort@@@Z.c)
 *     ?InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ @ 0x180044FC0 (-InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004CC48 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorNotificationProcessor::Initialize(CursorNotificationProcessor *this, struct ICursorBroker *a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  SystemCursorController2 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, const wchar_t *, __int64 *); // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 (__fastcall *)(void *, const void *, int), CursorNotificationProcessor *, __int64, int *); // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  int v22[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v23[40]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( !IsEdition(253345LL) )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v5 = (SystemCursorController2 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                     + 31)
                                                                                   + 8LL)
                                                                       + 232LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    v6 = SystemCursorController2::InitializeDesktopCursorService(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotif"
                 "icationprocessor.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  v20 = 0LL;
  v21 = 0LL;
  *(_QWORD *)v22 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v19);
  v8 = CoreUICreate(&v19);
  v7 = v8;
  if ( v8 < 0 )
  {
    v17 = 37LL;
LABEL_15:
    v18 = (unsigned int)v8;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)v18);
    goto LABEL_9;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v21,
    v19);
  v9 = v19;
  v10 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)v19 + 80LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v20);
  v8 = v10(v9, L"Kernel\\MIT\\InputPort", &v20);
  v7 = v8;
  if ( v8 < 0 )
  {
    v17 = 41LL;
    goto LABEL_15;
  }
  v11 = v19;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), CursorNotificationProcessor *, __int64, int *))(*(_QWORD *)v19 + 104LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v21,
    v21);
  v8 = v12(v11, CursorNotificationProcessor::OnMitMessageReceived, this, v20, v22);
  v7 = v8;
  if ( v8 < 0 )
  {
    v17 = 48LL;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v19 + 136LL))(v19, *(_QWORD *)v22, v23);
  v7 = v8;
  if ( v8 < 0 )
  {
    v17 = 52LL;
    goto LABEL_15;
  }
  v13 = NtMITCoreMsgKOpenConnectionTo(0LL, v23);
  v7 = v13 | 0x10000000;
  if ( v13 < 0 )
  {
    v18 = v7;
    v17 = 56LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<ICursorBroker>::operator=(this, a2);
  Microsoft::WRL::ComPtr<IMessageSession>::operator=((char *)this + 8, &v19);
  v14 = v20;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IMessagePort>::operator=((char *)this + 24, v14);
  v15 = *(_QWORD *)v22;
  *(_QWORD *)v22 = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v21,
    0LL);
  *((_QWORD *)this + 4) = v15;
  v7 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v19);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v21,
    0LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v20);
  return v7;
}
