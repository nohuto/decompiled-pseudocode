/*
 * XREFs of ??_ECompositionSurfaceWrapper@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800611B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ @ 0x180055764 (--1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

Windows::UI::Composition::CompositionSurfaceWrapper *__fastcall Windows::UI::Composition::CompositionSurfaceWrapper::`vector deleting destructor'(
        Windows::UI::Composition::CompositionSurfaceWrapper *this,
        __int64 a2)
{
  char v3; // di
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  volatile signed __int32 *v10; // rcx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)this = &Windows::UI::Composition::BindableSurface::`vftable';
  v5 = (void *)*((_QWORD *)this + 16);
  if ( v5 != *((void **)this + 17) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 18) - (_QWORD)v5;
    v14 = (void *)*((_QWORD *)this + 16);
    v7 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
    v13 = v7;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v14, &v13);
      v7 = v13;
      v5 = v14;
    }
    operator delete(v5, v7);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  v8 = *((_QWORD *)this + 14);
  if ( (_UNKNOWN *)v8 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v8 + 4) && *(_BYTE *)(v8 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(*((void **)this + 14));
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
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 64LL))(v10, a2);
  }
  *((_QWORD *)this + 3) = 0LL;
  Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass(this);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
    {
      __global_delete(this, 0xC0uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
