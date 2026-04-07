/*
 * XREFs of ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x180013CB4
 * Callers:
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180013500 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800400CC (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180040D9C (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall tip::details::TestInfoDelete(LPVOID *this, struct TestInfo *a2)
{
  CoTaskMemFree(this[3]);
  this[3] = 0LL;
}
