/*
 * XREFs of _anonymous_namespace_::IsAppInBlackList @ 0x1800FF104
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1800FF01C (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180126FC0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

char __fastcall anonymous_namespace_::IsAppInBlackList(_QWORD *a1)
{
  _QWORD *v1; // r11
  void **v2; // r10
  _WORD *v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rcx

  v1 = a1;
  v2 = (void **)off_180633070;
  while ( 1 )
  {
    v3 = *v2;
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    v5 = v1;
    if ( v1[3] >= 8uLL )
      v5 = (_QWORD *)*v1;
    if ( v1[2] == v4 && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v5, v3, v1[2]) )
      break;
    if ( ++v2 == &CSnapComponentTelemetry::WindowArrangementHotkeyMode::`vftable' )
      return 0;
  }
  return 1;
}
