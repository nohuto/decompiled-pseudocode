/*
 * XREFs of ?GetResourceCount@Engine@1Spectre@@QEBA_KXZ @ 0x180034748
 * Callers:
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DetachDevice@Engine@1Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18003395C (-DetachDevice@Engine@1Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Engine::GetResourceCount(Spectre::Engine::Engine *this)
{
  return (__int64)(*((_QWORD *)this + 112) - *((_QWORD *)this + 111)) >> 4;
}
