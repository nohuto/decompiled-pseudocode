/*
 * XREFs of ?SubmitViewport@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXMMMMMM@Z @ 0x1800D34D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitViewport(
        Spectre::Engine::D3D11::CommandListD3D11 *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  __int64 v7; // rcx
  _DWORD v8[6]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *((_QWORD *)this + 18);
  *(float *)&v8[3] = a5;
  *(float *)v8 = a2;
  *(float *)&v8[5] = a7;
  *(float *)&v8[1] = a3;
  *(float *)&v8[2] = a4;
  *(float *)&v8[4] = a6;
  (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v7 + 352LL))(v7, 1LL, v8);
}
