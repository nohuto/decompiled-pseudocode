/*
 * XREFs of sub_180051F50 @ 0x180051F50
 * Callers:
 *     sub_18005346C @ 0x18005346C (sub_18005346C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180051F50(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rbx
  unsigned int v5; // eax
  int v6; // r8d
  __int64 v7; // [rsp+30h] [rbp-39h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h]
  _OWORD v9[2]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp+17h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v2) >> 3) )
  {
    sub_1800113D0(v10, "Out of range");
    v5 = (unsigned int)sub_1800113D0(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v5, v6, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v3 = (_QWORD *)(v2 + 88 * a2);
  v9[0] = 0LL;
  v7 = v3[3];
  v3[3] = 0LL;
  v8 = v3[4];
  v3[4] = 0LL;
  sub_180010910((__int64)&v7);
  sub_180010910((__int64)v9);
  v9[0] = 0LL;
  v7 = v3[5];
  v3[5] = 0LL;
  v8 = v3[6];
  v3[6] = 0LL;
  sub_180010910((__int64)&v7);
  sub_180010910((__int64)v9);
  v9[0] = 0LL;
  v7 = v3[7];
  v3[7] = 0LL;
  v8 = v3[8];
  v3[8] = 0LL;
  sub_180010910((__int64)&v7);
  sub_180010910((__int64)v9);
  v9[0] = 0LL;
  v7 = v3[9];
  v3[9] = 0LL;
  v8 = v3[10];
  v3[10] = 0LL;
  sub_180010910((__int64)&v7);
  return sub_180010910((__int64)v9);
}
