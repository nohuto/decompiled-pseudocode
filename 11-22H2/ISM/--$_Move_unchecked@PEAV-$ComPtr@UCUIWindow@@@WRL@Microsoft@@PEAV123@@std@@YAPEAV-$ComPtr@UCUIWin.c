/*
 * XREFs of ??$_Move_unchecked@PEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@00@Z @ 0x1800AD840
 * Callers:
 *     ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AF9BC (-RemoveWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 * Callees:
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800ADF10 (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<Microsoft::WRL::ComPtr<CUIWindow> *,Microsoft::WRL::ComPtr<CUIWindow> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 8LL )
  {
    Microsoft::WRL::ComPtr<CUIWindow>::operator=(a3, i);
    a3 += 8LL;
  }
  return a3;
}
