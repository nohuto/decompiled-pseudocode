/*
 * XREFs of ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18016AF14
 * Callers:
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18016C030 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18016C694 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000F520 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800AA804 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 */

__int64 __fastcall HitTestResult::operator=(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rcx
  int v6; // eax
  _QWORD *v7; // rdi

  v2 = (__int64 *)(a2 + 8);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  v4 = (__int64 *)(a1 + 8);
  if ( v4 != (__int64 *)(a2 + 8) )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
      v4,
      *v2);
    *v2 = 0LL;
  }
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 88);
  v6 = *(_DWORD *)(a2 + 92);
  v7 = (_QWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 92) = v6;
  if ( (_QWORD *)(a1 + 96) != v7 )
  {
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy(a1 + 96);
    *(_QWORD *)(a1 + 96) = *v7;
    *(_QWORD *)(a1 + 104) = v7[1];
    *(_QWORD *)(a1 + 112) = v7[2];
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
  }
  return a1;
}
