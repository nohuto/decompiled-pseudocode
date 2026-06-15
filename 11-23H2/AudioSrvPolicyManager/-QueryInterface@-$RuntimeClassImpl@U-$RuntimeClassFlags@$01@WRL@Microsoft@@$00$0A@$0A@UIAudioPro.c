/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000ACC0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028430 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180028430.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18000AAA0 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::QueryInterface(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v4; // r11
  unsigned int v5; // ebx
  unsigned int v6; // edx

  v4 = a1;
  v5 = 0;
  *a3 = 0LL;
  v6 = *a2;
  if ( __PAIR64__(a2[1], v6) == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || v6 == -135935609
    && a2[1] == *(_DWORD *)&GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data2
    && a2[2] == *(_DWORD *)GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data4
    && a2[3] == *(_DWORD *)&GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data4[4]
    || InlineIsEqualGUID(a2, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4) )
  {
    *a3 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v5;
}
