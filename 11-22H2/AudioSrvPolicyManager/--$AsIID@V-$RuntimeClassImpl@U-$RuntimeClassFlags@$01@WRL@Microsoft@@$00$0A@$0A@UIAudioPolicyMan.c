/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18001AFB4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001D6B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPol.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18000AAF0 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  _DWORD *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_daf2dafd_2696_49f6_89df_dee54c8762b2)
      || InlineIsEqualGUID(v6, &GUID_a68ab569_b923_4330_a258_1735412d392e) )
    {
      *v7 = v8;
      v9 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v10, &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0) )
      {
        v8 = v12 + 8;
        *v11 = v8;
        v9 = 0;
      }
      else
      {
        v9 = -2147467262;
        v8 = 0LL;
      }
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return (unsigned int)v9;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
