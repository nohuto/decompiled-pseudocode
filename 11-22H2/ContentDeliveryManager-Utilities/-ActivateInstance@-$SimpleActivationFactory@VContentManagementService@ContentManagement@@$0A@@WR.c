/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180048A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<ContentManagement::ContentManagementService,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::ContentManagementService,IInspectable,>(a2);
}
