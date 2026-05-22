/*
 * XREFs of ??_GInteropVisualReferenceController@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18015C380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@V?$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C038 (-InternalRelease@-$ComPtr@V-$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IE.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::InteropVisualReferenceController *__fastcall Windows::UI::Composition::InteropVisualReferenceController::`scalar deleting destructor'(
        Windows::UI::Composition::InteropVisualReferenceController *this,
        char a2)
{
  __int64 v4; // rdx

  Microsoft::WRL::ComPtr<CWeakReference<Windows::UI::Composition::Visual>>::InternalRelease((CWeakReferenceBase **)this + 21);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v4);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
