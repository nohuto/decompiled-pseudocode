/*
 * XREFs of ?GetGlobalMaterialEnabled@MeshInstance@Engine@Spectre@@SA_N_K@Z @ 0x18004B944
 * Callers:
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::MeshInstance::GetGlobalMaterialEnabled(unsigned __int64 a1)
{
  bool result; // al

  result = 1;
  if ( a1 < 0x20 )
    return ((1 << a1) & dword_1801D2B68) != 0;
  return result;
}
