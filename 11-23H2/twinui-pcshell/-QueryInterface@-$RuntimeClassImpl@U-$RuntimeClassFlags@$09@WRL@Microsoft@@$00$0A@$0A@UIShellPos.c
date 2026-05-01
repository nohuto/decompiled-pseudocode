/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerProxy@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F3C0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,IShellPositionerProxy>::QueryInterface(
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
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_95e1216b_c9d8_4d0c_aa1b_19a86de9aa5b) )
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
