/*
 * XREFs of _lambda_1b129953cda80efb4930f0cde1460e8b_::operator()_unsigned_long_ @ 0x1800E2B28
 * Callers:
 *     ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64 (-RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 * Callees:
 *     ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x1800E473C (-at@-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 */

__int64 __fastcall lambda_1b129953cda80efb4930f0cde1460e8b_::operator()_unsigned_long_(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r8
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  v4 = *(_DWORD *)(*(_QWORD *)(*a1 + 184) + 4LL * a2);
  return std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v2 + 208, &v4);
}
