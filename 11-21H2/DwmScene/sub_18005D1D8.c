/*
 * XREFs of sub_18005D1D8 @ 0x18005D1D8
 * Callers:
 *     sub_18002A08C @ 0x18002A08C (sub_18002A08C.c)
 *     sub_18002A630 @ 0x18002A630 (sub_18002A630.c)
 *     sub_18005D638 @ 0x18005D638 (sub_18005D638.c)
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18005C750 @ 0x18005C750 (sub_18005C750.c)
 *     sub_18005CF8C @ 0x18005CF8C (sub_18005CF8C.c)
 *     sub_18005D3E4 @ 0x18005D3E4 (sub_18005D3E4.c)
 *     sub_18005E22C @ 0x18005E22C (sub_18005E22C.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005D1D8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rsi
  _DWORD **v5; // r14
  _DWORD *v6; // r14
  char v7; // r15
  __int64 v8; // rax
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // r8
  __int64 *v11; // rax
  void *v12; // r8
  void **v13; // r9
  void *v14; // rcx
  _DWORD *v15; // rax
  unsigned int v17; // eax
  int v18; // r8d
  unsigned int v19; // eax
  int v20; // r8d
  _QWORD v21[2]; // [rsp+30h] [rbp-69h] BYREF
  LPVOID lpMem; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v25[4]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+90h] [rbp-9h] BYREF

  lpMem = a2;
  v4 = *a2;
  v5 = *(_DWORD ***)(*a2 + 112LL);
  if ( !v5 || (v6 = *v5) == 0LL )
  {
    sub_1800113D0(v24, "Attaching an uninitialized device texture.");
    v19 = (unsigned int)sub_1800113D0(
                          v25,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\texture.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v19, v20, (unsigned int)v24, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = 1;
  if ( *(_QWORD *)(a1 + 120)
    && (*(_DWORD *)(a1 + 120) != 1 || *(_DWORD *)(**(_QWORD **)(a1 + 112) + 32LL) != *(_DWORD *)(v4 + 88)) )
  {
    v7 = 0;
    if ( sub_18005CF8C(*(_DWORD **)(a1 + 128), v6)
      || (v8 = sub_18005E244(a1, v23),
          v9 = (unsigned __int64 *)sub_18005E22C(v4, v21, v8),
          (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*v9, (__m128)*v10)) & 3) != 3) )
    {
      sub_1800113D0(v25, "Attaching a texture buffer to an incompatible texture");
      v17 = (unsigned int)sub_1800113D0(
                            v24,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\texture.cpp");
      sub_180079B60((unsigned int)pExceptionObject, v17, v18, (unsigned int)v25, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  v21[0] = v4;
  v21[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_18005D3E4(a1, v21);
  if ( v7 )
  {
    v11 = sub_18005C750((__int64 *)&lpMem, (__int64)v6);
    v13 = (void **)(a1 + 128);
    if ( (__int64 *)(a1 + 128) != v11 )
    {
      v12 = (void *)*v11;
      *v11 = 0LL;
      v14 = *v13;
      *v13 = v12;
      if ( v14 )
        sub_18000B998(v14);
    }
    if ( lpMem )
      sub_18000B998(lpMem);
    v15 = (_DWORD *)sub_18005E22C(v4, v21, v12);
    *(_DWORD *)(a1 + 144) = *v15;
    *(_DWORD *)(a1 + 148) = v15[1];
  }
  return sub_180010910((__int64)a2);
}
