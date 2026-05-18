/*
 * XREFs of sub_180060800 @ 0x180060800
 * Callers:
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_18009AA00 @ 0x18009AA00 (sub_18009AA00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_1800829E4 @ 0x1800829E4 (sub_1800829E4.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180060800(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  unsigned int v4; // edi
  _QWORD *v5; // rsi
  __int64 *v6; // rax
  _QWORD *v7; // rax
  unsigned int i; // edi
  __int64 *v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+38h] [rbp-49h] BYREF
  __int64 v12; // [rsp+40h] [rbp-41h]
  __int64 v13; // [rsp+50h] [rbp-31h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+70h] [rbp-11h] BYREF
  __int64 v16; // [rsp+78h] [rbp-9h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp+Fh] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_180010DD0(&v15, (__int64)"ShaderFamily::EndDeclaration() -- this function must only be called once.");
    v2 = sub_180010DD0(
           &v13,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v2, v3, (__int64)&v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = 0;
  v5 = (_QWORD *)(a1 + 96);
  do
  {
    sub_18001246C(&v11, &v5[2 * (int)v4]);
    if ( sub_180011DD0(&v11) )
    {
      v6 = sub_18004F718(*(_QWORD *)(a1 + 440), &v15, v4);
      sub_180011020(&v11, v6);
      if ( v16 )
        sub_180010530(v16);
      sub_180082B30(v11);
      v7 = sub_18001246C(&v13, &v11);
      sub_1800613A4(a1, v7);
    }
    if ( v12 )
      sub_180010530(v12);
    ++v4;
  }
  while ( v4 < 0xA );
  *(_DWORD *)(a1 + 432) = 1;
  for ( i = 0; i < 0xA; ++i )
  {
    v9 = (__int64 *)sub_1800829E4(*v5, &v13);
    result = (__int64)sub_180011020((_QWORD *)(a1 + 16 * ((int)i + 16LL)), v9);
    if ( v14 )
      result = sub_180010530(v14);
    v5 += 2;
  }
  return result;
}
