/*
 * XREFs of sub_18005BFC0 @ 0x18005BFC0
 * Callers:
 *     sub_18005BF0C @ 0x18005BF0C (sub_18005BF0C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180047DEC @ 0x180047DEC (sub_180047DEC.c)
 *     sub_180072240 @ 0x180072240 (sub_180072240.c)
 *     sub_1800733CC @ 0x1800733CC (sub_1800733CC.c)
 *     sub_1800A2214 @ 0x1800A2214 (sub_1800A2214.c)
 *     sub_1800A22CC @ 0x1800A22CC (sub_1800A22CC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_18005BFC0(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  char result; // al
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  char *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rcx
  char v19[8]; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h]
  _QWORD v27[4]; // [rsp+78h] [rbp-88h] BYREF
  char *v28; // [rsp+98h] [rbp-68h] BYREF
  char *v29; // [rsp+A0h] [rbp-60h]
  _BYTE v30[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v31[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v32[4]; // [rsp+D8h] [rbp-28h] BYREF
  char v33[32]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+118h] [rbp+18h] BYREF

  v6 = a1 + 212;
  result = sub_180047DEC(a1[212], (__int64)&off_1801C96A0);
  if ( !result )
  {
    sub_18001C680(v33, a1 + 3, " effect");
    v8 = (_QWORD *)sub_180026580(*a2);
    sub_18001246C(&v25, v8);
    sub_1800A2214(v30, &v25, v33);
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a3 + 200LL))(*a3, v19);
    sub_180030FD4(v31, v9);
    if ( v20 )
      sub_180010574(v20);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 152LL))(*a3);
    sub_18001246C(&v21, v10);
    sub_1800733CC(v21, &v28, v6);
    v11 = v28;
    if ( v28 != v29 )
    {
      if ( (unsigned __int64)((v29 - v28) >> 4) > 1 )
      {
        sub_180010DD0(v32, (__int64)"Camera::RenderEffects() -- only one effect per output is currently supported");
        v12 = sub_180010DD0(
                v27,
                (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\camera.cpp");
        sub_18003AF58(pExceptionObject, (__int64)v12, v13, (__int64)v32, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_DWORD *)(*(_QWORD *)v28 + 176LL) != 1 )
      {
        sub_180010DD0(
          v32,
          (__int64)"Camera::RenderEffects() -- effect must have local scope to be rendered by a camera");
        v14 = sub_180010DD0(
                v27,
                (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\camera.cpp");
        sub_18003AF58(pExceptionObject, (__int64)v14, v15, (__int64)v32, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_BYTE *)(*(_QWORD *)v28 + 136LL) )
      {
        sub_18001246C(&v23, a1 + 17);
        sub_180026B04(v23, v32);
        v16 = (unsigned int)sub_18001246C(v27, v11);
        sub_180072240(v21, (unsigned int)v19, (_DWORD)a3, v16, v17);
        if ( v24 )
          sub_180010530(v24);
        v18 = a1[220];
        if ( v18 )
          (*(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v18 + 16LL))(v18, *(_QWORD *)v11, v19);
        if ( v20 )
          sub_180010530((__int64)v20);
      }
    }
    sub_180013300((__int64)&v28);
    if ( v22 )
      sub_180010530(v22);
    sub_180031CF0((__int64)v31);
    sub_1800A22CC(v30);
    if ( v26 )
      sub_180010530(v26);
    return sub_180011B24((__int64)v33);
  }
  return result;
}
