/*
 * XREFs of ?SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicationViewCollection@@@Z @ 0x1801B5CDC
 * Callers:
 *     ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F7E50 (-SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?copy_ref@?$com_ptr@UIApplicationViewCollection@@@winrt@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1801A8FD0 (-copy_ref@-$com_ptr@UIApplicationViewCollection@@@winrt@@AEAAXPEAUIApplicationViewCollection@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapInteraction::InteractionTracker::SubscribeToServices(
        SnapInteraction::InteractionTracker *this,
        struct ISnapComponent *a2,
        struct IApplicationViewCollection *a3)
{
  int v5; // eax
  struct ISnapComponent **v6; // rbx
  struct ISnapComponent *v7; // rcx
  int v8; // eax

  winrt::com_ptr<IApplicationViewCollection>::copy_ref((__int64 *)this + 5, (__int64)a3);
  v5 = (*(__int64 (__fastcall **)(_QWORD, SnapInteraction::InteractionTracker *, char *))(**((_QWORD **)this + 5) + 96LL))(
         *((_QWORD *)this + 5),
         this,
         (char *)this + 48);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  v6 = (struct ISnapComponent **)((char *)this + 56);
  v7 = (struct ISnapComponent *)*((_QWORD *)this + 7);
  if ( v7 != a2 )
  {
    if ( v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
    *v6 = a2;
    v7 = a2;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct ISnapComponent *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = *v6;
    }
  }
  v8 = (*(__int64 (__fastcall **)(struct ISnapComponent *, unsigned __int64, char *))(*(_QWORD *)v7 + 64LL))(
         v7,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
         (char *)this + 64);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  return 0LL;
}
