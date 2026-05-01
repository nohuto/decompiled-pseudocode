/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDiscoverRecentItem@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B8CE0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDiscoverRecentItem@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F6F80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801F6F80.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void **v3; // r8
  Microsoft::WRL::FtmBase *v4; // r9
  const struct _GUID *v5; // r10
  int CanCastTo; // eax
  _QWORD *v7; // r8
  _DWORD *v8; // r10
  unsigned int v9; // ebx
  __int64 v10; // r9

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v4, v5, v3);
  v9 = -2147467262;
  if ( CanCastTo == -2147467262 )
  {
    if ( InlineIsEqualGUID(v8, &GUID_dd910131_9c55_48a4_8fa7_f00d062b10f2) )
    {
      *v7 = v10;
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
