/*
 * XREFs of sub_1800D2850 @ 0x1800D2850
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_1800295C4 @ 0x1800295C4 (sub_1800295C4.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_180070B70 @ 0x180070B70 (sub_180070B70.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 *     sub_180088C1C @ 0x180088C1C (sub_180088C1C.c)
 *     sub_1800D044C @ 0x1800D044C (sub_1800D044C.c)
 *     sub_1800D35E0 @ 0x1800D35E0 (sub_1800D35E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D2850(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 *v8; // rdx
  int v9; // eax
  __int64 v10; // r10
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rbx
  __int64 result; // rax
  __int64 v18; // [rsp+30h] [rbp-69h] BYREF
  __int64 v19; // [rsp+38h] [rbp-61h] BYREF
  __int64 v20; // [rsp+40h] [rbp-59h] BYREF
  __int64 v21; // [rsp+48h] [rbp-51h]
  _QWORD v22[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v23[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  sub_180070B94();
  v9 = sub_1800295C4(*v8);
  sub_180070B70(v10, v9, 4);
  sub_180088C1C(*a2, &v20, *(_DWORD *)(a1 + 88));
  v11 = sub_180029674(*a2);
  if ( v11 == 8 )
  {
    v14 = sub_1800D044C(v20, &v18);
    v15 = &v18;
  }
  else
  {
    if ( v11 != 11 )
    {
      sub_180010DD0(v23, (__int64)"Invalid buffer type");
      v12 = sub_180010DD0(
              v22,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
      sub_18006ED7C(pExceptionObject, (__int64)v12, v13, (const char *)v23, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v14 = sub_1800D044C(v20, &v19);
    v15 = &v19;
  }
  v16 = *v14;
  sub_18000E72C(v15);
  result = sub_1800D35E0(a1, v16, a3, a4);
  if ( v21 )
    return sub_180010530(v21);
  return result;
}
