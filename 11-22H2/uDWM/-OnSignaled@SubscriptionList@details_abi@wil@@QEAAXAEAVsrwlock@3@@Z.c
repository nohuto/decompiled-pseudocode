/*
 * XREFs of ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180015AA8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CA@PEAX@Z @ 0x180016900 (-_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CA@PEAX@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CA@PEAX@Z @ 0x18006B580 (-_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CA@PEAX@Z.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18009B6AC (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180016D0C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::SubscriptionList::OnSignaled(
        wil::details_abi::SubscriptionList *this,
        RTL_SRWLOCK *a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  void (__fastcall *v6)(__int64); // rbp
  __int64 v7; // r15
  __int64 v8; // rdx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  __int128 v11; // xmm0
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockShared(a2);
  v4 = (*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 4;
  if ( a2 )
    ReleaseSRWLockShared(a2);
  v5 = 0LL;
  while ( v5 < v4 )
  {
    v6 = 0LL;
    v7 = 0LL;
    wil::EnterCriticalSection(&lpCriticalSection, this);
    AcquireSRWLockExclusive(a2);
    if ( v5 < v4 )
    {
      v8 = *((_QWORD *)this + 5);
      v9 = (_QWORD *)(v8 + 16 * v5);
      while ( 1 )
      {
        v10 = v5 + 1;
        if ( *v9 )
          break;
        ++v5;
        v9 += 2;
        if ( v10 >= v4 )
          goto LABEL_8;
      }
      v11 = *(_OWORD *)(v8 + 16 * v5++);
      v7 = *((_QWORD *)&v11 + 1);
      v6 = (void (__fastcall *)(__int64))v11;
    }
LABEL_8:
    if ( a2 )
      ReleaseSRWLockExclusive(a2);
    if ( v6 )
      v6(v7);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
