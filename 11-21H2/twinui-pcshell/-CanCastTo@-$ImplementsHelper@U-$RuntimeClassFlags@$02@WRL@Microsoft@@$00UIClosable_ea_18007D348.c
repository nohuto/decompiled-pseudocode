/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClosable@Foundation@Windows@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007D348
 * Callers:
 *     ?QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E640 (-QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180371BE0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIJumpViewExperienceMa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 819308585
    || a2[1] != *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data2
    || a2[2] != *(_DWORD *)GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4
    || a2[3] != *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 2026419288
      || a2[1] != *(_DWORD *)&GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data2
      || a2[2] != *(_DWORD *)GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data4
      || a2[3] != *(_DWORD *)&GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != -189734543
        || a2[1] != *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
        || a2[2] != *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
        || a2[3] != *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
      {
        return 2147500034LL;
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
