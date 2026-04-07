/*
 * XREFs of ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180050640
 * Callers:
 *     <none>
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x1800506A0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::SetParent(CTopLevelWindow3D *this, struct CVisual *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  int v9; // eax

  v4 = CVisual::SetParent(this, a2);
  v7 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x8BDu, 0LL);
  }
  else if ( !a2 )
  {
    v9 = CTopLevelWindow3D::StopAnimation(this, v5, v6);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8C2u, 0LL);
  }
  return v7;
}
