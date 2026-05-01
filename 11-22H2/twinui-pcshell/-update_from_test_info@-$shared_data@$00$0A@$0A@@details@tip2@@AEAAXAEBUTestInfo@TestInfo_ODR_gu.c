/*
 * XREFs of ?update_from_test_info@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x180013178
 * Callers:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800130C8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18001319C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800B6920 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1801B3F00 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x1802033A0 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::details::shared_data<1,0,0>::update_from_test_info(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 64) |= *(_DWORD *)(a2 + 20);
  if ( *(_QWORD *)(a2 + 24) )
    return tip2::details::shared_data<1,0,0>::deserialize_data();
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a1 + 184) = result;
  return result;
}
