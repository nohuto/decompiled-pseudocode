/*
 * XREFs of ??_GConditionalExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18011CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x1800603E4 (--1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Windows::UI::Composition::ConditionalExpressionAnimation::`scalar deleting destructor'(
        Microsoft::WRL2::NestableRuntimeClass **this,
        char a2)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 45);
  Windows::UI::Composition::CompositionAnimation::~CompositionAnimation((Windows::UI::Composition::CompositionAnimation *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
