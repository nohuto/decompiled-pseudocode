/*
 * XREFs of ?SetFramingPosition@ViewerCamera@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180093040
 * Callers:
 *     ?UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@_N1@Z @ 0x18006B874 (-UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VViewerCa.c)
 *     ?SetPointOfInterest@ViewerCamera@Engine@Spectre@@UEAAXAEBUVector3@Math@Utils@3@@Z @ 0x1800930D0 (-SetPointOfInterest@ViewerCamera@Engine@Spectre@@UEAAXAEBUVector3@Math@Utils@3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ViewerCamera::SetFramingPosition(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[450] = *a2;
  a1[451] = a2[1];
  result = (unsigned int)a2[2];
  a1[452] = result;
  return result;
}
