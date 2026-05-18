/*
 * XREFs of ?GetEngine@DeviceResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x180029560
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 */

struct Spectre::Engine::Engine *__fastcall Spectre::Engine::DeviceResource::GetEngine(
        Spectre::Engine::DeviceResource *this)
{
  struct Spectre::Engine::Engine *Engine; // rbx
  Spectre::Engine::RenderDevice *v3; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, &v3);
  Engine = Spectre::Engine::RenderDevice::GetEngine(v3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return Engine;
}
