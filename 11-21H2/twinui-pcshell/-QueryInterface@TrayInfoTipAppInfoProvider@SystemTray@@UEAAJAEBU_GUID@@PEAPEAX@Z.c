/*
 * XREFs of ?QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015FFE0
 * Callers:
 *     ?QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180207040 (-QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180207060 (-QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022A46C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18022A46C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::QueryInterface(
        SystemTray::TrayInfoTipAppInfoProvider *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, &GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67) )
    {
      *v7 = v8;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    v8 + 8,
                    v9,
                    v7);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  }
  return (unsigned int)CanCastTo;
}
