/*
 * XREFs of ??_GConditionalExpressionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180161AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ @ 0x180161958 (--1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::ConditionalExpressionAnimator *__fastcall Windows::UI::Composition::ConditionalExpressionAnimator::`scalar deleting destructor'(
        Windows::UI::Composition::ConditionalExpressionAnimator *this,
        char a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 38);
  if ( v4 )
  {
    *((_QWORD *)this + 38) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  Windows::UI::Composition::CompositionPropertyAnimator::~CompositionPropertyAnimator(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
