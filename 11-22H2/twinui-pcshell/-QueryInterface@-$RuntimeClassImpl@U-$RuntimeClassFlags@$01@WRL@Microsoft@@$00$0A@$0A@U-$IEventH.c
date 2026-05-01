/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D03B0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IEventHandler<IInspectable *>>::QueryInterface(
        __int64 *a1,
        _DWORD *a2,
        __int64 **a3)
{
  unsigned int v3; // ebx
  __int64 **v4; // r8
  __int64 *v5; // r11
  __int64 v7; // rax

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    v7 = *a1;
    goto LABEL_6;
  }
  if ( InlineIsEqualGUID(a2, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b) )
  {
    *v4 = v5;
    v7 = *v5;
    a1 = v5;
LABEL_6:
    (*(void (__fastcall **)(__int64 *))(v7 + 8))(a1);
    return v3;
  }
  return (unsigned int)-2147467262;
}
