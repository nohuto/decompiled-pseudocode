/*
 * XREFs of ??_GCompositionSurfaceBrush@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180046350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800680E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z @ 0x18007E1B0 (-SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::CompositionSurfaceBrush *__fastcall Windows::UI::Composition::CompositionSurfaceBrush::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionSurfaceBrush *this,
        char a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  __int64 v5; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v6; // rsi
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  __int64 v11; // rax
  HANDLE ProcessHeap; // rax

  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 36);
  if ( v4 )
  {
    *((_QWORD *)this + 36) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 216);
  *((_QWORD *)this + 26) = &Windows::UI::Composition::SurfaceBindPoint::`vftable';
  if ( *((_QWORD *)this + 27) )
  {
    *((_QWORD *)this + 28) = 0LL;
    Windows::UI::Composition::SurfaceBindPoint::SetSurface(
      (Windows::UI::Composition::CompositionSurfaceBrush *)((char *)this + 208),
      0LL);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 27);
    *((_QWORD *)this + 28) = 0LL;
  }
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 32);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = *((_QWORD *)this + 30);
  if ( v8 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v9 = *((_QWORD *)this + 29);
  if ( v9 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *v6;
  if ( *v6 )
  {
    *v6 = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  v11 = *((_QWORD *)this + 14);
  if ( (_UNKNOWN *)v11 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v11 + 4) && *(_BYTE *)(v11 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(*((void **)this + 14));
  }
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x130uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
