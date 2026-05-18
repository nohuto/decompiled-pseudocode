/*
 * XREFs of ??$_Atomic_reinterpret_as@D_N@std@@YADAEB_N@Z @ 0x18003F1C8
 * Callers:
 *     ?UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z @ 0x180042654 (-UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z.c)
 *     ?store@?$_Atomic_storage@_N$00@std@@QEAAX_N@Z @ 0x180042D30 (-store@-$_Atomic_storage@_N$00@std@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Atomic_reinterpret_as<char,bool>(__int64 a1)
{
  return *(_BYTE *)a1;
}
