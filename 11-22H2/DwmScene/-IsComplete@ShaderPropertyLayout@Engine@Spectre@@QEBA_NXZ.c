/*
 * XREFs of ?IsComplete@ShaderPropertyLayout@Engine@Spectre@@QEBA_NXZ @ 0x180083108
 * Callers:
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::ShaderPropertyLayout::IsComplete(Spectre::Engine::ShaderPropertyLayout *this)
{
  return *((_DWORD *)this + 292) == 1;
}
