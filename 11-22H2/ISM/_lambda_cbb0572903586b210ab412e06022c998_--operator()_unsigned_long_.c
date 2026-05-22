/*
 * XREFs of _lambda_cbb0572903586b210ab412e06022c998_::operator()_unsigned_long_ @ 0x18006750C
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x180067818 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 * Callees:
 *     ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x18010C058 (-at@-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 */

__int64 __fastcall lambda_cbb0572903586b210ab412e06022c998_::operator()_unsigned_long_(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r8
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  v4 = *(_DWORD *)(*(_QWORD *)(*a1 + 192) + 4LL * a2);
  return std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v2 + 216, &v4);
}
