/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041180
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateReader@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800777D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800777D0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  unsigned int v5; // ebx
  const struct _GUID *v7; // rcx

  v3 = a2;
  v4 = a1;
  v5 = 0;
  *a3 = 0LL;
  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    if ( (*(_DWORD *)a2 != 268444433
       || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_10002311_cdcb_40d4_9791_eb7aa089009e.Data2
       || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_10002311_cdcb_40d4_9791_eb7aa089009e.Data4
       || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_10002311_cdcb_40d4_9791_eb7aa089009e.Data4[4])
      && !InlineIsEqualGUID((const struct _GUID *)a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
      && !InlineIsEqualGUID(v7, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      return (unsigned int)-2147467262;
    }
    *a3 = v4;
    a1 = *a3;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, v3);
  return v5;
}
