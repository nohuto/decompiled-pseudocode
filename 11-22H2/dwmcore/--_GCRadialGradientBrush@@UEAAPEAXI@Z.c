/*
 * XREFs of ??_GCRadialGradientBrush@@UEAAPEAXI@Z @ 0x1801C38A0
 * Callers:
 *     ??_ECRadialGradientBrush@@WFI@EAAPEAXI@Z @ 0x18011BD60 (--_ECRadialGradientBrush@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1800B6634 (--1CGradientBrush@@MEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800FE26C (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CRadialGradientBrush *__fastcall CRadialGradientBrush::`scalar deleting destructor'(
        CRadialGradientBrush *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 29);
  if ( v4 )
    CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v4);
  CGradientBrush::~CGradientBrush((struct CResource **)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
