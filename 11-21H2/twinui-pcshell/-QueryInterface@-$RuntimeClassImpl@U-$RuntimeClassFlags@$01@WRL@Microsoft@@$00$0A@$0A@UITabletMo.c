/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabletModeViewManagerProxy@@UITabletModeViewManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DA3F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabletModeViewManagerProxy@@UITabletModeViewManager@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180207800 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180207800.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITabletModeViewManagerProxy,ITabletModeViewManager>::QueryInterface(
        __int64 *a1,
        _DWORD *a2,
        __int64 **a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  __int64 **v5; // r8
  __int64 *v6; // r11
  __int64 v8; // rax

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    v8 = *a1;
    goto LABEL_7;
  }
  if ( InlineIsEqualGUID(a2, &GUID_369d4b62_03d7_4a19_aa1b_7f542f36e74b)
    || InlineIsEqualGUID(v4, &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3) )
  {
    *v5 = v6;
    v8 = *v6;
    a1 = v6;
LABEL_7:
    (*(void (__fastcall **)(__int64 *))(v8 + 8))(a1);
    return v3;
  }
  return (unsigned int)-2147467262;
}
