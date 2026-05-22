/*
 * XREFs of ??_ECompositionMaskBrush@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800801D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionMaskBrush *__fastcall Windows::UI::Composition::CompositionMaskBrush::`vector deleting destructor'(
        Windows::UI::Composition::CompositionMaskBrush *this,
        __int64 a2)
{
  char v3; // di
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx
  __int64 v6; // rax
  HANDLE ProcessHeap; // rax

  v3 = a2;
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 22);
  if ( v4 )
  {
    *((_QWORD *)this + 22) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 21);
  if ( v5 )
  {
    *((_QWORD *)this + 21) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  v6 = *((_QWORD *)this + 14);
  if ( (_UNKNOWN *)v6 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v6 + 4) && *(_BYTE *)(v6 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(*((void **)this + 14));
  }
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, a2);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
    {
      __global_delete(this, 0xB8uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
