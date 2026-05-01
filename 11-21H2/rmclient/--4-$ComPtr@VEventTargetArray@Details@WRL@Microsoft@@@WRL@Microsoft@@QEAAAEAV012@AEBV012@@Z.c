/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800030A0
 * Callers:
 *     ??$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x180002F58 (--$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@-$EventSource@U-$IEve.c)
 *     ??$DoInvoke@V_lambda_b9c6a9526e98e8096438348dee47a029_@@@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@@Z @ 0x180002FFC (--$DoInvoke@V_lambda_b9c6a9526e98e8096438348dee47a029_@@@-$EventSource@U-$IEventHandler@PEAUIIns.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006990 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008B40 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx

  v2 = *(_QWORD *)a2;
  v4 = *a1;
  if ( v4 != *(_QWORD *)a2 )
  {
    if ( v2 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 12), a2);
      v4 = *a1;
    }
    *a1 = v2;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  return a1;
}
