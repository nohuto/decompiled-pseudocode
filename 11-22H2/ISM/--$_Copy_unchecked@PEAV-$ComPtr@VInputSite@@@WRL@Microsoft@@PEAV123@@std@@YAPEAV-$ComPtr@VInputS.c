/*
 * XREFs of ??$_Copy_unchecked@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@00@Z @ 0x18014BBC4
 * Callers:
 *     ??$_Assign_range@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@0Uforward_iterator_tag@1@@Z @ 0x18014BB08 (--$_Assign_range@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@@WRL@M.c)
 * Callees:
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014C2FC (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall std::_Copy_unchecked<Microsoft::WRL::ComPtr<InputSite> *,Microsoft::WRL::ComPtr<InputSite> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 8LL )
  {
    Microsoft::WRL::ComPtr<InputSite>::operator=(a3, i);
    a3 += 8LL;
  }
  return a3;
}
