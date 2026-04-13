/*
 * XREFs of std::_Remove_if_Microsoft::WRL::WeakRef____lambda_7b359f7de2cb9222ee62c5860a33e596___ @ 0x18006D5BC
 * Callers:
 *     ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x1800730C0 (-UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Remove_if_Microsoft::WRL::WeakRef____lambda_7b359f7de2cb9222ee62c5860a33e596___(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v5; // rsi
  __int64 *i; // rdi
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // bp
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  for ( i = a1 + 1; i != a2; ++i )
  {
    v7 = 0LL;
    v14 = 0LL;
    if ( *i )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*i + 24LL))(
             *i,
             &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
             &v14);
      v7 = v14;
    }
    else
    {
      v8 = 0;
    }
    v9 = v8 >= 0 && a3 == v7;
    if ( v7 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( !v9 )
    {
      v10 = v5++;
      if ( &v14 == i )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = *i;
        *i = 0LL;
      }
      v12 = *v10;
      *v10 = v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return v5;
}
