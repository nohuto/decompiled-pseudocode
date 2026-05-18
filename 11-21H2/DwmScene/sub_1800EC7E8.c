/*
 * XREFs of sub_1800EC7E8 @ 0x1800EC7E8
 * Callers:
 *     sub_1800EC8D0 @ 0x1800EC8D0 (sub_1800EC8D0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_1800EC7E8(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx

  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  v2 = a1[16];
  if ( v2 )
  {
    a1[16] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[15];
  if ( v3 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[14];
  if ( v4 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  sub_180010910((__int64)(a1 + 12));
  v5 = (volatile signed __int32 *)a1[10];
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  return sub_18002B404((__int64)a1);
}
