/*
 * XREFs of sub_18008BF88 @ 0x18008BF88
 * Callers:
 *     sub_18008BEC0 @ 0x18008BEC0 (sub_18008BEC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_18008BAC8 @ 0x18008BAC8 (sub_18008BAC8.c)
 *     sub_18008BC7C @ 0x18008BC7C (sub_18008BC7C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008BF88(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  unsigned int v5; // r15d
  __int64 *v6; // rsi
  char v7; // r14
  int v8; // ecx
  char v9; // al
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-51h]
  _QWORD v20[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF

  v19 = a2;
  v4 = *a2;
  v5 = *(_DWORD *)(*a2 + 88);
  v6 = (__int64 *)(a1 + 144);
  v7 = 1;
  if ( *(_QWORD *)(a1 + 152) && (*(_DWORD *)(a1 + 152) != 1 || *(_DWORD *)(*(_QWORD *)*v6 + 32LL) != v5) )
  {
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 96);
    if ( v8 != *(_DWORD *)(v4 + 96) )
      goto LABEL_12;
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_12;
      if ( *(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112) == *(_QWORD *)(v4 + 120) - *(_QWORD *)(v4 + 112) )
        v9 = sub_18008BC7C(*(_QWORD *)(a1 + 112), *(_QWORD **)(a1 + 120), *(_QWORD *)(v4 + 112));
      else
        v9 = 0;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v4 + 104);
    }
    if ( !v9 )
    {
LABEL_12:
      sub_180010DD0(v21, (__int64)"Attaching a device vertex layout to an incompatible vertex layout.");
      v10 = sub_180010DD0(
              v20,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\eng"
                       "ine\\vertexlayout.cpp");
      sub_18006ED7C(pExceptionObject, (__int64)v10, v11, (const char *)v21, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  v18 = v5;
  v12 = *(_QWORD *)sub_180054270(v6, (__int64)v20, &v18);
  result = *a2;
  v14 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(v12 + 40) = result;
  v15 = *(_QWORD *)(v12 + 48);
  *(_QWORD *)(v12 + 48) = v14;
  if ( v15 )
    result = sub_180010530(v15);
  if ( v7 )
  {
    v18 = v5;
    v16 = *(_QWORD *)(*(_QWORD *)sub_180054270(v6, (__int64)v20, &v18) + 40LL);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(v16 + 96);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(v16 + 104);
    if ( a1 + 112 != v16 + 112 )
      sub_18008BAC8((_QWORD *)(a1 + 112), *(_QWORD *)(v16 + 112), *(_QWORD *)(v16 + 120));
    result = *(_QWORD *)(v16 + 136);
    *(_QWORD *)(a1 + 136) = result;
  }
  v17 = a2[1];
  if ( v17 )
    return sub_180010530(v17);
  return result;
}
