/*
 * XREFs of _anonymous_namespace_::IsAppInBlackList @ 0x18009E448
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18009E370 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 * Callees:
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18017B6A0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 */

char __fastcall anonymous_namespace_::IsAppInBlackList(__int64 a1)
{
  __int64 (__fastcall **v2)(); // rbx

  v2 = (__int64 (__fastcall **)())off_18079ECA0;
  while ( !(unsigned __int8)std::wstring::_Equal(a1) )
  {
    if ( ++v2 == off_18079ECB8 )
      return 0;
  }
  return 1;
}
