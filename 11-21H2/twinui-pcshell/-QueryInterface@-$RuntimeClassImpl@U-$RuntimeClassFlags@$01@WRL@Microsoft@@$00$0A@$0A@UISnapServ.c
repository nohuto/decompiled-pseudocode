/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISnapServiceProviderInternal@@UISnapServiceProvider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9AD0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISnapServiceProviderInternal@@UISnapServiceProvider@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F8D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020F8D0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISnapServiceProviderInternal,ISnapServiceProvider>::QueryInterface(
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
  if ( InlineIsEqualGUID(a2, &GUID_f5bca281_598d_4411_a252_74a25d86fc95)
    || InlineIsEqualGUID(v4, &GUID_fff59320_db70_4865_8fed_8b502d692f12) )
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
