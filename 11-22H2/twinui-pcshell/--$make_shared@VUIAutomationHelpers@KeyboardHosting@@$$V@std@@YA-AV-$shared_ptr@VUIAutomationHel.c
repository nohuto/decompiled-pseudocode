/*
 * XREFs of ??$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA?AV?$shared_ptr@VUIAutomationHelpers@KeyboardHosting@@@0@XZ @ 0x180531C1C
 * Callers:
 *     std::call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___ @ 0x18020CC2C (std--call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___.c)
 *     std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x180531B78 (std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@VUIAutomationHelpers@KeyboardHosting@@@std@@QEAA@XZ @ 0x1805303CC (--$-0$$V@-$_Ref_count_obj2@VUIAutomationHelpers@KeyboardHosting@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<KeyboardHosting::UIAutomationHelpers,>(_QWORD *a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+40h] [rbp+8h]

  v4 = operator new(0x18uLL);
  v2 = std::_Ref_count_obj2<KeyboardHosting::UIAutomationHelpers>::_Ref_count_obj2<KeyboardHosting::UIAutomationHelpers>((__int64)v4);
  *a1 = v2 + 16;
  a1[1] = v2;
  return a1;
}
