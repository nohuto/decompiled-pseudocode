/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x18007CB74
 * Callers:
 *     ??$_Construct_n@PEB_KPEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K$$QEAPEB_K1@Z @ 0x18007C8CC (--$_Construct_n@PEB_KPEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K$$QEAPEB_K1@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8 (-_Tidy@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<unsigned __int64>>::~_Tidy_guard<std::vector<unsigned __int64>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<std::pair<unsigned int,unsigned int>>::_Tidy(v1);
}
