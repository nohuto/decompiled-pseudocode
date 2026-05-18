/*
 * XREFs of sub_18004E560 @ 0x18004E560
 * Callers:
 *     sub_180014370 @ 0x180014370 (sub_180014370.c)
 *     sub_18008AC50 @ 0x18008AC50 (sub_18008AC50.c)
 *     sub_18009BCE8 @ 0x18009BCE8 (sub_18009BCE8.c)
 *     sub_18009BF94 @ 0x18009BF94 (sub_18009BF94.c)
 *     sub_1800AC330 @ 0x1800AC330 (sub_1800AC330.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18004E1AC @ 0x18004E1AC (sub_18004E1AC.c)
 *     sub_18004E370 @ 0x18004E370 (sub_18004E370.c)
 *     sub_18004E6B8 @ 0x18004E6B8 (sub_18004E6B8.c)
 *     sub_18004EC90 @ 0x18004EC90 (sub_18004EC90.c)
 *     sub_18004ECA4 @ 0x18004ECA4 (sub_18004ECA4.c)
 *     sub_18004ECB8 @ 0x18004ECB8 (sub_18004ECB8.c)
 *     sub_18004ECE0 @ 0x18004ECE0 (sub_18004ECE0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18004E560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // r8
  unsigned int v6; // r9d
  char v7; // di
  char v8; // al
  __int64 v9; // r9
  __int64 v10; // r8
  char v11; // si
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // r8
  char v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // r8d
  _QWORD v19[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v20[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( (unsigned __int8)sub_18004ECE0(a1, a2, a3, (unsigned int)a2) )
  {
    sub_1800113D0(
      v20,
      "Mesh::ComputeRequiredData() -- Modification of a mesh that while it is mapped is not supported.");
    v17 = (unsigned int)sub_1800113D0(
                          v19,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\mesh.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v17, v18, (unsigned int)v20, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18002BCC0(v4, 4, 1);
  if ( (unsigned __int8)sub_18004ECA4() )
  {
    v7 = v5 & (v6 >> 2);
    v8 = sub_18004EC90(a1);
    v11 = v10 & v9 & ~v8;
    LOBYTE(v9) = v9 & 2;
    v13 = sub_18004ECB8(a1, v12, v10, v9);
    LOBYTE(v16) = v15 != 0 ? v14 ^ v13 : 0;
    if ( (_BYTE)v16 && sub_1800122B0((_QWORD *)(a1 + 240)) )
    {
      sub_18001F2B4(
        &stru_1801EA2E8,
        3,
        "Attempting to compute tangents for mesh without UV coordinates. Tangents will not be calculated.");
      LOBYTE(v16) = 0;
    }
    if ( v11 )
    {
      if ( (_BYTE)v16 )
        sub_18004E370(a1, v16, v7);
      else
        sub_18004E1AC(a1);
    }
    else if ( (_BYTE)v16 )
    {
      LOBYTE(v14) = v7;
      sub_18004E6B8(a1, v16, v14);
    }
  }
}
