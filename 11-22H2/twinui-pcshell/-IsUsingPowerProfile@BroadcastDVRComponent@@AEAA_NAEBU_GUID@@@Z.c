/*
 * XREFs of ?IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z @ 0x1803D8D80
 * Callers:
 *     ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1803D82CC (-GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GA.c)
 * Callees:
 *     <none>
 */

bool __fastcall BroadcastDVRComponent::IsUsingPowerProfile(BroadcastDVRComponent *this, const struct _GUID *a2)
{
  bool v2; // bl
  __int64 v3; // rax
  bool v4; // bl
  GUID *v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]
  GUID *hMem; // [rsp+58h] [rbp+10h]

  v6 = 0LL;
  hMem = 0LL;
  v7 = 1;
  v2 = PowerGetActiveScheme(0LL, &v6) == 0;
  if ( v7 )
    hMem = v6;
  if ( v2 )
  {
    v3 = *(_QWORD *)&hMem->Data1 - *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1;
    if ( *(_QWORD *)&hMem->Data1 == *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1 )
      v3 = *(_QWORD *)hMem->Data4 - *(_QWORD *)GUID_MIN_POWER_SAVINGS.Data4;
    v4 = v3 == 0;
  }
  else
  {
    v4 = 0;
  }
  if ( hMem )
    LocalFree(hMem);
  return v4;
}
