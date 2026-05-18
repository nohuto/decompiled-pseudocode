/*
 * XREFs of ?SubmitScissorRect@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXJJJJ@Z @ 0x1800D1930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitScissorRect(
        Spectre::Engine::D3D11::CommandListD3D11 *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  __int64 v5; // rcx
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 18);
  v6[0] = a2;
  v6[2] = a4;
  v6[1] = a3;
  v6[3] = a5;
  (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v5 + 360LL))(v5, 1LL, v6);
}
