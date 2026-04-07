/*
 * XREFs of ?IsInLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z @ 0x180037F2C
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180037D70 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLivePreview::IsInLivePreview(CLivePreview *this, struct CWindowData *a2)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 288) )
  {
    if ( a2 )
      return CLivePreview::_IsInLivePreview(this, a2);
  }
  return result;
}
