/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForegroundOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180145FB0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForegroundOperations@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F70D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801F70D0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedForegroundOperations,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void **v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  unsigned int v6; // ebx
  int CanCastTo; // eax

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = (void *)v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( *(_DWORD *)v4 == -1011155617
    && *(_DWORD *)(v4 + 4) == *(_DWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data2
    && *(_DWORD *)(v4 + 8) == *(_DWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4
    && *(_DWORD *)(v4 + 12) == *(_DWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4[4] )
  {
    *v3 = (void *)v5;
    v6 = 0;
LABEL_7:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v3 + 8LL))(*v3);
    return v6;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 8), (const struct _GUID *)v4, v3);
  v6 = -2147467262;
  if ( CanCastTo != -2147467262 )
  {
    v6 = CanCastTo;
    if ( CanCastTo >= 0 )
      goto LABEL_7;
  }
  return v6;
}
