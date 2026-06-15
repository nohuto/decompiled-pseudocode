/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140007F10
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400329F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1400329F0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001207C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v4; // rdx
  const struct _GUID *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r9
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v6 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    return v3;
  }
  if ( (unsigned int)InlineIsEqualGUID(v5, v4) )
  {
    v11 = v10;
  }
  else
  {
    if ( !(unsigned int)InlineIsEqualGUID(v8, &GUID_be7a4789_2891_49b3_923e_dc97de058472) )
      return (unsigned int)-2147467262;
    v10 = v11;
  }
  *v9 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return v3;
}
