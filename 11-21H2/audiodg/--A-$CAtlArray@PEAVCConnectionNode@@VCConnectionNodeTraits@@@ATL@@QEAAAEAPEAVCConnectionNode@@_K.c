/*
 * XREFs of ??A?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAAEAPEAVCConnectionNode@@_K@Z @ 0x140068978
 * Callers:
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14000CCB0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::operator[](_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    ATL::AtlThrowImpl(-2147024809);
  return *a1 + 8 * a2;
}
