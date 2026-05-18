/*
 * XREFs of ??0CreateTextureContext@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAA@AEBU01234@@Z @ 0x1800D5864
 * Callers:
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext *__fastcall Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext::CreateTextureContext(
        Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext *this,
        const struct Spectre::Engine::D3D11::DepthBufferD3D11::CreateTextureContext *a2)
{
  char *v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, char *); // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  *((_BYTE *)this + 6) = *((_BYTE *)a2 + 6);
  v3 = (char *)this + 8;
  *((_QWORD *)this + 8) = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, char *))*((_QWORD *)a2 + 8);
  if ( v4 )
    *((_QWORD *)v3 + 7) = (**v4)(v4, v3);
  return this;
}
