/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180048A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<ContentManagement::AppInstallInfoRecordImpl,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppInstallInfoRecordImpl,IInspectable,>(a2);
}
