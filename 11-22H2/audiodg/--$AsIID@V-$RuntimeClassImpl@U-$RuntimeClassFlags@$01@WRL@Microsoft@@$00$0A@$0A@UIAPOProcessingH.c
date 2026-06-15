/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOProcessingHost@@UIMMNotificationClient@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOProcessingHost@@UIMMNotificationClient@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14006A180
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOProcessingHost@@UIMMNotificationClient@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006D650 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_14006D650.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140017FD8 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOProcessingHost,IMMNotificationClient>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v4, &GUID_53be45d3_3d22_41f7_9972_fa0cb721b2c0) )
    {
      v10 = v9;
    }
    else
    {
      if ( !InlineIsEqualGUID(v7, &GUID_7991eec9_7e89_4d85_8390_6c703cec60c0) )
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
