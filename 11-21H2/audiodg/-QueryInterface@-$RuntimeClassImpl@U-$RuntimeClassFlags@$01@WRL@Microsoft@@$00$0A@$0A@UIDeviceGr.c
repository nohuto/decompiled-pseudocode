/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400120B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140033E90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_140033E90.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001207C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectCacheManager,IAudioLogging>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // r9
  const struct _GUID *v9; // r11
  __int64 v10; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return v3;
  }
  if ( InlineIsEqualGUID(v4, &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33) )
  {
    v10 = v8;
  }
  else
  {
    if ( !InlineIsEqualGUID(v9, &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f) )
      return (unsigned int)-2147467262;
    v8 = v10;
  }
  *v7 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return v3;
}
