/*
 * XREFs of ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18005A168
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180059A30 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18004B0A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ @ 0x18005A3A0 (--$-0$$V@-$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A578 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 */

// Hidden C++ exception states: #wind=4
std::_Ref_count_base **__fastcall CStreamConnectionManagerImpl::GetInstance(std::_Ref_count_base **a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rsi
  LPVOID v4; // rax
  __int64 v5; // rbx
  std::_Ref_count_base *v6; // rdi
  CMonitorManager *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rdi
  __int128 v10; // rax
  unsigned __int128 v11; // kr00_16
  std::_Ref_count_base *v12; // rcx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  std::_Ref_count_base *v16[2]; // [rsp+28h] [rbp-28h]

  AcquireSRWLockExclusive(&CStreamConnectionManagerImpl::s_instanceLock);
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
    v9 = v16[1];
  }
  else
  {
    v4 = operator new(0x20uLL);
    if ( v4 )
      v5 = std::_Ref_count_obj2<CStreamConnectionManagerImpl>::_Ref_count_obj2<CStreamConnectionManagerImpl>(v4);
    else
      v5 = 0LL;
    v6 = (std::_Ref_count_base *)(v5 + 16);
    v7 = *(CMonitorManager **)(v5 + 24);
    if ( v7 && (int)CMonitorManager::Initialize(v7, 0x12u, 9uLL, &dword_180184EE0) >= 0 )
    {
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        v6 = (std::_Ref_count_base *)(v5 + 16);
      }
      v3 = v6;
      v16[0] = v6;
      v8 = v16[1];
      v9 = (std::_Ref_count_base *)v5;
      v16[1] = (std::_Ref_count_base *)v5;
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
    }
    else
    {
      v9 = v16[1];
    }
    v10 = 0uLL;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v9 + 3);
      v11 = *(_OWORD *)v16;
      v9 = (std::_Ref_count_base *)(v11 >> 64);
      v3 = (std::_Ref_count_base *)v11;
      v10 = *(_OWORD *)v16;
    }
    v12 = (std::_Ref_count_base *)*((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
    CStreamConnectionManagerImpl::s_weakSelf = v10;
    if ( v12 )
      std::_Ref_count_base::_Decwref(v12);
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
  *a1 = v3;
  a1[1] = v9;
  ReleaseSRWLockExclusive(&CStreamConnectionManagerImpl::s_instanceLock);
  return a1;
}
