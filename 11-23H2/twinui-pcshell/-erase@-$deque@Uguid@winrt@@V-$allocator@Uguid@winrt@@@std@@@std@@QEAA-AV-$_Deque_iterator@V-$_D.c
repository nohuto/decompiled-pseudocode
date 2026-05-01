/*
 * XREFs of ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x1802E812A
 * Callers:
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1802E7E96 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18063A0A8 (-RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x1802E7FEC (-erase@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_v.c)
 */

__int64 **__fastcall std::deque<winrt::guid>::erase(__int64 *a1, __int64 **a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = *a3;
  v5 = a3[2];
  v7[1] = 0LL;
  v8[1] = 0LL;
  v7[0] = v3;
  v8[0] = v3;
  v7[2] = v5 + 1;
  v8[2] = v5;
  std::deque<tagRECT>::erase(a1, a2, (__int64)v8, (__int64)v7);
  return a2;
}
