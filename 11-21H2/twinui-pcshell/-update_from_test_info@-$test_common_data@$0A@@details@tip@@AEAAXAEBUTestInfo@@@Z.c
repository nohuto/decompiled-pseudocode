/*
 * XREFs of ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x18008943C
 * Callers:
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x18011F994 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
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
