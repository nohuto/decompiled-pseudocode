/*
 * XREFs of ??_EKeyFrameAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180053640
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAXPEAUObjectPropertyStringTuple@@QEAU1@AEAV?$allocator@UObjectPropertyStringTuple@@@0@@Z @ 0x180046D78 (--$_Destroy_range@V-$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAXPEAUObjectPropertyStri.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 *     ??R?$default_delete@VKeyFrameAnimationResources@Composition@UI@Windows@@@std@@QEBAXPEAVKeyFrameAnimationResources@Composition@UI@Windows@@@Z @ 0x1801610D4 (--R-$default_delete@VKeyFrameAnimationResources@Composition@UI@Windows@@@std@@QEBAXPEAVKeyFrameA.c)
 */

Windows::UI::Composition::KeyFrameAnimator *__fastcall Windows::UI::Composition::KeyFrameAnimator::`vector deleting destructor'(
        Windows::UI::Composition::KeyFrameAnimator *this,
        char a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  volatile signed __int32 **v7; // rsi
  HSTRING *v8; // rcx
  __int64 v9; // rax
  HANDLE ProcessHeap; // rax
  volatile signed __int32 **i; // rbp
  volatile signed __int32 *v13; // rcx

  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 43);
  if ( v3 )
  {
    *((_QWORD *)this + 43) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  v5 = *((_QWORD *)this + 41);
  if ( v5 )
    std::default_delete<Windows::UI::Composition::KeyFrameAnimationResources>::operator()();
  v6 = *((_QWORD *)this + 40);
  if ( v6 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (volatile signed __int32 **)*((_QWORD *)this + 32);
  if ( v7 )
  {
    for ( i = (volatile signed __int32 **)*((_QWORD *)this + 33); v7 != i; ++v7 )
    {
      v13 = *v7;
      if ( *v7 )
      {
        *v7 = 0LL;
        if ( _InterlockedExchangeAdd(v13 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(v5) = 1;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 64LL))(v13, v5);
        }
      }
    }
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 32),
      (*((_QWORD *)this + 34) - *((_QWORD *)this + 32)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  if ( *((_QWORD *)this + 30) || *((_QWORD *)this + 31) || *((_QWORD *)this + 28) || *((_QWORD *)this + 29) )
    Microsoft::WRL2::FailFast::Do();
  v8 = (HSTRING *)*((_QWORD *)this + 25);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<ObjectPropertyStringTuple>>(v8, *((HSTRING **)this + 26));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 25),
      8 * ((__int64)(*((_QWORD *)this + 27) - *((_QWORD *)this + 25)) >> 3));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  v9 = *((_QWORD *)this + 14);
  if ( (_UNKNOWN *)v9 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v9 + 4) && *(_BYTE *)(v9 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(*((void **)this + 14));
  }
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x188uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
