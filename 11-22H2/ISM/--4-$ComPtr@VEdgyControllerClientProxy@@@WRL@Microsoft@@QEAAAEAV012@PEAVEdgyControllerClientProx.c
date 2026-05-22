/*
 * XREFs of ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVEdgyControllerClientProxy@@@Z @ 0x1801D6C78
 * Callers:
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801D7D0C (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A998C (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (**(void (__fastcall ***)(__int64))(a2 + 16))(a2 + 16);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v5);
  }
  return a1;
}
