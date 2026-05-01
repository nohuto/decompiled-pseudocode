/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::Invoke @ 0x1803063D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::Invoke(__int64 a1)
{
  __int64 v1; // rdi
  int (__fastcall *v2)(__int64, __int64 *); // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 144LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v4);
  if ( v2(v1, &v4) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 88LL))(v4, 64LL, 64LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v4);
  return 0LL;
}
