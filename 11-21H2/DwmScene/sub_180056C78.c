/*
 * XREFs of sub_180056C78 @ 0x180056C78
 * Callers:
 *     sub_1800680DC @ 0x1800680DC (sub_1800680DC.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_18008918C @ 0x18008918C (sub_18008918C.c)
 *     sub_180089820 @ 0x180089820 (sub_180089820.c)
 *     sub_180089950 @ 0x180089950 (sub_180089950.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_18009CC54 @ 0x18009CC54 (sub_18009CC54.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 *     sub_1800ABC50 @ 0x1800ABC50 (sub_1800ABC50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_1800569D0 @ 0x1800569D0 (sub_1800569D0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180056C78(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rbx
  int v6; // eax
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD v15[4]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v17[4]; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v18[32]; // [rsp+B8h] [rbp-40h] BYREF

  v4 = 0LL;
  v5 = *(__int64 **)*a2;
  while ( !*((_BYTE *)v5 + 25) )
  {
    v6 = sub_1800569D0(a1, v5 + 4);
    if ( v6 == -1 )
    {
      v11 = sub_18001DD9C(
              v17,
              "ShaderManager::GetOptionGroup() -- option group contains a non-registered option name '",
              v5 + 4);
      v12 = sub_18001DC84((__int64)v18, v11);
      v13 = sub_1800113D0(
              v15,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_18003F4DC(pExceptionObject, (__int64)v13, v14, v12, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v4 |= 1LL << v6;
    v7 = (__int64 **)v5[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  sub_18005470C(a2, (__int64)a2);
  return v4;
}
