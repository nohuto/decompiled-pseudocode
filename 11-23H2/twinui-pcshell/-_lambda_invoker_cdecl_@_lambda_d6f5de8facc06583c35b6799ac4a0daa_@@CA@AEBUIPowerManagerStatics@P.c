/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@CA@AEBUIPowerManagerStatics@Power@System@Windows@winrt@@@Z @ 0x18022E4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall _lambda_d6f5de8facc06583c35b6799ac4a0daa_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::System::Power::IPowerManagerStatics *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 96LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
