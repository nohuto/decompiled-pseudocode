/*
 * XREFs of _dynamic_initializer_for__BlockError__ @ 0x1800030E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x18013FBE0 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V-$initializer_l.c)
 */

int dynamic_initializer_for__BlockError__()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+44h] [rbp+Ch] BYREF

  v2 = 0xFFFF;
  v1[0] = &v2;
  v1[1] = &v3;
  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(&BlockError, v1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__BlockError__);
}
