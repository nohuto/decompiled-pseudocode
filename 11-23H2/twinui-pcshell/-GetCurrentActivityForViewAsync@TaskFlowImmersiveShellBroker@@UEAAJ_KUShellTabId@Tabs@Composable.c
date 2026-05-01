/*
 * XREFs of ?GetCurrentActivityForViewAsync@TaskFlowImmersiveShellBroker@@UEAAJ_KUShellTabId@Tabs@ComposableShell@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@6@@Z @ 0x18049DD80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Internal::ComTaskPoolHandler__lambda_6084a6cce004fd5fee81c22a52dae34d___ @ 0x18049A1F8 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Inte.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskFlowImmersiveShellBroker::GetCurrentActivityForViewAsync(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 *a4)
{
  __int64 v7; // rbx
  __int128 v8; // xmm0
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h] BYREF
  __int128 v18; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    if ( *(_DWORD *)(a1 + 176) != 1 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x187,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)0x80004004LL,
        v14);
    v7 = *(_QWORD *)(a1 + 184);
    v15 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *a3;
    if ( v7 )
    {
      v10 = *(_QWORD *)v7;
      v16 = *a3;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(v10 + 72))(v7, a2, &v16, a4);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1A4,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v11,
          v14);
    }
    else
    {
      v17 = a2;
      v18 = v8;
      *(_QWORD *)&v16 = 0x8000000003LL;
      DWORD2(v16) = 0;
      v9 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Internal::ComTaskPoolHandler__lambda_6084a6cce004fd5fee81c22a52dae34d___(
             (__int64)&v16,
             a4,
             (__int64)a3,
             (__int64)&v17);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1A0,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v9,
          v14);
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A9,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v12);
  }
  return result;
}
