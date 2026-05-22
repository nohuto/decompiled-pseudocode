/*
 * XREFs of ??_GInteropVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18007C990
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAA@XZ @ 0x1800A3E64 (--1-$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

Windows::UI::Composition::InteropVisual *__fastcall Windows::UI::Composition::InteropVisual::`scalar deleting destructor'(
        Windows::UI::Composition::InteropVisual *this,
        char a2)
{
  __int64 v4; // rdx
  char *v5; // rcx
  __int64 v6; // rax
  void *v7; // rdi
  HANDLE ProcessHeap; // rax
  int v9; // eax
  volatile signed __int32 *v10; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v11; // rcx
  HANDLE v12; // rax

  InteropProxyRef<IDCompositionVisualRestricted>::~InteropProxyRef<IDCompositionVisualRestricted>((char *)this + 312);
  v5 = (char *)*((_QWORD *)this + 36);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  v6 = *((_QWORD *)this + 14);
  if ( (_UNKNOWN *)v6 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v6 + 4) && *(_BYTE *)(v6 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    v7 = (void *)*((_QWORD *)this + 14);
    if ( v7 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v7);
    }
  }
  *(_QWORD *)this = &Microsoft::WRL2::ContextRuntimeClass::`vftable';
  v9 = *((_DWORD *)this + 8);
  if ( (v9 & 1) != 0 || (v9 & 2) != 0 || (v9 & 4) != 0 || (v9 & 8) != 0 || (v9 & 0x10) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Destructor preconditions");
  if ( (v9 & 0x80u) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Protected");
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v10 != (volatile signed __int32 *)this && _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 64LL))(v10, v4);
  }
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
  if ( *((_DWORD *)this + 4) )
    RaiseFailFastException(0LL, 0LL, 0);
  v11 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)this + 4) = -1073741823;
  if ( v11 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x148uLL);
    }
    else
    {
      v12 = GetProcessHeap();
      HeapFree(v12, 0, this);
    }
  }
  return this;
}
