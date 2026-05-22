/*
 * XREFs of ??_GComponentTransform2D@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180062080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

void **__fastcall Windows::UI::Composition::ComponentTransform2D::`scalar deleting destructor'(void **this, char a2)
{
  __int64 v4; // rdx

  *this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage(this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass((Microsoft::WRL2::ContextRuntimeClass *)this, v4);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xD0uLL);
    else
      operator delete(this);
  }
  return this;
}
