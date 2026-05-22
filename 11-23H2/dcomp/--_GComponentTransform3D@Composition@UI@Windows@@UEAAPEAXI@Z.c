/*
 * XREFs of ??_GComponentTransform3D@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180060640
 * Callers:
 *     <none>
 * Callees:
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::ComponentTransform3D *__fastcall Windows::UI::Composition::ComponentTransform3D::`scalar deleting destructor'(
        Windows::UI::Composition::ComponentTransform3D *this,
        char a2)
{
  __int64 v4; // rdx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::ComponentTransform3D *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v4);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x120uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
