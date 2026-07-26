/*
 * XREFs of ??$invoke@P6AXAEBUkspin_lock_saved_irql@details@wil@@@ZAEAU123@@wistd@@YAX$$QEAP6AXAEBUkspin_lock_saved_irql@details@wil@@@ZAEAU123@@Z @ 0x1C003776C
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0037788 (--1-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1-Re.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAAXUkspin_lock_saved_irql@23@@Z @ 0x1C0037C10 (-reset@-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::invoke<void (*)(wil::details::kspin_lock_saved_irql const &),wil::details::kspin_lock_saved_irql &>(
        __int64 (__fastcall **a1)(__int64),
        __int64 a2)
{
  return (*a1)(a2);
}
