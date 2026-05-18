/*
 * XREFs of ?SetGlobalMaterialEnabled@MeshInstance@Engine@Spectre@@SAX_K_N@Z @ 0x18004C960
 * Callers:
 *     ?UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006A614 (-UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::MeshInstance::SetGlobalMaterialEnabled(unsigned __int64 a1, char a2)
{
  int v2; // eax

  if ( a1 < 0x20 )
  {
    v2 = 1 << a1;
    if ( a2 )
      dword_1801D2B68 |= v2;
    else
      dword_1801D2B68 &= ~v2;
  }
}
