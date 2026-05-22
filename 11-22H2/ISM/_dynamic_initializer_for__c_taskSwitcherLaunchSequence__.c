/*
 * XREFs of _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180002500
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@G_N@std@@@1@AEBV?$allocator@U?$pair@G_N@std@@@1@@Z @ 0x18004EC44 (--0-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@QEAA@V-$initializer_list@U-$.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

int dynamic_initializer_for__c_taskSwitcherLaunchSequence__()
{
  _QWORD v1[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v2; // [rsp+30h] [rbp-20h] BYREF
  char v3; // [rsp+32h] [rbp-1Eh]
  __int16 v4; // [rsp+34h] [rbp-1Ch]
  char v5; // [rsp+36h] [rbp-1Ah]
  __int16 v6; // [rsp+38h] [rbp-18h]
  char v7; // [rsp+3Ah] [rbp-16h]
  __int16 v8; // [rsp+3Ch] [rbp-14h]
  char v9; // [rsp+3Eh] [rbp-12h]
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF

  v3 = 1;
  v2 = 91;
  v5 = 1;
  v6 = 91;
  v7 = 0;
  v4 = 9;
  v8 = 9;
  v1[0] = &v2;
  v1[1] = &v10;
  v9 = 0;
  std::vector<std::pair<unsigned short,bool>>::vector<std::pair<unsigned short,bool>>(91LL, v1);
  return atexit(dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__);
}
