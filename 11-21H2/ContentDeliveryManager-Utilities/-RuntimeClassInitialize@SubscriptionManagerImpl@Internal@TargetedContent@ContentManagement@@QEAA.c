/*
 * XREFs of ?RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAAJXZ @ 0x180072700
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x18006CBA0 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x180028E9C (--1-$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x18006DA44 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180073C4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        __int64 a2,
        int a3)
{
  int v4; // eax
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  wil::details *v6; // rdi
  wil::details **v7; // rsi
  wil::details *v8; // r14
  DWORD LastError; // ebx
  struct wil::details::wnf_subscription_state_base *v10; // rdx
  const char *v12; // r9
  __int64 v13; // rdx
  wil::details *v14[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v15[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v16[15]; // [rsp+38h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v16[0] = off_1800FEC68;
  v16[1] = this;
  v16[13] = v16;
  v4 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>((__int64)this, (__int64)v15, a3, v14);
  if ( v4 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1069LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)(unsigned int)v4,
        (int)v14[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v13 + 32) = wil::details::in1diag3::Return_CaughtException(
                                retaddr,
                                (void *)0x3B,
                                (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                                v12);
      return LODWORD(v14[0]);
    }
  }
  v6 = v14[0];
  v7 = (wil::details **)((char *)this + 72);
  if ( v7 == v14 )
  {
    if ( v14[0] )
      wil::details::delete_wnf_subscription_state(v14[0], v5);
  }
  else
  {
    v8 = *v7;
    if ( *v7 )
    {
      LastError = GetLastError();
      wil::details::delete_wnf_subscription_state(v8, v10);
      SetLastError(LastError);
    }
    *v7 = v6;
  }
  wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>((__int64)v15);
  return 0LL;
}
