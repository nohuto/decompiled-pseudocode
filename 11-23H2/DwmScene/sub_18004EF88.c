/*
 * XREFs of sub_18004EF88 @ 0x18004EF88
 * Callers:
 *     sub_180034AB0 @ 0x180034AB0 (sub_180034AB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004DC30 @ 0x18004DC30 (sub_18004DC30.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_1800504A0 @ 0x1800504A0 (sub_1800504A0.c)
 *     sub_180060070 @ 0x180060070 (sub_180060070.c)
 *     sub_180060AB4 @ 0x180060AB4 (sub_180060AB4.c)
 *     sub_180060E4C @ 0x180060E4C (sub_180060E4C.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18004EF88(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  char *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 result; // rax
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h]
  _QWORD *v28; // [rsp+80h] [rbp-80h]
  _QWORD v29[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v30[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 pExceptionObject; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-30h]
  _QWORD v33[7]; // [rsp+100h] [rbp+0h] BYREF

  v28 = a2;
  if ( sub_180011DD0(a2) )
  {
    sub_180010DD0(v30, (__int64)"ShaderManager::AddExtension() -- Extension passed to function cannot be null");
    v4 = sub_180010DD0(
           v23,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    sub_18003AF58(&pExceptionObject, (__int64)v4, v5, (__int64)v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  sub_180060AB4(*a2, v29);
  v6 = sub_180017648(v23, (__int64)v29);
  if ( (unsigned __int8)sub_1800504A0(a1, v6) )
  {
    v7 = sub_18001C74C((char *)v30, "ShaderManager::AddExtension() -- Extension with name '", v29);
    v8 = sub_18001C61C(&pExceptionObject, v7, (__int64)"' is already installed");
    v9 = sub_180010DD0(
           v23,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    sub_18003AF58(v33, (__int64)v9, v10, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v33;
  }
  sub_180060E4C(*a2, *(_QWORD *)(a1 + 18688), a1, a1 + 18664);
  v11 = *(_QWORD *)sub_18004DC30((__int64 *)(a1 + 18592), (__int64)v23, v29);
  v12 = *a2;
  v13 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(v11 + 64) = v12;
  v14 = *(_QWORD *)(v11 + 72);
  *(_QWORD *)(v11 + 72) = v13;
  if ( v14 )
    sub_180010530(v14);
  v15 = sub_180017648(v23, (__int64)v29);
  sub_1800502A4(a1, &pExceptionObject, v15);
  sub_18003655C(*(_QWORD *)(a1 + 18688), &v26);
  v16 = 0;
  v17 = v26;
  if ( (v27 - v26) >> 4 )
  {
    v18 = 0LL;
    do
    {
      sub_18001246C(&v24, (_QWORD *)(v17 + 16 * v18));
      if ( (unsigned int)sub_180026650(v24) )
      {
        sub_18002A070(v19 + 24, (__int64)v23);
        v20 = sub_18001246C(v30, &v24);
        sub_180060070(pExceptionObject, v20);
        sub_180010F54((__int64)v23);
      }
      if ( v25 )
        sub_180010530(v25);
      ++v16;
      v17 = v26;
      v18 = v16;
    }
    while ( v16 < (unsigned __int64)((v27 - v26) >> 4) );
  }
  sub_180013300((__int64)&v26);
  if ( v32 )
    sub_180010530(v32);
  result = sub_180011B24((__int64)v29);
  v22 = a2[1];
  if ( v22 )
    return sub_180010530(v22);
  return result;
}
