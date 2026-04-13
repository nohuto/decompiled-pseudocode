/*
 * XREFs of ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x1800241B4
 * Callers:
 *     ??R_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x18002E564 (--R_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@QEBAJAEAV-$CBasicResult@W4SVUpgradeEligibilityStat.c)
 *     ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x18005B220 (-PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@0.c)
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800BD9A4 (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800BE64C (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 *     ?get_PairingContext@MobilityExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800C1EB0 (-get_PairingContext@MobilityExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002F774 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003B094 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *a1,
        const WCHAR **a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rbx
  const WCHAR *v5; // rsi
  unsigned int v6; // eax

  a1[1].Reserved.Reserved1 = 0LL;
  v4 = -1LL;
  v5 = *a2;
  do
    ++v4;
  while ( v5[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, (int)a2, a3);
    JUMPOUT(0x18002421CLL);
  }
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v4);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(a1, v5, v6, v4);
  return a1;
}
