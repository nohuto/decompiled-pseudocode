/*
 * XREFs of ?get_UIContentRoot@UIContext@UI@Windows@@UEAAJPEAPEAUIUIContentRoot@23@@Z @ 0x1800182A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIUIContentRoot@UI@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIContentRoot@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180018514 (--$As@UIUIContentRoot@UI@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIUIConten.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::UIContext::get_UIContentRoot(Windows::UI::UIContext *this, struct IInspectable **a2)
{
  int v3; // eax
  struct IInspectable *v4; // rcx
  struct IInspectable *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v6 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<Windows::UI::IUIContentRoot>((Windows::UI::UIContext *)((char *)this + 64), &v6);
  v4 = v6;
  if ( v3 >= 0 )
  {
    if ( !v6 )
      return 0LL;
    ((void (*)(void))v6->lpVtbl->AddRef)();
    v4 = v6;
    *a2 = v6;
  }
  if ( v4 )
  {
    v6 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v4->lpVtbl->Release)(v4);
  }
  return 0LL;
}
