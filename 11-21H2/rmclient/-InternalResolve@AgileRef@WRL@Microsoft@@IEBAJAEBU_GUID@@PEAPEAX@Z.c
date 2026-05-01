/*
 * XREFs of ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800028B4
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_02a86428158461f4dc557e8a6d2b58da_@@$0?0PEAUIInspectable@@PEAU5@@?$DelegateArgTraits@P8?$IEventHandler_impl@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIInspectable@@0@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@0@Z @ 0x180001770 (-Invoke@-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHa.c)
 *     ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_19c629caca3fc168e565f554a8149559_@@$0?0PEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@PEAUIAppMemoryUsageLimitChangingEventArgs@23@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@3@@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x180001890 (-Invoke@-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft_ea_180001890.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::AgileRef::InternalResolve(
        Microsoft::WRL::AgileRef *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rcx

  *a3 = 0LL;
  v3 = *(_QWORD *)this;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *))(*(_QWORD *)v3 + 24LL))(v3, a2);
  else
    return 0LL;
}
