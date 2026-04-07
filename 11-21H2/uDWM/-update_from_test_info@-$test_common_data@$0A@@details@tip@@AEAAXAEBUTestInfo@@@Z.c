/*
 * XREFs of ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180042334
 * Callers:
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180013500 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800400CC (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180040D9C (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall tip::details::test_common_data<0>::update_from_test_info(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 20);
  *(_DWORD *)(a1 + 24) |= result;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    result = *(unsigned int *)(a2 + 16);
    *(_DWORD *)(a1 + 128) = result;
  }
  return result;
}
