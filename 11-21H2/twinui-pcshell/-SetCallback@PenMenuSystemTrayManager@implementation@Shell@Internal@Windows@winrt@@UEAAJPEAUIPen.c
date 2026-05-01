/*
 * XREFs of ?SetCallback@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIPenMenuSystemTrayManagerCallback@@@Z @ 0x1801804D0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::SetCallback(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *this,
        struct IPenMenuSystemTrayManagerCallback *a2)
{
  _QWORD *v3; // rdi

  v3 = (_QWORD *)((char *)this + 136);
  if ( *((struct IPenMenuSystemTrayManagerCallback **)this + 17) != a2 )
  {
    if ( *v3 )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)this + 17);
    *v3 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IPenMenuSystemTrayManagerCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return 0LL;
}
