/*
 * XREFs of sub_1800EB0EC @ 0x1800EB0EC
 * Callers:
 *     sub_1800D8C4C @ 0x1800D8C4C (sub_1800D8C4C.c)
 *     sub_1800D99C0 @ 0x1800D99C0 (sub_1800D99C0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800EB0EC(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  v2 = a1[13];
  if ( v2 )
  {
    a1[13] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return sub_18009A1C8(a1);
}
