/*
 * XREFs of sub_180081210 @ 0x180081210
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o___std_type_info_name @ 0x18000BEFE (_o___std_type_info_name.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18004ACFC @ 0x18004ACFC (sub_18004ACFC.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180081210(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v8; // rbx
  char *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD v15[4]; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+68h] [rbp-D0h] BYREF
  char v17[32]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD v18[4]; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD v19[4]; // [rsp+E0h] [rbp-58h] BYREF
  _QWORD v20[4]; // [rsp+100h] [rbp-38h] BYREF

  if ( (*a3 & 0x10000) == 0 )
  {
    _RTtypeid(a1);
    v8 = o___std_type_info_name();
    v9 = sub_18001C74C(v17, "Component::Clone() -- component '", (_QWORD *)(a1 + 24));
    v10 = sub_18001C61C(v18, v9, (__int64)"' of type ");
    v11 = sub_18001C61C(v19, v10, v8);
    v12 = sub_18001C61C(v20, v11, (__int64)" does not support cloning.");
    v13 = sub_180010DD0(
            v15,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\component.cpp");
    sub_18004ACFC(pExceptionObject, (__int64)v13, v14, (__int64)v12);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(_QWORD *)(a4 + 8);
  if ( v6 )
    sub_180010530(v6);
  return a2;
}
