/*
 * XREFs of ??$As@UIUIContentRoot@UI@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIContentRoot@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180018514
 * Callers:
 *     ?get_UIContentRoot@UIContext@UI@Windows@@UEAAJPEAPEAUIUIContentRoot@23@@Z @ 0x1800182A0 (-get_UIContentRoot@UIContext@UI@Windows@@UEAAJPEAPEAUIUIContentRoot@23@@Z.c)
 *     ?get_WindowContext@UIContext@UI@Windows@@UEAAJPEAPEAUIWindowContextPartner@23@@Z @ 0x1800182F0 (-get_WindowContext@UIContext@UI@Windows@@UEAAJPEAPEAUIWindowContextPartner@23@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<Windows::UI::IUIContentRoot>(
        Microsoft::WRL::WeakRef *this,
        struct IInspectable **a2)
{
  struct IInspectable *v4; // rcx

  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v4->lpVtbl->Release)(v4);
  }
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_1dfcbac6_b36b_5cb9_9bc5_2b7a0eddc378, a2);
}
