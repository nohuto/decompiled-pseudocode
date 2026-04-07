/*
 * XREFs of ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800E8AC0
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800AF2CC (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x18001E800 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTouchPressHoldVisual::Initialize(CTouchPressHoldVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rax

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_DWORD *)this + 76) = 0;
    *((_DWORD *)this + 80) = 90;
    *((_DWORD *)this + 79) = 90;
    v4 = *(_QWORD *)((char *)this + 316);
    *(_QWORD *)((char *)this + 332) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 45) = 0LL;
    *(_QWORD *)((char *)this + 324) = v4;
    *((_DWORD *)this + 85) = 100;
    CVisual::SetOpacity(this, 0.0);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x24u);
  }
  return v3;
}
