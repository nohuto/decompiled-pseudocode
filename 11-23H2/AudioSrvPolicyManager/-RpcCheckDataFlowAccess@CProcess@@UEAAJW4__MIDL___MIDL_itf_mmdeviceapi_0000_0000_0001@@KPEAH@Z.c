/*
 * XREFs of ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x180029290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015BC0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001DFCC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B5E0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RpcCheckDataFlowAccess(
        CProcess *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        unsigned int a3,
        int *a4)
{
  int v6; // edi
  unsigned int v7; // ebx
  __int64 v9; // rsi
  HRESULT v10; // eax
  void *v11; // rdx
  unsigned int v12; // r8d
  int ActivationFactory; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // r14
  HRESULT v16; // eax
  IUnknown *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  int dwAuthnLevel; // [rsp+20h] [rbp-59h]
  int v21; // [rsp+40h] [rbp-39h] BYREF
  int v22[2]; // [rsp+48h] [rbp-31h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-21h]
  unsigned int v25; // [rsp+5Ch] [rbp-1Dh]
  ULONG (__stdcall *Release)(IUnknown *); // [rsp+60h] [rbp-19h]
  HSTRING string; // [rsp+68h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v24 = a3;
  v6 = 0;
  if ( a2 )
  {
    if ( a2 != eCapture )
    {
      v7 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC5,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)0x80070057LL);
      return v7;
    }
    v9 = 1LL;
  }
  else
  {
    v9 = 0LL;
    *((_DWORD *)this + 54) = 0;
  }
  if ( *((_DWORD *)this + v9 + 54) == -2147023728 )
  {
    v10 = CoInitializeEx(0LL, 0);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(retaddr, v11, v12, (const char *)(unsigned int)v10, dwAuthnLevel);
    pProxy = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.Internal.CapabilityAccess.CapabilityAccess",
           0x32u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &pProxy);
    v7 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAD8,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_28:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
      CoUninitialize();
      return v7;
    }
    v14 = RpcImpersonateClient(0LL);
    if ( v14 )
    {
      v7 = wil::details::in1diag3::Return_Win32(
             retaddr,
             2778LL,
             (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
             (const char *)v14);
      goto LABEL_28;
    }
    v15 = -1LL;
    v16 = CoSetProxyBlanket(
            pProxy,
            0xFFFFFFFF,
            0xFFFFFFFF,
            (OLECHAR *)0xFFFFFFFFFFFFFFFFLL,
            0,
            3u,
            (RPC_AUTH_IDENTITY_HANDLE)0xFFFFFFFFFFFFFFFFLL,
            0x40u);
    v7 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE4,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v16);
LABEL_27:
      RpcRevertToSelf();
      goto LABEL_28;
    }
    v17 = pProxy;
    Release = pProxy->lpVtbl[2].Release;
    *(_QWORD *)v22 = 0LL;
    v25 = *((_DWORD *)this + 40);
    do
      ++v15;
    while ( aMicrophone[v15] );
    if ( v15 > 0xFFFFFFFF )
    {
      LODWORD(v15) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(L"microphone", v15, &hstringHeader, &string);
    v18 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, _QWORD, _QWORD, int *))Release)(v17, string, v25, v24, v22);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 2794LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
      goto LABEL_27;
    }
    v21 = 3;
    v18 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v22 + 152LL))(*(_QWORD *)v22, &v21);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 2797LL;
      goto LABEL_26;
    }
    *((_DWORD *)this + v9 + 54) = v21 != 3 ? 0x887C0076 : 0;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
    RpcRevertToSelf();
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
    CoUninitialize();
  }
  if ( a4 )
  {
    LOBYTE(v6) = *((_DWORD *)this + v9 + 54) == 0;
    *a4 = v6;
  }
  return 0LL;
}
