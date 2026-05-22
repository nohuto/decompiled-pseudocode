/*
 * XREFs of _dynamic_initializer_for__c_handedModifierMapping__ @ 0x180002110
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$map@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBGI@std@@@1@@Z @ 0x180055E78 (--0-$map@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@@std@@QEAA@V-$initializer_list@U-$.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

int __fastcall dynamic_initializer_for__c_handedModifierMapping__(__int64 a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v3; // [rsp+30h] [rbp-40h] BYREF
  int v4; // [rsp+34h] [rbp-3Ch]
  __int16 v5; // [rsp+38h] [rbp-38h]
  int v6; // [rsp+3Ch] [rbp-34h]
  __int16 v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+44h] [rbp-2Ch]
  __int16 v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+4Ch] [rbp-24h]
  __int16 v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  __int16 v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF

  v4 = 162;
  v3 = 224;
  v6 = 160;
  v5 = 225;
  v7 = 226;
  v9 = 228;
  v11 = 229;
  v13 = 230;
  v2[0] = &v3;
  v2[1] = &v15;
  v8 = 164;
  v10 = 163;
  v12 = 161;
  v14 = 165;
  std::map<unsigned short,unsigned int>::map<unsigned short,unsigned int>(a1, v2);
  return atexit(dynamic_atexit_destructor_for__c_handedModifierMapping__);
}
