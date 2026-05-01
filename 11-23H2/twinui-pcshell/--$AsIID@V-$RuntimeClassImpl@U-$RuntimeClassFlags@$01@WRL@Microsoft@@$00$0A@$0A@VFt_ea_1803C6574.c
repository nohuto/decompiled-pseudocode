/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameWrapper@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameWrapper@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803C6574
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameWrapper@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C6E90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1803C6E90.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IApplicationFrameWrapper>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void **v3; // r8
  const struct _GUID *v4; // r10
  Microsoft::WRL::FtmBase *v5; // r11
  int CanCastTo; // eax
  _QWORD *v7; // r8
  _DWORD *v8; // r10
  unsigned int v9; // ebx
  __int64 v10; // r11

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v5, v4, v3);
    v9 = -2147467262;
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(v8, &GUID_1404252c_1e59_462d_b5c1_9cbe30e85f19) )
      {
        *v7 = v10 + 32;
        v9 = 0;
LABEL_6:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
      }
    }
    else
    {
      v9 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_6;
    }
    return v9;
  }
  *v3 = v5;
  (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
