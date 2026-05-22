/*
 * XREFs of ?OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180071F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ??$_Emplace@AEBK@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@KPEAX@std@@_N@1@AEBK@Z @ 0x180068DC4 (--$_Emplace@AEBK@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@IEAA-A.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18006A840 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?GetGamepadKeyRoutingEnabled@BamoInputDelegationInputObjectProxy@@UEAA_NXZ @ 0x180071A10 (-GetGamepadKeyRoutingEnabled@BamoInputDelegationInputObjectProxy@@UEAA_NXZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180110FC4 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnGamepadKeyRoutingEnabledChanged(
        InputDelegationInputObjectProxy *this)
{
  bool GamepadKeyRoutingEnabled; // al
  __int64 v3; // rbx
  bool v4; // di
  __int64 v5; // rcx
  int v6; // ebx
  __int64 *GamepadInterceptionHelper; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  GamepadKeyRoutingEnabled = BamoInputDelegationInputObjectProxy::GetGamepadKeyRoutingEnabled((InputDelegationInputObjectProxy *)((char *)this + 8));
  v3 = *((_QWORD *)this + 12);
  v4 = GamepadKeyRoutingEnabled;
  if ( !*(_DWORD *)(v3 + 40) )
  {
    v5 = *(_QWORD *)(v3 + 488);
    if ( v5 != *(_QWORD *)(v3 + 496) )
      *(_DWORD *)(v3 + 40) = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)v5 + 32LL) + 16LL));
  }
  v6 = *(_DWORD *)(v3 + 40);
  GamepadInterceptionHelper = (__int64 *)ISMStatics::GetGamepadInterceptionHelper();
  if ( v4 )
    std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Emplace<unsigned long const &>(
      GamepadInterceptionHelper + 9,
      (__int64)v9);
  else
    GamepadInterceptionHelper::ClearGamepadKeyRoutingEnabled((GamepadInterceptionHelper *)GamepadInterceptionHelper, v6);
  return 0LL;
}
