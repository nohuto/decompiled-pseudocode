/*
 * XREFs of ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z @ 0x1800A0230
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CWRLObjectWithSite::SetSite(CWRLObjectWithSite *this, struct IUnknown *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::operator=((char *)this + 16, a2);
  return 0LL;
}
