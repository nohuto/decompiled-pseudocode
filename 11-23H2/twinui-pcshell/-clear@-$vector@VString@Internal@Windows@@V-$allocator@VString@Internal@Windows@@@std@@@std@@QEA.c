/*
 * XREFs of ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x1803DCFE0
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x1803DA03C (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1803D2EC8 (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 */

HSTRING *__fastcall std::vector<Windows::Internal::String>::clear(HSTRING **a1)
{
  HSTRING *result; // rax

  std::_Destroy_range<std::allocator<Windows::Internal::String>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
