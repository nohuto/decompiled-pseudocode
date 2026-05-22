/*
 * XREFs of ??_EVisualCollection@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180053500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

Windows::UI::Composition::VisualCollection *__fastcall Windows::UI::Composition::VisualCollection::`vector deleting destructor'(
        Windows::UI::Composition::VisualCollection *this,
        __int64 a2)
{
  volatile signed __int32 *v3; // rcx
  char v4; // si
  __int64 v5; // rax
  int v6; // eax
  volatile signed __int32 *v7; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  HANDLE ProcessHeap; // rax

  v3 = (volatile signed __int32 *)*((_QWORD *)this + 19);
  v4 = a2;
  if ( v3 )
  {
    *((_QWORD *)this + 19) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 64LL))(v3, a2);
    }
  }
  v5 = *((_QWORD *)this + 14);
  if ( (_UNKNOWN *)v5 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v5 + 4) && *(_BYTE *)(v5 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(*((void **)this + 14));
  }
  *(_QWORD *)this = &Microsoft::WRL2::ContextRuntimeClass::`vftable';
  v6 = *((_DWORD *)this + 8);
  if ( (v6 & 1) != 0 || (v6 & 2) != 0 || (v6 & 4) != 0 || (v6 & 8) != 0 || (v6 & 0x10) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Destructor preconditions");
  if ( (v6 & 0x80u) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Protected");
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v7 != (volatile signed __int32 *)this && _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 64LL))(v7, a2);
  }
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
  if ( *((_DWORD *)this + 4) )
    RaiseFailFastException(0LL, 0LL, 0);
  v8 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)this + 4) = -1073741823;
  if ( v8 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
    {
      __global_delete(this, 0xA0uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
