/*
 * XREFs of sub_180048440 @ 0x180048440
 * Callers:
 *     sub_180013AF0 @ 0x180013AF0 (sub_180013AF0.c)
 *     sub_18007E470 @ 0x18007E470 (sub_18007E470.c)
 *     sub_18008CE00 @ 0x18008CE00 (sub_18008CE00.c)
 *     sub_18008D07C @ 0x18008D07C (sub_18008D07C.c)
 *     sub_18009B380 @ 0x18009B380 (sub_18009B380.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_18004806C @ 0x18004806C (sub_18004806C.c)
 *     sub_180048240 @ 0x180048240 (sub_180048240.c)
 *     sub_180048594 @ 0x180048594 (sub_180048594.c)
 *     sub_180048AA0 @ 0x180048AA0 (sub_180048AA0.c)
 *     sub_180048AB4 @ 0x180048AB4 (sub_180048AB4.c)
 *     sub_180048AC8 @ 0x180048AC8 (sub_180048AC8.c)
 *     sub_180048AF0 @ 0x180048AF0 (sub_180048AF0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180048440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  int v6; // r8d
  char v7; // r8
  unsigned int v8; // r9d
  char v9; // di
  char v10; // al
  __int64 v11; // r9
  __int64 v12; // r8
  char v13; // si
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // r8
  char v17; // r9
  __int64 v18; // rdx
  _QWORD v19[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v20[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( (unsigned __int8)sub_180048AF0(a1, a2, a3, (unsigned int)a2) )
  {
    sub_180010DD0(
      v20,
      (__int64)"Mesh::ComputeRequiredData() -- Modification of a mesh that while it is mapped is not supported.");
    v5 = (unsigned int)sub_180010DD0(
                         v19,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v5, v6, (unsigned int)v20, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180029870(v4, 4, 1);
  if ( (unsigned __int8)sub_180048AB4() )
  {
    v9 = v7 & (v8 >> 2);
    v10 = sub_180048AA0(a1);
    v13 = v12 & v11 & ~v10;
    LOBYTE(v11) = v11 & 2;
    v15 = sub_180048AC8(a1, v14, v12, v11);
    LOBYTE(v18) = v17 != 0 ? v16 ^ v15 : 0;
    if ( (_BYTE)v18 && sub_180011DD0((_QWORD *)(a1 + 240)) )
    {
      sub_18001DB68(
        &stru_1801C82E8,
        3,
        "Attempting to compute tangents for mesh without UV coordinates. Tangents will not be calculated.");
      LOBYTE(v18) = 0;
    }
    if ( v13 )
    {
      if ( (_BYTE)v18 )
        sub_180048240(a1, v18, v9);
      else
        sub_18004806C(a1);
    }
    else if ( (_BYTE)v18 )
    {
      LOBYTE(v16) = v9;
      sub_180048594(a1, v18, v16);
    }
  }
}
