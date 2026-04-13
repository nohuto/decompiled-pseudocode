/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18007651C
 * Callers:
 *     ??R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ @ 0x180076920 (--R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ.c)
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800DD8FC (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 *     __lambda_141232aca07f559541c51213e97da677_::operator()_::_1_::dtor$18 @ 0x1800F0F27 (__lambda_141232aca07f559541c51213e97da677_--operator()_--_1_--dtor$18.c)
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$0 @ 0x1800F119F (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInLayout_::_1_::dtor$3 @ 0x1800F67F3 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ExtractTargetedCo_ea_1800F67F3.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes_::_1_::dtor$1 @ 0x1800F6AA0 (_CreativeFramework--TargetedContentLayoutHelpers--TargetedContentLayoutXmlUtilities_ea_1800F6AA0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::~vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        if ( *v2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
        ++v2;
      }
      while ( v2 != v3 );
      v2 = *(_QWORD **)a1;
    }
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
