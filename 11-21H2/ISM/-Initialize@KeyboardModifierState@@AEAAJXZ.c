/*
 * XREFs of ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x18003990C
 * Callers:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180039888 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Insert_or_assign@KH@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x180039A30 (--$_Insert_or_assign@KH@-$unordered_map@KKU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall KeyboardModifierState::Initialize(KeyboardModifierState *this)
{
  char *v1; // rbx
  _BYTE v3[16]; // [rsp+20h] [rbp-10h] BYREF
  int v4; // [rsp+40h] [rbp+10h] BYREF
  int v5; // [rsp+48h] [rbp+18h] BYREF

  v4 = 0;
  v1 = (char *)this + 16;
  v5 = 1;
  std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>((char *)this + 16, v3, &v5, &v4);
  v4 = 0;
  v5 = 2;
  std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(v1, v3, &v5, &v4);
  v4 = 0;
  v5 = 4;
  std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(v1, v3, &v5, &v4);
  v4 = 0;
  v5 = 8;
  std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(v1, v3, &v5, &v4);
  v4 = 0;
  v5 = 16;
  std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(v1, v3, &v5, &v4);
  v4 = 0;
  v5 = 32;
  std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(v1, v3, &v5, &v4);
  v4 = 0;
  v5 = 64;
  std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(v1, v3, &v5, &v4);
  v4 = 0;
  v5 = 128;
  std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(v1, v3, &v5, &v4);
  return 0LL;
}
