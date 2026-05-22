/*
 * XREFs of ??_GInteropRedirectVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18015B570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAA@XZ @ 0x1800A3E64 (--1-$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAA@XZ.c)
 */

Windows::UI::Composition::InteropRedirectVisual *__fastcall Windows::UI::Composition::InteropRedirectVisual::`scalar deleting destructor'(
        Windows::UI::Composition::InteropRedirectVisual *this,
        char a2)
{
  char *v4; // rcx
  __int64 v5; // rdx

  InteropProxyRef<IDCompositionVisualRestricted>::~InteropProxyRef<IDCompositionVisualRestricted>((volatile __int64 *)this + 39);
  v4 = (char *)*((_QWORD *)this + 36);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
