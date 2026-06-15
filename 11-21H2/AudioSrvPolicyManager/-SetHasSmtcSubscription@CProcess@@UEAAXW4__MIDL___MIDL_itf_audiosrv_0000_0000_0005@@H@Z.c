/*
 * XREFs of ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001C050
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x1800281E0 (std--_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_--_Do_call.c)
 * Callees:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180019180 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::SetHasSmtcSubscription(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // r8d
  int v8; // eax

  v4 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( (unsigned int)v4 > 1 || (v7 = *(_DWORD *)(a1 + 4 * v4 + 496)) == 0 && !a3 )
  {
    if ( !v6 )
      return;
    goto LABEL_11;
  }
  v8 = v7 + (a3 != 0 ? 1 : -1);
  *(_DWORD *)(a1 + 4 * v4 + 496) = v8;
  if ( !v8 || v8 == 1 && a3 )
    CApplication::OnSmtcSubscriptionChanged(*(DWORD **)(a1 + 224));
  if ( v6 )
LABEL_11:
    LeaveCriticalSection(v6);
}
