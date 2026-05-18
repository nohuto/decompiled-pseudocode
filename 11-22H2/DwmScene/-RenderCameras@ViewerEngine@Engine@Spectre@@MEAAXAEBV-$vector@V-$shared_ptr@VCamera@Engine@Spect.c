/*
 * XREFs of ?RenderCameras@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067A60
 * Callers:
 *     <none>
 * Callees:
 *     ?RenderCamera@Camera@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BE8C (-RenderCamera@Camera@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@A.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

Spectre::Engine::Camera *__fastcall Spectre::Engine::ViewerEngine::RenderCameras(
        __int64 a1,
        Spectre::Engine::Camera ***a2,
        __int64 a3,
        __int64 a4)
{
  Spectre::Engine::Camera *result; // rax
  Spectre::Engine::Camera **v5; // rdi
  Spectre::Engine::Camera **i; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (Spectre::Engine::Camera *)&retaddr;
  v5 = a2[1];
  for ( i = *a2; i != v5; i += 2 )
  {
    result = *i;
    if ( *((_BYTE *)*i + 72) )
    {
      (*(void (__fastcall **)(__int64, Spectre::Engine::Camera **, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
        a1,
        i,
        a3,
        a4);
      result = (Spectre::Engine::Camera *)Spectre::Engine::Camera::RenderCamera(*i, a3, a4);
    }
  }
  return result;
}
