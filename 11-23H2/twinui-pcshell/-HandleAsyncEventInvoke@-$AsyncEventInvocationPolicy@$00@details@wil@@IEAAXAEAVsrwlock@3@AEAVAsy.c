/*
 * XREFs of ?HandleAsyncEventInvoke@?$AsyncEventInvocationPolicy@$00@details@wil@@IEAAXAEAVsrwlock@3@AEAVAsyncEventWorkQueue@23@@Z @ 0x1804AC020
 * Callers:
 *     ?AsyncEventWorkCallback@?$EventInvocationContext@$00@details@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1804AA590 (-AsyncEventWorkCallback@-$EventInvocationContext@$00@details@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::AsyncEventInvocationPolicy<1>::HandleAsyncEventInvoke(
        _BYTE *a1,
        RTL_SRWLOCK *a2,
        __int64 a3)
{
  char v6; // si
  _QWORD *v7; // rdi
  RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  do
  {
    AcquireSRWLockExclusive(a2);
    v7 = *(_QWORD **)a3;
    v8 = a2;
    v11 = a2;
    if ( v7 )
    {
      *(_QWORD *)a3 = 0LL;
      v9 = v7[1];
      v7[1] = 0LL;
      v10 = *(void (__fastcall ****)(_QWORD, __int64))a3;
      *(_QWORD *)a3 = v9;
      if ( v10 )
        (**v10)(v10, 1LL);
      if ( !*(_QWORD *)a3 )
        *(_QWORD *)(a3 + 8) = a3;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &v11,
        0LL);
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
      v8 = v11;
    }
    else
    {
      *a1 = 0;
      v6 = 1;
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
  while ( !v6 );
}
