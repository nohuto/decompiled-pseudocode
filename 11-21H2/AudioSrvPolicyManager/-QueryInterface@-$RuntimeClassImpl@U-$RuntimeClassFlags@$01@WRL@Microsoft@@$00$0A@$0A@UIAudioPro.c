/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B5E0
 * Callers:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18000C630 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019640 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180019640.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::QueryInterface(
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
    if ( *a2 == -135935609
      && a2[1] == *(_DWORD *)&GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data2
      && a2[2] == *(_DWORD *)GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data4 )
    {
      v4 = *(_DWORD *)&GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data4[4];
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
  if ( *a2 != 782865528
    || a2[1] != *(_DWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data2
    || a2[2] != *(_DWORD *)GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4
    || a2[3] != *(_DWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4[4] )
  {
    return (unsigned int)-2147467262;
  }
LABEL_10:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
