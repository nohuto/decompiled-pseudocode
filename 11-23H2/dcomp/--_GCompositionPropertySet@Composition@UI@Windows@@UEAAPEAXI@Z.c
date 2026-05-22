/*
 * XREFs of ??_GCompositionPropertySet@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800587A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ @ 0x180055764 (--1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

Windows::UI::Composition::CompositionPropertySet *__fastcall Windows::UI::Composition::CompositionPropertySet::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionPropertySet *this,
        __int64 a2)
{
  void *v2; // rdi
  char v3; // si
  HANDLE ProcessHeap; // rax
  void *v6; // rdi
  HANDLE v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  volatile signed __int32 *v11; // rcx
  HANDLE v12; // rax

  v2 = (void *)*((_QWORD *)this + 30);
  v3 = a2;
  if ( v2 != *((void **)this + 31) )
  {
    if ( v2 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *((_QWORD *)this + 30) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 26);
  if ( v6 != *((void **)this + 27) )
  {
    if ( v6 )
    {
      v7 = GetProcessHeap();
      HeapFree(v7, 0, v6);
    }
    *((_QWORD *)this + 26) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 22);
  if ( v8 != *((void **)this + 23) )
  {
    operator delete(v8);
    *((_QWORD *)this + 22) = 0LL;
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  v9 = *((_QWORD *)this + 14);
  if ( (_UNKNOWN *)v9 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v9 + 4) && *(_BYTE *)(v9 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(*((void **)this + 14));
  }
  *(_QWORD *)this = &Microsoft::WRL2::ContextRuntimeClass::`vftable';
  v10 = *((_DWORD *)this + 8);
  if ( (v10 & 1) != 0 || (v10 & 2) != 0 || (v10 & 4) != 0 || (v10 & 8) != 0 || (v10 & 0x10) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Destructor preconditions");
  if ( (v10 & 0x80u) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Protected");
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v11 != (volatile signed __int32 *)this && _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 64LL))(v11, a2);
  }
  *((_QWORD *)this + 3) = 0LL;
  Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass(this);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
    {
      __global_delete(this, 0x110uLL);
    }
    else
    {
      v12 = GetProcessHeap();
      HeapFree(v12, 0, this);
    }
  }
  return this;
}
