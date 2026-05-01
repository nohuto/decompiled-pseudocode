/*
 * XREFs of _lambda_0a029e4567c45bb0014685f0a9044f2c_::operator() @ 0x18008F638
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0a029e4567c45bb0014685f0a9044f2c___::Run @ 0x18008F610 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_0a029e4567c45bb0014685f0a9044f2c___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18008F924 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x180090920 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_0a029e4567c45bb0014685f0a9044f2c_::operator()(__int64 a1)
{
  int v2; // esi
  int v3; // edi
  __int64 v4; // rbx
  HWND v5; // r13
  int v6; // eax
  __int64 v7; // r15
  unsigned int v8; // edi
  int v9; // eax
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  char v14; // [rsp+70h] [rbp+8h]
  unsigned int v15; // [rsp+78h] [rbp+10h]
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+18h] BYREF

  v2 = **(_DWORD **)a1;
  v3 = 4;
  if ( v2 == 5 )
  {
    v14 = 1;
    v2 = 4;
  }
  else
  {
    v14 = 0;
  }
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 280LL) + 200LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
    &SRWLock);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (HWND)*(int *)(v4 + 296);
  v6 = *(_DWORD *)(v4 + 480);
  if ( v2 != v6 )
  {
    if ( !v6 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&SRWLock);
      return 2147947423LL;
    }
    *(_DWORD *)(v4 + 480) = v2;
    if ( (*(_BYTE *)(v4 + 356) & 4) == 0 )
    {
      if ( (unsigned int)(v2 - 4) > 1 )
        v3 = 2;
      if ( v3 != ((*(unsigned __int16 *)(v4 + 252) >> 1) & 7) )
      {
        *(_WORD *)(v4 + 252) = *(_WORD *)(v4 + 252) & 0xFFF1 | (2 * v3);
        WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v4);
        v4 = *(_QWORD *)(a1 + 8);
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 280) + 216LL))(*(_QWORD *)(v4 + 280));
    v7 = *(int *)(v4 + 296);
    v8 = *(_DWORD *)(v4 + 480);
    v9 = *(_DWORD *)(v4 + 180);
    if ( (v9 & 0x10) != 0 && (v9 & 0x20) == 0 )
      v8 = v8 != 0;
    if ( v8 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 168LL))(v4, v8);
      if ( v7 )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 280) + 216LL))(*(_QWORD *)(v4 + 280));
        if ( (*(_BYTE *)(v4 + 356) & 1) == 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          v15 = *(_DWORD *)(v4 + 568);
          v10 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
          v11 = v10;
          if ( v10 )
          {
            v10[3] = 1;
            *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))();
            *((_QWORD *)v11 + 2) = v4;
            v12 = 0LL;
            *((_QWORD *)v11 + 3) = v4;
            *((_QWORD *)v11 + 4) = v7;
            v11[10] = 2;
            *(_QWORD *)v11 = off_18061F6D8;
          }
          else
          {
            v12 = v4;
            v11 = 0LL;
          }
          SHTaskPoolQueueTask(3LL, 2LL, v15, 0LL, v11, 0LL);
          if ( v11 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
      }
    }
    WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)v4);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v14 )
  {
    if ( v5 )
      SetForegroundWindow(v5);
  }
  return 0LL;
}
