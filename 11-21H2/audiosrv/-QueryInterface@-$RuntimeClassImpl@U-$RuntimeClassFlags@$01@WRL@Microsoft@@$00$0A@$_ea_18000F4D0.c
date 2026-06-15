/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F4D0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BF40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18006BF40.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::QueryInterface(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r10
  __int64 v4; // r9
  unsigned int v5; // ebx
  const struct _GUID *v7; // rcx

  v3 = a3;
  v4 = a2;
  v5 = 0;
  *a3 = 0LL;
  if ( !*(_DWORD *)a2 )
  {
    if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1;
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  if ( *(_DWORD *)a2 != -538486513
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d.Data4[4] )
  {
LABEL_14:
    if ( !(unsigned int)InlineIsEqualGUID((const struct _GUID *)a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
      && !(unsigned int)InlineIsEqualGUID(v7, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      return (unsigned int)-2147467262;
    }
    a1 = a3;
    goto LABEL_7;
  }
  a3 = a1;
LABEL_7:
  *v3 = a3;
LABEL_8:
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD *, __int64))(*a1 + 8LL))(a1, a2, a3, v4);
  return v5;
}
