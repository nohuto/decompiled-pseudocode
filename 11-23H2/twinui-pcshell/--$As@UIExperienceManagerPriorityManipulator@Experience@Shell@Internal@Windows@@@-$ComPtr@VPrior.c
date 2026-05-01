/*
 * XREFs of ??$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E4830
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801068D4 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E47BC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800E47BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  _DWORD *v6; // r9
  int CanCastTo; // edi

  v3 = *a1;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_fdae1e57_9570_4461_bab5_532c0f899149, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a2 = v3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    return 0;
  }
  if ( InlineIsEqualGUID(v5, &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef) )
  {
    *a2 = v3;
    CanCastTo = 0;
    goto LABEL_5;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::CanCastTo(
                v3 + 8,
                v6);
  if ( CanCastTo >= 0 )
LABEL_5:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 8LL))(*a2);
  return (unsigned int)CanCastTo;
}
