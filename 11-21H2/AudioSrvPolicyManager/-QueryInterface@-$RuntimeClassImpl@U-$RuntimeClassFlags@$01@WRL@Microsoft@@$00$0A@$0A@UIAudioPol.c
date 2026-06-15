/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B4A0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B5A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18000B5A0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B5C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18000B5C0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -1624730157
      && a2[1] == *(_DWORD *)&GUID_9f2895d3_0d3f_4268_bf43_f047ec71b459.Data2
      && a2[2] == *(_DWORD *)GUID_9f2895d3_0d3f_4268_bf43_f047ec71b459.Data4
      && a2[3] == *(_DWORD *)&GUID_9f2895d3_0d3f_4268_bf43_f047ec71b459.Data4[4] )
    {
LABEL_18:
      *a3 = a1;
      a1 = *a3;
      goto LABEL_19;
    }
LABEL_10:
    v4 = a1 + 8;
    a1 += 8LL;
    if ( *a2 != -1500859031
      || a2[1] != *(_DWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data2
      || a2[2] != *(_DWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4
      || a2[3] != *(_DWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data4[4] )
    {
      a1 = v4 + 8;
      if ( *a2 != -1212204215
        || a2[1] != *(_DWORD *)&GUID_b7bf3b49_fafe_4512_ab94_c5681657aed0.Data2
        || a2[2] != *(_DWORD *)GUID_b7bf3b49_fafe_4512_ab94_c5681657aed0.Data4
        || a2[3] != *(_DWORD *)&GUID_b7bf3b49_fafe_4512_ab94_c5681657aed0.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
    }
    goto LABEL_18;
  }
  if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_10;
  }
  *a3 = a1;
LABEL_19:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
