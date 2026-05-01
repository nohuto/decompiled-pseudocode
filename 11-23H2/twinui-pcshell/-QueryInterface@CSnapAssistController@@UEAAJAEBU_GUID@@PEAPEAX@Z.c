/*
 * XREFs of ?QueryInterface@CSnapAssistController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BC720
 * Callers:
 *     ?QueryInterface@CSnapAssistController@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB7E0 (-QueryInterface@CSnapAssistController@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB800 (-QueryInterface@CSnapAssistController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB820 (-QueryInterface@CSnapAssistController@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB840 (-QueryInterface@CSnapAssistController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB860 (-QueryInterface@CSnapAssistController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB880 (-QueryInterface@CSnapAssistController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB8A0 (-QueryInterface@CSnapAssistController@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCSnapAssistControllerBase@@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F7CB8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCSnapA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistController::QueryInterface(CSnapAssistController *this, struct _GUID *a2, void **a3)
{
  _DWORD *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r10
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
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CSnapAssistControllerBase,IWeakReferenceSource>::CanCastTo(
                  v5,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)CanCastTo;
}
