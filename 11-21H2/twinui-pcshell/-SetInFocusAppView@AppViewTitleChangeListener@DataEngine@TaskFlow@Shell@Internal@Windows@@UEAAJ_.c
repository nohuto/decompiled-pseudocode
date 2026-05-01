/*
 * XREFs of ?SetInFocusAppView@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K@Z @ 0x18013FE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::SetInFocusAppView(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdi
  void **v6; // rbx
  unsigned __int64 v7; // rdx
  void *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  void *v12; // [rsp+28h] [rbp-40h] BYREF
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-38h] BYREF
  void *v14; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-18h]

  v4 = (RTL_SRWLOCK *)((char *)this + 72);
  AcquireSRWLockExclusive((PSRWLOCK)this + 9);
  v13 = v4;
  *((_QWORD *)this + 10) = a2;
  v5 = (*(__int64 (__fastcall **)(char *, void **, __int64))(*((_QWORD *)this - 3) + 72LL))((char *)this - 24, &v14, a2);
  v6 = (void **)((char *)this + 88);
  if ( (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)((char *)this + 88) != (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)v5 )
  {
    v7 = *((_QWORD *)this + 14);
    if ( v7 >= 8 )
    {
      v8 = *v6;
      v9 = 2 * v7 + 2;
      v11 = v9;
      v12 = v8;
      if ( v9 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v12, &v11);
        v9 = v11;
        v8 = v12;
      }
      operator delete(v8, v9);
    }
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 7LL;
    *(_WORD *)v6 = 0;
    *(_OWORD *)v6 = *(_OWORD *)v5;
    *(_OWORD *)((char *)this + 104) = *(_OWORD *)(v5 + 16);
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 7LL;
    *(_WORD *)v5 = 0;
  }
  if ( v15 >= 8 )
    std::_Deallocate<16,0>(v14, 2 * v15 + 2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
  return 0LL;
}
