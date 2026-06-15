/*
 * XREFs of ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x18001ACE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DDD0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RpcCheckDataFlowAccess(
        CProcess *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        unsigned int a3,
        int *a4)
{
  __int64 v5; // r15
  int v7; // edi
  unsigned int v8; // ebx
  __int64 v10; // r12
  HRESULT v11; // eax
  void *v12; // rdx
  unsigned int v13; // r8d
  int ActivationFactory; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rsi
  HRESULT v17; // eax
  IUnknown *v18; // rbx
  const WCHAR *v19; // rax
  int v20; // eax
  int v21; // eax
  int dwAuthnLevel; // [rsp+20h] [rbp-69h]
  IUnknown *pProxy; // [rsp+40h] [rbp-49h] BYREF
  int v24; // [rsp+48h] [rbp-41h] BYREF
  int v25[2]; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-31h]
  unsigned int v27; // [rsp+5Ch] [rbp-2Dh]
  const wchar_t *v28; // [rsp+60h] [rbp-29h]
  ULONG (__stdcall *Release)(IUnknown *); // [rsp+68h] [rbp-21h]
  HSTRING string; // [rsp+70h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v26 = a3;
  v5 = a2;
  v7 = 0;
  if ( a2 )
  {
    if ( a2 != eCapture )
    {
      v8 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC5,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)0x80070057LL);
      return v8;
    }
    v10 = 1LL;
  }
  else
  {
    *((_DWORD *)this + 54) = 0;
    v10 = 0LL;
  }
  if ( *((_DWORD *)this + v10 + 54) == -2147023728 )
  {
    v11 = CoInitializeEx(0LL, 0);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(retaddr, v12, v13, (const char *)(unsigned int)v11, dwAuthnLevel);
    pProxy = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.Internal.CapabilityAccess.CapabilityAccess",
           0x32u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &pProxy);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAD8,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)ActivationFactory);
      if ( pProxy )
        ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
LABEL_38:
      CoUninitialize();
      return v8;
    }
    v15 = RpcImpersonateClient(0LL);
    if ( v15 )
    {
      v8 = wil::details::in1diag3::Return_Win32(
             retaddr,
             2778LL,
             (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
             (const char *)v15);
      if ( pProxy )
        ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
      goto LABEL_38;
    }
    v16 = -1LL;
    v17 = CoSetProxyBlanket(
            pProxy,
            0xFFFFFFFF,
            0xFFFFFFFF,
            (OLECHAR *)0xFFFFFFFFFFFFFFFFLL,
            0,
            3u,
            (RPC_AUTH_IDENTITY_HANDLE)0xFFFFFFFFFFFFFFFFLL,
            0x40u);
    v8 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE4,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v17);
      RpcRevertToSelf();
      if ( pProxy )
        ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
      goto LABEL_38;
    }
    v18 = pProxy;
    Release = pProxy->lpVtbl[2].Release;
    *(_QWORD *)v25 = 0LL;
    v27 = *((_DWORD *)this + 40);
    v19 = L"microphone";
    v28 = L"microphone";
    do
      ++v16;
    while ( aMicrophone[v16] );
    if ( v16 > 0xFFFFFFFF )
    {
      LODWORD(v16) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
      v19 = v28;
    }
    WindowsCreateStringReference(v19, v16, &hstringHeader, &string);
    v20 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, _QWORD, _QWORD, int *))Release)(v18, string, v27, v26, v25);
    v8 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAEA,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v20);
      if ( *(_QWORD *)v25 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 16LL))(*(_QWORD *)v25);
      RpcRevertToSelf();
      if ( pProxy )
        ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
      goto LABEL_38;
    }
    v24 = 3;
    v21 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v25 + 136LL))(*(_QWORD *)v25, &v24);
    v8 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAED,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v21);
      if ( *(_QWORD *)v25 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 16LL))(*(_QWORD *)v25);
      RpcRevertToSelf();
      if ( pProxy )
        ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
      goto LABEL_38;
    }
    *((_DWORD *)this + v5 + 54) = v24 != 3 ? 0x887C0076 : 0;
    if ( *(_QWORD *)v25 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 16LL))(*(_QWORD *)v25);
    RpcRevertToSelf();
    if ( pProxy )
      ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
    CoUninitialize();
  }
  if ( a4 )
  {
    LOBYTE(v7) = *((_DWORD *)this + v10 + 54) == 0;
    *a4 = v7;
  }
  return 0LL;
}
