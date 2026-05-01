/*
 * XREFs of ?AddRef@CProcessMemoryReport@System@Windows@@W7EAAKXZ @ 0x180015EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::AddRef(a1 - 8);
}
