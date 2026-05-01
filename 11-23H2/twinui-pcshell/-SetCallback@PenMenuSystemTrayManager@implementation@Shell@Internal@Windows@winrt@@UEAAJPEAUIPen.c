/*
 * XREFs of ?SetCallback@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIPenMenuSystemTrayManagerCallback@@@Z @ 0x1801BD950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18048EE5C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::SetCallback(
        struct IPenMenuSystemTrayManagerCallback **this,
        struct IPenMenuSystemTrayManagerCallback *a2)
{
  _QWORD *v3; // rdi

  v3 = this + 17;
  if ( this[17] != a2 )
  {
    if ( *v3 )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(this + 17);
    *v3 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IPenMenuSystemTrayManagerCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return 0LL;
}
