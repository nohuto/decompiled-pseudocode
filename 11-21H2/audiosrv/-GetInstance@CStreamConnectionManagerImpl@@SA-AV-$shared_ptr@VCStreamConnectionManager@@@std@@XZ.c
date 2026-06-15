/*
 * XREFs of ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180043B14
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180050BC0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180025C8C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$?0$$V@?$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ @ 0x180043C68 (--$-0$$V@-$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800443EC (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
RTL_SRWLOCK *__fastcall CStreamConnectionManagerImpl::GetInstance(RTL_SRWLOCK *a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rsi
  LPVOID v4; // rax
  __int64 v5; // rbx
  std::_Ref_count_base *v6; // rdi
  CMonitorManager *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  volatile signed __int32 *v9; // rdi
  std::_Ref_count_base *v10; // rcx
  volatile signed __int32 *v11; // rax
  std::_Ref_count_base *v12; // rcx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  std::_Ref_count_base *v16[2]; // [rsp+20h] [rbp-20h]
  RTL_SRWLOCK *v17; // [rsp+60h] [rbp+20h] BYREF
  LPVOID v18; // [rsp+68h] [rbp+28h]

  v17 = a1;
  AcquireSRWLockExclusive(&CStreamConnectionManagerImpl::s_instanceLock);
  v17 = &CStreamConnectionManagerImpl::s_instanceLock;
  *(_OWORD *)v16 = 0LL;
  v2 = *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
  if ( *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) )
  {
    v14 = *(_DWORD *)(*((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) + 8LL);
    while ( v14 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v14 + 1, v14);
      if ( v15 == v14 )
      {
        *(_OWORD *)v16 = CStreamConnectionManagerImpl::s_weakSelf;
        break;
      }
    }
  }
  v3 = v16[0];
  if ( v16[0] )
  {
    v9 = (volatile signed __int32 *)v16[1];
  }
  else
  {
    v4 = operator new(0x20uLL);
    v18 = v4;
    if ( v4 )
      v5 = std::_Ref_count_obj2<CStreamConnectionManagerImpl>::_Ref_count_obj2<CStreamConnectionManagerImpl>(v4);
    else
      v5 = 0LL;
    v6 = (std::_Ref_count_base *)(v5 + 16);
    v7 = *(CMonitorManager **)(v5 + 24);
    if ( v7 && (int)CMonitorManager::Initialize(v7, 0x12u, 9uLL, &dword_18017DEF0) >= 0 )
    {
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        v6 = (std::_Ref_count_base *)(v5 + 16);
      }
      v3 = v6;
      v16[0] = v6;
      v8 = v16[1];
      v9 = (volatile signed __int32 *)v5;
      v16[1] = (std::_Ref_count_base *)v5;
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
    }
    else
    {
      v9 = (volatile signed __int32 *)v16[1];
    }
    v10 = 0LL;
    v11 = 0LL;
    if ( v9 )
    {
      v10 = v3;
      v11 = v9;
      _InterlockedIncrement(v9 + 3);
      v9 = (volatile signed __int32 *)v16[1];
      v3 = v16[0];
    }
    *(_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf = v10;
    v12 = (std::_Ref_count_base *)*((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
    *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) = v11;
    if ( v12 )
      std::_Ref_count_base::_Decwref(v12);
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
  a1->Ptr = v3;
  a1[1].Ptr = (PVOID)v9;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
  return a1;
}
