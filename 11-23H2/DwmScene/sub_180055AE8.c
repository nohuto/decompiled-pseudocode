/*
 * XREFs of sub_180055AE8 @ 0x180055AE8
 * Callers:
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180054DB8 @ 0x180054DB8 (sub_180054DB8.c)
 *     sub_180055188 @ 0x180055188 (sub_180055188.c)
 *     sub_180055754 @ 0x180055754 (sub_180055754.c)
 *     sub_1800558BC @ 0x1800558BC (sub_1800558BC.c)
 *     sub_180055CE8 @ 0x180055CE8 (sub_180055CE8.c)
 *     sub_180056680 @ 0x180056680 (sub_180056680.c)
 *     sub_180056698 @ 0x180056698 (sub_180056698.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180055AE8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  _DWORD **v5; // rsi
  _DWORD *v6; // rsi
  char v7; // r15
  void **v8; // r12
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // r8
  unsigned int v13; // eax
  int v14; // r8d
  __int64 result; // rax
  __int64 *v16; // rax
  __int64 v17; // r8
  _DWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // r8d
  _QWORD v22[2]; // [rsp+30h] [rbp-69h] BYREF
  void *v23; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v25[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v26[4]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+90h] [rbp-9h] BYREF

  v23 = a2;
  v4 = *a2;
  v5 = *(_DWORD ***)(*a2 + 112LL);
  if ( !v5 || (v6 = *v5) == 0LL )
  {
    sub_180010DD0(v25, (__int64)"Attaching an uninitialized device texture.");
    v20 = (unsigned int)sub_180010DD0(
                          v26,
                          (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                   "source\\engine\\texture.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v20, v21, (unsigned int)v25, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = 1;
  if ( !*(_QWORD *)(a1 + 120)
    || *(_DWORD *)(a1 + 120) == 1 && *(_DWORD *)(**(_QWORD **)(a1 + 112) + 32LL) == *(_DWORD *)(v4 + 88) )
  {
    v8 = (void **)(a1 + 128);
  }
  else
  {
    v7 = 0;
    v8 = (void **)(a1 + 128);
    if ( sub_1800558BC(*(_DWORD **)(a1 + 128), v6)
      || (v10 = sub_180056698(a1, v24, v9),
          v11 = (unsigned __int64 *)sub_180056680(v4, v22, v10),
          (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*v11, (__m128)*v12)) & 3) != 3) )
    {
      sub_180010DD0(v26, (__int64)"Attaching a texture buffer to an incompatible texture");
      v13 = (unsigned int)sub_180010DD0(
                            v25,
                            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cp"
                                     "p\\source\\engine\\texture.cpp");
      sub_18006ED7C((unsigned int)pExceptionObject, v13, v14, (unsigned int)v26, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  v22[0] = v4;
  v22[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  result = sub_180055CE8(a1, v22);
  if ( v7 )
  {
    v16 = sub_180055188((__int64 *)&v23, (__int64)v6);
    sub_180054DB8(v8, (void **)v16);
    sub_180055754(&v23);
    v18 = (_DWORD *)sub_180056680(v4, v22, v17);
    *(_DWORD *)(a1 + 144) = *v18;
    result = (unsigned int)v18[1];
    *(_DWORD *)(a1 + 148) = result;
  }
  v19 = a2[1];
  if ( v19 )
    return sub_180010530(v19);
  return result;
}
