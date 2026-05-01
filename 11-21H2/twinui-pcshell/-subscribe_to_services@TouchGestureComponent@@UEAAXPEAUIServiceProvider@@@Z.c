/*
 * XREFs of ?subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x180180810
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@?$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ @ 0x18004159C (-add_ref@-$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

void __fastcall TouchGestureComponent::subscribe_to_services(TouchGestureComponent *this, struct IServiceProvider *a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)this + 12);
  if ( *(struct IServiceProvider **)(v2 + 24) != a2 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)(v2 + 24));
    *(_QWORD *)(v2 + 24) = a2;
    winrt::com_ptr<IServiceProvider>::add_ref((__int64 *)(v2 + 24));
  }
}
