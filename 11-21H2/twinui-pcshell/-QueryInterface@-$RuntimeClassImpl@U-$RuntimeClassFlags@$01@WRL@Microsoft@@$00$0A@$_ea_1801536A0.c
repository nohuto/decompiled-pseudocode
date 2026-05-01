/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAVDeviceInformationUpdate@234@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801536A0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>>::QueryInterface(
        __int64 *a1,
        _DWORD *a2,
        __int64 **a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  __int64 *v5; // r11
  __int64 v7; // rax

  v3 = a2;
  v4 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    v7 = *a1;
LABEL_10:
    (*(void (__fastcall **)(__int64 *, _DWORD *, __int64 **, _DWORD *))(v7 + 8))(a1, a2, a3, v3);
    return v4;
  }
  if ( InlineIsEqualGUID(a2, &GUID_906f1254_79ad_54fc_93c4_cdb99b437899) )
  {
    *a3 = v5;
    v7 = *v5;
    a1 = v5;
    goto LABEL_10;
  }
  return (unsigned int)-2147467262;
}
