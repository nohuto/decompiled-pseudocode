/*
 * XREFs of ??_GPowerEasingFunction@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180010900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::PowerEasingFunction *__fastcall Windows::UI::Composition::PowerEasingFunction::`scalar deleting destructor'(
        Windows::UI::Composition::PowerEasingFunction *this,
        char a2)
{
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::PowerEasingFunction *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xB0uLL);
    else
      operator delete(this);
  }
  return this;
}
