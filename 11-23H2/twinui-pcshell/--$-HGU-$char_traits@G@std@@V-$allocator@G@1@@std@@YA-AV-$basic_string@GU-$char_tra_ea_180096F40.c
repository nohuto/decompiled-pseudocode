/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180096F40
 * Callers:
 *     ?UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@Z @ 0x180096E2C (-UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@.c)
 *     ?UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800A7220 (-UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV-$basic_st.c)
 *     ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x18019DBC4 (-UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z.c)
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::operator() @ 0x18027B6B8 (_lambda_665315f8e7a3be3e9382c02473f3b139_--operator().c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1806AC808 (_anonymous_namespace_--CreateTemporaryFile.c)
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F4D84 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F300 (-Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 * Callees:
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800C2B98 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 */

_QWORD *__fastcall std::operator+<unsigned short>(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v3; // r9
  __int64 v5; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  v5 = std::wstring::insert(a3);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 7LL;
  *(_WORD *)v5 = 0;
  return a1;
}
