/*
 * XREFs of _ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::ActivateInstance_::_1_::catch$2 @ 0x1800D601B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003F208 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::ActivateInstance_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x4E,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\SubscriptionManager.h",
                           a4);
  return 0LL;
}
