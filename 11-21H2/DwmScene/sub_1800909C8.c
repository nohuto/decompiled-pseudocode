/*
 * XREFs of sub_1800909C8 @ 0x1800909C8
 * Callers:
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18008ED2C @ 0x18008ED2C (sub_18008ED2C.c)
 *     sub_1800907CC @ 0x1800907CC (sub_1800907CC.c)
 *     sub_1800908F8 @ 0x1800908F8 (sub_1800908F8.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800909C8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // ecx
  char *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ebx
  int i; // r15d
  int v22; // ecx
  char *v23; // rdx
  __int64 *v25; // rax
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // r8
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v37[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v38[4]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40[7]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+D0h] [rbp-30h] BYREF

  v37[2] = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_1800113D0(
      v38,
      "ShaderPropertyLayout::SetMasterLayout() -- layout declaration must be complete before another layout can be connec"
      "ted as a master.");
    v29 = sub_1800113D0(
            v39,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(v40, (__int64)v29, v30, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v40;
  }
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
    v4 = a2[1];
  }
  v5 = *a2;
  v37[0] = *(_QWORD *)(a1 + 1176);
  *(_QWORD *)(a1 + 1176) = v5;
  v37[1] = *(_QWORD *)(a1 + 1184);
  *(_QWORD *)(a1 + 1184) = v4;
  sub_180010910((__int64)v37);
  *(_QWORD *)(a1 + 1200) = *(_QWORD *)(a1 + 1192);
  v6 = (__int64 *)(a1 + 1216);
  *(_QWORD *)(a1 + 1224) = *(_QWORD *)(a1 + 1216);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 64);
  v37[0] = v8;
  while ( v7 != v8 )
  {
    if ( !*(_DWORD *)(v7 + 48) )
      goto LABEL_32;
    if ( !sub_1800908F8(*a2, *(_WORD *)(v7 + 32)) )
    {
      v25 = sub_18001DD9C(
              v40,
              "ShaderPropertyLayout::SetMasterLayout() -- master layout does not have the property '",
              (_QWORD *)v7);
      v26 = sub_18001DC84((__int64)v39, v25);
      v27 = sub_1800113D0(
              v38,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shad"
              "erpropertylayout.cpp");
      sub_18003F4DC(pExceptionObject, (__int64)v27, v28, v26, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v10 = sub_1800907CC(v9, *(_WORD *)(v7 + 32));
    v11 = v10;
    v12 = *(_DWORD *)(v7 + 36);
    if ( v12 != *(_DWORD *)(v10 + 36) )
    {
      v31 = sub_18001DD9C(
              v39,
              "ShaderPropertyLayout::SetMasterLayout() -- master layout has different type for property '",
              (_QWORD *)v7);
      v32 = sub_18001DC84((__int64)v40, v31);
      v33 = sub_1800113D0(
              v38,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shad"
              "erpropertylayout.cpp");
      sub_18003F4DC(pExceptionObject, (__int64)v33, v34, v32, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    if ( v12 == 8 )
    {
      LODWORD(v35) = *(_DWORD *)(v10 + 40);
      HIDWORD(v35) = *(_DWORD *)(v7 + 40);
      v13 = *(char **)(a1 + 1224);
      if ( v13 == *(char **)(a1 + 1232) )
      {
        sub_18008ED2C(v6, v13, &v35);
      }
      else
      {
        *(_QWORD *)v13 = v35;
        v6[1] += 8LL;
      }
    }
    else
    {
      if ( v12 && (v14 = v12 - 1) != 0 && (v15 = v14 - 1) != 0 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 && (v19 = v18 - 1) != 0 )
            {
              if ( v19 != 1 )
                goto LABEL_32;
              v20 = 16;
            }
            else
            {
              v20 = 4;
            }
          }
          else
          {
            v20 = 3;
          }
        }
        else
        {
          v20 = 2;
        }
      }
      else
      {
        v20 = 1;
      }
      for ( i = 0; i < v20; ++i )
      {
        v22 = i + *(_DWORD *)(v7 + 40);
        LODWORD(v36) = i + *(_DWORD *)(v11 + 40);
        HIDWORD(v36) = v22;
        v23 = *(char **)(a1 + 1200);
        if ( v23 == *(char **)(a1 + 1208) )
        {
          sub_18008ED2C((__int64 *)(a1 + 1192), v23, &v36);
        }
        else
        {
          *(_QWORD *)v23 = v36;
          *(_QWORD *)(a1 + 1200) += 8LL;
        }
      }
      v6 = (__int64 *)(a1 + 1216);
      v8 = v37[0];
    }
LABEL_32:
    v7 += 56LL;
  }
  return sub_180010910((__int64)a2);
}
