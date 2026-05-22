/*
 * XREFs of ?Close@?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@Windows@@QEAAXXZ @ 0x180116254
 * Callers:
 *     ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@23@V?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180117420 (-OnClose@-$AsyncOperation@U-$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composit.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>::Close(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (RTL_SRWLOCK *)(a1 + 32);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
  v3 = (__int64 *)(a1 + 16);
  v4 = 0LL;
  if ( &v8 != (__int64 *)(a1 + 16) )
  {
    v4 = *v3;
    *v3 = 0LL;
  }
  v8 = 0LL;
  v9 = v4;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v8);
  v5 = (__int64 *)(a1 + 24);
  v6 = 0LL;
  if ( &v8 != v5 )
  {
    v6 = *v5;
    *v5 = 0LL;
  }
  ReleaseSRWLockExclusive(v1);
  result = Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return result;
}
