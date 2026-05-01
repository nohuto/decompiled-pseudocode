/*
 * XREFs of ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180018984
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000B98C (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002BF98 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C5F0 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C9E0 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002CD3C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_75b78523e3da460933f50e5d76bfa16b_::operator() @ 0x18002E054 (_lambda_75b78523e3da460933f50e5d76bfa16b_--operator().c)
 *     ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x18002FDF0 (-get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4Game.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002FFC0 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x18003E448 (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003ECE4 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800131B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001CBAC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStringPropertyFromGameConfigStore(__int64 *a1, __int128 *a2, __int64 a3, HSTRING *a4)
{
  unsigned int v5; // r14d
  __int64 v8; // rdx
  HRESULT String; // ebx
  __int64 v11; // rax
  const char *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  PCNZWCH sourceString[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v20; // [rsp+90h] [rbp+8h] BYREF

  v5 = a3;
  if ( !a1 )
  {
    v8 = 203LL;
LABEL_3:
    String = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  if ( !a4 )
  {
    v8 = 204LL;
    goto LABEL_3;
  }
  v20 = 0;
  v11 = *a1;
  v16 = *a2;
  String = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD, int *))(v11 + 64))(
             a1,
             &v16,
             a3,
             0LL,
             &v20);
  if ( (_WORD)String == 2 )
    return 0LL;
  if ( String < 0 )
  {
    v8 = 218LL;
    goto LABEL_4;
  }
  *(_OWORD *)sourceString = 0LL;
  v18 = 0LL;
  if ( v20 )
  {
    try
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(sourceString);
    }
    catch ( ... )
    {
      v15 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0xE3,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
              v12);
      if ( sourceString[0] )
        std::_Deallocate<16,0>((char *)sourceString[0], v18 - (unsigned __int64)sourceString[0]);
      return v15;
    }
  }
  v13 = *a1;
  v16 = *a2;
  String = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, PCNZWCH, int *))(v13 + 64))(
             a1,
             &v16,
             v5,
             sourceString[0],
             &v20);
  if ( String >= 0 )
  {
    String = WindowsCreateString(sourceString[0], (unsigned int)v20 >> 1, a4);
    if ( String >= 0 )
    {
      if ( sourceString[0] )
        std::_Deallocate<16,0>((char *)sourceString[0], v18 - (unsigned __int64)sourceString[0]);
      return 0LL;
    }
    v14 = 232LL;
  }
  else
  {
    v14 = 229LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)String);
  if ( sourceString[0] )
    std::_Deallocate<16,0>((char *)sourceString[0], v18 - (unsigned __int64)sourceString[0]);
  return (unsigned int)String;
}
