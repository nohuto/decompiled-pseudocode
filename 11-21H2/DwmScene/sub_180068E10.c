/*
 * XREFs of sub_180068E10 @ 0x180068E10
 * Callers:
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_1800AB8A0 @ 0x1800AB8A0 (sub_1800AB8A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180056524 @ 0x180056524 (sub_180056524.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_180090184 @ 0x180090184 (sub_180090184.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180068E10(__int64 a1)
{
  unsigned int v2; // r15d
  __int64 *v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 result; // rax
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int128 v18; // [rsp+38h] [rbp-89h] BYREF
  __int64 v19; // [rsp+48h] [rbp-79h] BYREF
  __int64 v20; // [rsp+50h] [rbp-71h]
  _QWORD v21[2]; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v23[4]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD v24[4]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-9h] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_1800113D0(v24, "ShaderFamily::EndDeclaration() -- this function must only be called once.");
    v16 = sub_1800113D0(
            v23,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v16, v17, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v2 = 0;
  v3 = (__int64 *)(a1 + 104);
  v4 = 10LL;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = *v3;
    }
    v6 = *(v3 - 1);
    v19 = v6;
    v20 = v5;
    if ( sub_1800122B0(&v19) )
    {
      v7 = sub_180056524(*(__int128 **)(a1 + 440), v22, v2);
      *(_QWORD *)&v18 = *v7;
      v8 = v18;
      v9 = v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      v21[0] = v6;
      v19 = v8;
      v21[1] = v5;
      v20 = v9;
      sub_180010910((__int64)v21);
      sub_180010910((__int64)v22);
      v10 = v18;
      sub_180090304(v18);
      v18 = 0LL;
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v9 = v20;
      }
      *(_QWORD *)&v18 = v10;
      *((_QWORD *)&v18 + 1) = v9;
      sub_180069D0C(a1, &v18);
    }
    sub_180010910((__int64)&v19);
    ++v2;
    v3 += 2;
  }
  while ( v2 < 0xA );
  *(_DWORD *)(a1 + 432) = 1;
  v11 = (_QWORD *)(a1 + 264);
  do
  {
    v12 = (__int64 *)sub_180090184(*(v11 - 21), v23);
    v13 = *v12;
    v14 = v12[1];
    *v12 = 0LL;
    v12[1] = 0LL;
    v24[0] = *(v11 - 1);
    *(v11 - 1) = v13;
    v24[1] = *v11;
    *v11 = v14;
    sub_180010910((__int64)v24);
    result = sub_180010910((__int64)v23);
    v11 += 2;
    --v4;
  }
  while ( v4 );
  return result;
}
