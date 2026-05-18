/*
 * XREFs of ?GetThreadingMode@Lockable@Engine@Spectre@@QEBA?AW4ThreadingMode@123@XZ @ 0x18002A254
 * Callers:
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 *     ?HasReadAccess@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A270 (-HasReadAccess@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasWriteAccess@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A2C4 (-HasWriteAccess@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ??0IRenderOutput@Engine@Spectre@@IEAA@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18002B3C4 (--0IRenderOutput@Engine@Spectre@@IEAA@V-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ??0Scene@Engine@Spectre@@AEAA@PEAV112@@Z @ 0x18003FB60 (--0Scene@Engine@Spectre@@AEAA@PEAV112@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Lockable::GetThreadingMode(__int64 a1)
{
  return *(unsigned int *)(a1 + 24);
}
