/*
 * XREFs of ?SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicationViewCollection@@@Z @ 0x18017877C
 * Callers:
 *     ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DBFC0 (-SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapInteraction::InteractionTracker::SubscribeToServices(
        SnapInteraction::InteractionTracker *this,
        struct ISnapComponent *a2,
        struct IApplicationViewCollection *a3)
{
  __int64 *v6; // rsi
  struct IApplicationViewCollection *v7; // rcx
  int v8; // eax
  struct ISnapComponent **v9; // rbx
  struct ISnapComponent *v10; // rcx
  int v11; // eax

  v6 = (__int64 *)((char *)this + 40);
  v7 = (struct IApplicationViewCollection *)*((_QWORD *)this + 5);
  if ( v7 != a3 )
  {
    if ( v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v6);
    *v6 = (__int64)a3;
    v7 = a3;
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a3 + 8LL))(a3);
      v7 = (struct IApplicationViewCollection *)*v6;
    }
  }
  v8 = (*(__int64 (__fastcall **)(struct IApplicationViewCollection *, SnapInteraction::InteractionTracker *, char *))(*(_QWORD *)v7 + 96LL))(
         v7,
         this,
         (char *)this + 48);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  v9 = (struct ISnapComponent **)((char *)this + 56);
  v10 = (struct ISnapComponent *)*((_QWORD *)this + 7);
  if ( v10 != a2 )
  {
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
    *v9 = a2;
    v10 = a2;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct ISnapComponent *))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = *v9;
    }
  }
  v11 = (*(__int64 (__fastcall **)(struct ISnapComponent *, char *, char *))(*(_QWORD *)v10 + 72LL))(
          v10,
          (char *)this + 8,
          (char *)this + 64);
  if ( v11 < 0 )
    winrt::throw_hresult((unsigned int)v11);
  return 0LL;
}
