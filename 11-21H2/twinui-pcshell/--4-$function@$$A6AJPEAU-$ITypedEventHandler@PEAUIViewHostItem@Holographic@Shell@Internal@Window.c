/*
 * XREFs of ??4?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x1803CCFFC
 * Callers:
 *     ??$?4V_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@X@?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@@Z @ 0x1803CA1B8 (--$-4V_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@X@-$function@$$A6AJPEAU-$ITypedEventHandler@PEA.c)
 *     ??$?4V_lambda_5672878332238225f65002b03f0817fd_@@X@?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_5672878332238225f65002b03f0817fd_@@@Z @ 0x1803CA228 (--$-4V_lambda_5672878332238225f65002b03f0817fd_@@X@-$function@$$A6AJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *> *)>::operator=(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  return a1;
}
