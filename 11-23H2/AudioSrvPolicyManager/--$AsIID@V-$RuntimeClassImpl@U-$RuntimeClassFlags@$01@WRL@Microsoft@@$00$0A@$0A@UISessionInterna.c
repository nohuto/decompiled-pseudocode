/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18001AE84
 * Callers:
 *     ?GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAPEAUIAudioDuckingManager@@@Z @ 0x18001C5A0 (-GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAPEAUIAudioDuckingManager@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001D6C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18001D6C0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18000AAA0 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v4, &GUID_a68ab569_b923_4330_a258_1735412d392e) )
    {
      v10 = v9;
    }
    else
    {
      if ( !InlineIsEqualGUID(v7, &GUID_6b8591c8_b7d6_455d_8003_822bfd39c679) )
        return (unsigned int)-2147467262;
      v10 = v11 + 8;
      v9 = v11 + 8;
    }
    *v8 = v10;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    return v3;
  }
  *v5 = v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return 0LL;
}
