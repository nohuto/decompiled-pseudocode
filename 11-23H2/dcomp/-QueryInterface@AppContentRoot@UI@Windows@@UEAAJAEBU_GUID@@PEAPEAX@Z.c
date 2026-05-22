/*
 * XREFs of ?QueryInterface@AppContentRoot@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DAB0
 * Callers:
 *     ?QueryInterface@AppContentRoot@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD670 (-QueryInterface@AppContentRoot@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppContentRoot@UI@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD690 (-QueryInterface@AppContentRoot@UI@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppContentRoot@UI@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD6B0 (-QueryInterface@AppContentRoot@UI@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppContentRoot@UI@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD6D0 (-QueryInterface@AppContentRoot@UI@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIUIContentRoot@UI@Windows@@UIWeakReferenceSource@@U?$CloakedIid@UIClosable@Foundation@Windows@@@23@U?$CloakedIid@UIUIContentRootPartner@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180018554 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIUIContentRoot@UI@Win.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::AppContentRoot::QueryInterface(
        Windows::UI::AppContentRoot *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // r10
  int CanCastTo; // ebx
  _QWORD *v8; // r8

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
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::UI::IUIContentRoot,IWeakReferenceSource,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>::CanCastTo(
                  v5,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)CanCastTo;
}
