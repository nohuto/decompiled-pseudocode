/*
 * XREFs of ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800802E0
 * Callers:
 *     ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FB4E0 (-QueryInterface@-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationMode_ea_1801FB4E0.c)
 *     ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FB500 (-QueryInterface@-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationMode_ea_1801FB500.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r11
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  void **v9; // r8
  void *v10; // r11
  const struct _GUID *v11; // r9
  __int64 v12; // r10
  int CanCastTo; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return v3;
  }
  if ( InlineIsEqualGUID(v7, &GUID_12741485_ca3b_5d37_b0e1_161f70753091) )
  {
    *v9 = v10;
    goto LABEL_11;
  }
  if ( InlineIsEqualGUID(v8, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    *v9 = (void *)v12;
    goto LABEL_11;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v12 + 8), v11, v9);
  if ( CanCastTo != -2147467262 )
  {
    v3 = CanCastTo;
    if ( CanCastTo < 0 )
      return v3;
LABEL_11:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
    return v3;
  }
  return (unsigned int)-2147467262;
}
