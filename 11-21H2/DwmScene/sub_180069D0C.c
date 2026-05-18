/*
 * XREFs of sub_180069D0C @ 0x180069D0C
 * Callers:
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18004B9DC @ 0x18004B9DC (sub_18004B9DC.c)
 *     sub_18004C088 @ 0x18004C088 (sub_18004C088.c)
 *     sub_18004C5C4 @ 0x18004C5C4 (sub_18004C5C4.c)
 *     sub_18004C658 @ 0x18004C658 (sub_18004C658.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001FEAC @ 0x18001FEAC (sub_18001FEAC.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18005807C @ 0x18005807C (sub_18005807C.c)
 *     sub_18009079C @ 0x18009079C (sub_18009079C.c)
 *     sub_1800908B4 @ 0x1800908B4 (sub_1800908B4.c)
 *     sub_180090D00 @ 0x180090D00 (sub_180090D00.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180069D0C(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // eax
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rax
  void *v11; // rax
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD v15[3]; // [rsp+30h] [rbp-79h] BYREF
  char *v16[3]; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-49h]
  char *v18[3]; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp-29h]
  char *v20[3]; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp-9h]
  char *pExceptionObject[3]; // [rsp+A8h] [rbp-1h] BYREF
  unsigned __int64 v23; // [rsp+C0h] [rbp+17h]

  v15[2] = a2;
  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_1800113D0(
      v16,
      "ShaderFamily::SetPropertyLayout() -- Cannot set property layout after the shader family has ended declaration");
    v13 = sub_1800113D0(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v13, v14, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = sub_1800908B4(*a2);
  v5 = v4;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a2[1];
  }
  v8 = *a2;
  v15[0] = *(_QWORD *)(a1 + 16LL * v4 + 96);
  *(_QWORD *)(a1 + 16LL * v4 + 96) = v8;
  v15[1] = *(_QWORD *)(a1 + 16LL * v4 + 104);
  *(_QWORD *)(a1 + 16LL * v4 + 104) = v7;
  sub_180010910((__int64)v15);
  if ( !*(_QWORD *)(sub_18009079C(*a2) + 16) )
  {
    v9 = sub_18005807C((__int64 *)v16, v5);
    v10 = sub_18001DC84((__int64)pExceptionObject, v9);
    v11 = (void *)sub_18001FEAC((__int64)v18, v10, (_QWORD *)(a1 + 16));
    sub_18001DC84((__int64)v20, v11);
    if ( v19 >= 0x10 )
      sub_180010884(v18[0], v19 + 1);
    v18[2] = 0LL;
    v19 = 15LL;
    LOBYTE(v18[0]) = 0;
    if ( v23 >= 0x10 )
      sub_180010884(pExceptionObject[0], v23 + 1);
    pExceptionObject[2] = 0LL;
    v23 = 15LL;
    LOBYTE(pExceptionObject[0]) = 0;
    if ( v17 >= 0x10 )
      sub_180010884(v16[0], v17 + 1);
    v16[2] = 0LL;
    v17 = 15LL;
    LOBYTE(v16[0]) = 0;
    sub_180090D00(*a2, v20);
    if ( v21 >= 0x10 )
      sub_180010884(v20[0], v21 + 1);
  }
  return sub_180010910((__int64)a2);
}
