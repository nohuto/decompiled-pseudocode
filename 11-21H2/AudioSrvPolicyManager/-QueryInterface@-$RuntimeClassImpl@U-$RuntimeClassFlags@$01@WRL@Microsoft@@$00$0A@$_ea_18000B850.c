/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B850
 * Callers:
 *     ?GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAPEAUIAudioDuckingManager@@@Z @ 0x180009A70 (-GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAPEAUIAudioDuckingManager@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B910 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18000B910.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -1500859031
      && a2[1] == *(_DWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data2
      && a2[2] == *(_DWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4 )
    {
      v4 = *(_DWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data4[4];
LABEL_5:
      if ( a2[3] == v4 )
        goto LABEL_10;
    }
  }
  else if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    v4 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
    goto LABEL_5;
  }
  a1 += 8LL;
  if ( *a2 != 1803915720
    || a2[1] != *(_DWORD *)&GUID_6b8591c8_b7d6_455d_8003_822bfd39c679.Data2
    || a2[2] != *(_DWORD *)GUID_6b8591c8_b7d6_455d_8003_822bfd39c679.Data4
    || a2[3] != *(_DWORD *)&GUID_6b8591c8_b7d6_455d_8003_822bfd39c679.Data4[4] )
  {
    return (unsigned int)-2147467262;
  }
LABEL_10:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
