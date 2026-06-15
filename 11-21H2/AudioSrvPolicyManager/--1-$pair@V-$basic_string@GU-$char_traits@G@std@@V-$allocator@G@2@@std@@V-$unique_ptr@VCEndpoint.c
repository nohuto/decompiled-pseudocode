/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@QEAA@XZ @ 0x180038794
 * Callers:
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$4 @ 0x180046600 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x1800387E0 (--1-$unique_ptr@VCEndpointVolumeState@@U-$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA.c)
 */

__int64 __fastcall std::pair<std::wstring,std::unique_ptr<CEndpointVolumeState>>::~pair<std::wstring,std::unique_ptr<CEndpointVolumeState>>(
        __int64 a1)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  std::unique_ptr<CEndpointVolumeState>::~unique_ptr<CEndpointVolumeState>(a1 + 32);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 >= 8 )
    std::_Deallocate<16,0>(*(char **)a1, 2 * v2 + 2);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
