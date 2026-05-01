/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIVirtualDesktopNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DA728
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DA690 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800DA690.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopNotification,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _QWORD *v5; // r8
  unsigned int v6; // r9d
  _DWORD *v7; // r10
  __int64 v8; // r11

  if ( InlineIsEqualGUID(a2, &GUID_cd403e52_deed_4c13_b437_b98380f2b1e8) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
      || *v7 == 3
      && v7[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      && v7[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      && v7[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
    {
      *v5 = v8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v6;
  }
}
