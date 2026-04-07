/*
 * XREFs of ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180038BA0
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x180038ADC (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180038BD8 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::Initialize(CTopLevelWindow3D *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x42u);
  else
    CVisual::DisablePrefiltering(this);
  return v3;
}
