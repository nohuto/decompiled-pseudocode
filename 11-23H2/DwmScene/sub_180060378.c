/*
 * XREFs of sub_180060378 @ 0x180060378
 * Callers:
 *     sub_180060340 @ 0x180060340 (sub_180060340.c)
 *     sub_180060458 @ 0x180060458 (sub_180060458.c)
 *     sub_18007CD0C @ 0x18007CD0C (sub_18007CD0C.c)
 *     sub_18007D430 @ 0x18007D430 (sub_18007D430.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 * Callees:
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18005EF50 @ 0x18005EF50 (sub_18005EF50.c)
 *     sub_18005F370 @ 0x18005F370 (sub_18005F370.c)
 *     sub_18005F710 @ 0x18005F710 (sub_18005F710.c)
 *     sub_180060DC4 @ 0x180060DC4 (sub_180060DC4.c)
 *     sub_180086AC4 @ 0x180086AC4 (sub_180086AC4.c)
 *     sub_18008784C @ 0x18008784C (sub_18008784C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180060378(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD v14[7]; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+10h]

  v16 = a2;
  sub_18005F710(a2, a1);
  v14[0] = a3;
  v14[1] = a4;
  sub_180086AC4(*a2, v14);
  if ( a5 )
  {
    v9 = *a2;
    v10 = sub_180010DD0(v14, (__int64)byte_180106082);
    sub_18008784C(v9, v10);
  }
  v15 = sub_180060DC4(a1);
  if ( !v15 )
    sub_18001DB68(
      &stru_1801C8448,
      2,
      "ShaderFamily::CreatePipeline() -- shaderModel is in invalid state. Pipeline creation must happen during a BeginSha"
      "derModel() / EndShaderModel() block.");
  v12 = sub_18005F370((__int64 *)(a1 + 416), (__int64)v14, &v15, v11);
  sub_18005EF50(*(_QWORD *)v12 + 40LL, *(_QWORD *)(*(_QWORD *)v12 + 40LL), a2);
  return a2;
}
