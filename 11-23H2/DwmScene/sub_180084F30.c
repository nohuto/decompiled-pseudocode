/*
 * XREFs of sub_180084F30 @ 0x180084F30
 * Callers:
 *     sub_1800850E8 @ 0x1800850E8 (sub_1800850E8.c)
 *     sub_18008549C @ 0x18008549C (sub_18008549C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180082F94 @ 0x180082F94 (sub_180082F94.c)
 *     sub_180085130 @ 0x180085130 (sub_180085130.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180084F30(__int64 a1)
{
  __int64 v2; // rbp
  __int64 result; // rax
  _QWORD *v4; // rax
  bool v5; // bl
  _QWORD *v6; // rax
  __int64 v7; // r8
  char v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // rdx
  unsigned int *i; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned int *v17; // r12
  unsigned int *j; // r14
  _QWORD *v19; // rdi
  __int64 *v20; // rbx
  _BYTE v21[8]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C0h]
  __int64 v23; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B0h]
  _QWORD v25[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v26[4]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  result = *(unsigned int *)(v2 + 80);
  if ( *(_DWORD *)(a1 + 104) != (_DWORD)result )
  {
    sub_180082F94(*(_QWORD *)(a1 + 16), &v23);
    v4 = (_QWORD *)sub_180085130(v2, v21);
    v5 = sub_180011DF0(&v23, v4);
    if ( v22 )
      sub_180010530(v22);
    if ( v5 )
    {
      sub_180010DD0(
        v26,
        (__int64)"ShaderPropertyBlock::FlushPropertiesFromMaster() -- cannot flush block properties unless the master lay"
                 "out has been previously attached via SetMasterLayout().");
      v6 = sub_180010DD0(
             v25,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\shaderpropertyblock.cpp");
      sub_18003AF58(pExceptionObject, (__int64)v6, v7, (__int64)v26, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v8 = 0;
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(unsigned int **)(v9 + 1200);
    for ( i = *(unsigned int **)(v9 + 1192); i != v10; i += 2 )
    {
      v12 = i[1];
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *i;
      v15 = *(_QWORD *)(v2 + 32);
      if ( *(_DWORD *)(v13 + 4 * v12) != *(_DWORD *)(v15 + 4 * v14) )
      {
        *(_DWORD *)(v13 + 4 * v12) = *(_DWORD *)(v15 + 4 * v14);
        v8 = 1;
      }
    }
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(unsigned int **)(v16 + 1224);
    for ( j = *(unsigned int **)(v16 + 1216); j != v17; j += 2 )
    {
      v19 = (_QWORD *)(*(_QWORD *)(v2 + 56) + 40LL * *j);
      v20 = (__int64 *)(*(_QWORD *)(a1 + 56) + 40LL * j[1]);
      sub_1800124F8(v20, v19);
      sub_1800124F8(v20 + 2, v19 + 2);
    }
    result = *(unsigned int *)(v2 + 80);
    *(_DWORD *)(a1 + 104) = result;
    if ( v8 )
      ++*(_DWORD *)(a1 + 80);
    if ( v24 )
      return sub_180010530(v24);
  }
  return result;
}
