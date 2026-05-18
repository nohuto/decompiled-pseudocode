/*
 * XREFs of ?ClearActiveRenderTargets@RenderTargetState@Engine@Spectre@@IEAAXXZ @ 0x18009F07C
 * Callers:
 *     ?Reset@RenderTargetState@Engine@Spectre@@UEAAXXZ @ 0x18009F110 (-Reset@RenderTargetState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall Spectre::Engine::RenderTargetState::ClearActiveRenderTargets(Spectre::Engine::RenderTargetState *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)((char *)this + 136);
  v3 = 8LL;
  do
  {
    *(_OWORD *)v4 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v2, (__int64 *)v4);
    if ( v4[1] )
      std::_Ref_count_base::_Decref(v4[1]);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)v4 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 51, (__int64 *)v4);
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
}
