/*
 * XREFs of ?OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180071D10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x18006A6C0 (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 *     ?SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@Z @ 0x18006AB68 (-SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@.c)
 *     ?GetGamepadInterceptionEnabled@BamoInputDelegationInputObjectProxy@@UEAA_NXZ @ 0x1800719D0 (-GetGamepadInterceptionEnabled@BamoInputDelegationInputObjectProxy@@UEAA_NXZ.c)
 *     ?OnGamepadInterceptionStarted@BamoInputDelegationInputObjectProxy@@UEAAJXZ @ 0x180071DD0 (-OnGamepadInterceptionStarted@BamoInputDelegationInputObjectProxy@@UEAAJXZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnGamepadInterceptionEnabledChanged(
        InputDelegationInputObjectProxy *this)
{
  BamoInputDelegationInputObjectProxy *v2; // rdi
  unsigned __int64 v3; // rsi
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  GamepadInterceptionHelper *v5; // rax

  if ( *((_BYTE *)this + 116) )
  {
    v2 = (InputDelegationInputObjectProxy *)((char *)this + 8);
    v3 = (unsigned __int64)this + 72;
    if ( BamoInputDelegationInputObjectProxy::GetGamepadInterceptionEnabled((InputDelegationInputObjectProxy *)((char *)this + 8)) )
    {
      GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
      if ( GamepadInterceptionHelper::SetGamepadInterceptionTarget(
             GamepadInterceptionHelper,
             (struct IGamepadInterceptionTarget *)(v3 & -(__int64)(this != 0LL))) )
      {
        BamoInputDelegationInputObjectProxy::OnGamepadInterceptionStarted(v2);
      }
    }
    else
    {
      v5 = ISMStatics::GetGamepadInterceptionHelper();
      GamepadInterceptionHelper::ClearGamepadInterceptionTarget(
        v5,
        (struct IGamepadInterceptionTarget *)(v3 & -(__int64)(this != 0LL)));
    }
  }
  return 0LL;
}
