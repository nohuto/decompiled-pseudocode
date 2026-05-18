/*
 * XREFs of ?SetFramingRadius@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180093064
 * Callers:
 *     ?UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@_N1@Z @ 0x18006B874 (-UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VViewerCa.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ViewerCamera::SetFramingRadius(Spectre::Engine::ViewerCamera *this, float a2)
{
  *((float *)this + 453) = a2;
}
