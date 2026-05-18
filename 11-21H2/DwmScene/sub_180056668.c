/*
 * XREFs of sub_180056668 @ 0x180056668
 * Callers:
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_1800AB8A0 @ 0x1800AB8A0 (sub_1800AB8A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180054C28 @ 0x180054C28 (sub_180054C28.c)
 *     sub_18005561C @ 0x18005561C (sub_18005561C.c)
 *     sub_180057A40 @ 0x180057A40 (sub_180057A40.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_180056668(__int128 *a1, __int64 *a2, char **a3, _QWORD *a4)
{
  __int64 *v8; // rax
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v27[7]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E0h] [rbp-20h] BYREF

  v24[2] = a2;
  v24[3] = a3;
  v24[0] = a4;
  if ( !a3[2] )
  {
    sub_1800113D0(v25, "ShaderManager::CreateShaderFamily() -- shader family must have a non-empty name");
    v21 = sub_1800113D0(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(v27, (__int64)v21, v22, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v27;
  }
  v8 = sub_18001875C(v25, (__int64)a3);
  if ( (unsigned __int8)sub_180057A40(a1, v8) )
  {
    v17 = sub_18001DD9C(v26, "ShaderManager::CreateShaderFamily() -- shader family with name '", a3);
    v18 = sub_18001DC84((__int64)v27, v17);
    v19 = sub_1800113D0(
            v25,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v19, v20, v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v23 = 0LL;
  v9 = *((_QWORD *)a1 + 1);
  if ( !v9 )
LABEL_14:
    sub_1800120F4();
  v10 = *(_DWORD *)(v9 + 8);
  do
  {
    if ( !v10 )
      goto LABEL_14;
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
  }
  while ( v11 != v10 );
  v23 = *a1;
  sub_180054C28(a2, (__int64)a3, &v23, a4);
  sub_180010910((__int64)&v23);
  v12 = (_QWORD *)sub_18005561C((__int64 *)a1 + 2320, a3);
  v13 = a2[1];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a2[1];
  }
  v14 = *a2;
  v24[0] = *v12;
  *v12 = v14;
  v24[1] = v12[1];
  v12[1] = v13;
  sub_180010910((__int64)v24);
  v15 = (unsigned __int64)a3[3];
  if ( v15 >= 0x10 )
    sub_180010884(*a3, v15 + 1);
  a3[2] = 0LL;
  a3[3] = (char *)15;
  *(_BYTE *)a3 = 0;
  sub_180010910((__int64)a4);
  return a2;
}
