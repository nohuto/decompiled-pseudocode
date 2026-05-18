/*
 * XREFs of sub_18005CB40 @ 0x18005CB40
 * Callers:
 *     sub_18005CA40 @ 0x18005CA40 (sub_18005CA40.c)
 *     sub_18005DEB4 @ 0x18005DEB4 (sub_18005DEB4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18005CB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v11; // eax
  int v12; // r8d
  unsigned int v13; // eax
  int v14; // r8d
  unsigned int v15; // eax
  int v16; // r8d
  _QWORD v17[4]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v18[4]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+88h] [rbp-1h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSetView::`vftable';
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a1 + 48) = -1;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  if ( v8 == v9 )
    goto LABEL_13;
  do
  {
    if ( *(_DWORD *)(v8 + 28) == v6 )
    {
      ++v6;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 28) )
      {
        sub_1800113D0(v17, "TextureImageSetView: texture image mip levels are not consecutive ascending integers");
        v11 = (unsigned int)sub_1800113D0(
                              v18,
                              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\sour"
                              "ce\\engine\\texture.cpp");
        sub_180079B60((unsigned int)pExceptionObject, v11, v12, (unsigned int)v17, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      if ( v7 )
      {
        if ( v6 != *(_DWORD *)(a1 + 48) )
        {
          sub_1800113D0(
            v17,
            "TextureImageSetView: texture array elements must all have the same number of mip levels defined");
          v15 = (unsigned int)sub_1800113D0(
                                v18,
                                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\so"
                                "urce\\engine\\texture.cpp");
          sub_180079B60((unsigned int)pExceptionObject, v15, v16, (unsigned int)v17, 0);
          throw (Spectre::Engine::EngineException *)pExceptionObject;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v6;
      }
      ++v7;
      v6 = 1;
    }
    v8 += 32LL;
  }
  while ( v8 != v9 );
  if ( !v7 )
  {
LABEL_13:
    *(_DWORD *)(a1 + 48) = v6;
  }
  else if ( v6 != *(_DWORD *)(a1 + 48) )
  {
    sub_1800113D0(
      v18,
      "TextureImageSetView: texture array elements must all have the same number of mip levels defined");
    v13 = (unsigned int)sub_1800113D0(
                          v17,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\texture.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v13, v14, (unsigned int)v18, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( *(_QWORD *)a2 )
  {
    sub_180010884(*(char **)a2, (*(_QWORD *)(a2 + 16) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  return a1;
}
