/*
 * XREFs of ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x180238E36
 * Callers:
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180238AF6 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18057A674 (-RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x180238C76 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 */

_QWORD *__fastcall std::deque<winrt::guid>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rax
  __int64 *v7; // r10
  _QWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v11[5]; // [rsp+50h] [rbp-28h] BYREF

  v4 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
         v10,
         a3);
  ++v4[2];
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
    v9,
    (__int64)v4);
  v6 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
         v11,
         v5);
  std::deque<winrt::guid>::erase(v7, a2, (__int64)v6);
  return a2;
}
