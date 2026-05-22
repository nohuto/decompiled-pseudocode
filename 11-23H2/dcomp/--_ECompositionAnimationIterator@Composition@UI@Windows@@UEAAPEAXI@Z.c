/*
 * XREFs of ??_ECompositionAnimationIterator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801516F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Windows::UI::Composition::CompositionAnimationIterator::`vector deleting destructor'(
        Microsoft::WRL2::NestableRuntimeClass **this,
        char a2)
{
  __int64 v4; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 7);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass((Microsoft::WRL2::ContextRuntimeClass *)this, v4);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
