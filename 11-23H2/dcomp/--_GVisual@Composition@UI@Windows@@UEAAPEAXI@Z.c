/*
 * XREFs of ??_GVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800121C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::Visual *__fastcall Windows::UI::Composition::Visual::`scalar deleting destructor'(
        Windows::UI::Composition::Visual *this,
        char a2)
{
  char *v4; // rcx

  v4 = (char *)*((_QWORD *)this + 36);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::Visual *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x128uLL);
    else
      operator delete(this);
  }
  return this;
}
