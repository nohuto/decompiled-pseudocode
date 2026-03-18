/*
 * XREFs of ??1CHolographicManager@@EEAA@XZ @ 0x180294DC4
 * Callers:
 *     ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x180294ED0 (--_ECHolographicManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCHolographicInteropTaskQueue@@@@YAXAEAPEAVCHolographicInteropTaskQueue@@@Z @ 0x180294AE4 (--$ReleaseInterface@VCHolographicInteropTaskQueue@@@@YAXAEAPEAVCHolographicInteropTaskQueue@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180294B20 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802964F4 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 */

void __fastcall CHolographicManager::~CHolographicManager(CHolographicManager *this)
{
  volatile signed __int32 *v2; // rcx
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  CResource **v6; // rcx

  *(_QWORD *)this = &CHolographicManager::`vftable'{for `IHolographicManager'};
  *((_QWORD *)this + 1) = &CHolographicManager::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
    *((_QWORD *)this + 5) = 0LL;
    ReleaseInterface<CHolographicInteropTaskQueue>((__int64 *)this + 6);
    ReleaseInterface<CHolographicInteropTaskQueue>((__int64 *)this + 7);
    v3 = DisplayId::None;
    *(_QWORD *)((char *)this + 68) = 0LL;
    *((_DWORD *)this + 16) = v3;
  }
  CHolographicManager::ReleaseInteropRenderTarget(this);
  v4 = (void *)*((_QWORD *)this + 29);
  if ( v4 )
    CloseHandle(v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 25);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 21);
  v5 = (void *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 20) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 14);
  v6 = (CResource **)*((_QWORD *)this + 10);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
      v6,
      *((CResource ***)this + 11));
    std::_Deallocate<16,0>(
      *((void **)this + 10),
      (*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
}
