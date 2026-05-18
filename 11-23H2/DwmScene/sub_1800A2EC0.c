/*
 * XREFs of sub_1800A2EC0 @ 0x1800A2EC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180026844 @ 0x180026844 (sub_180026844.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_1800A1BDC @ 0x1800A1BDC (sub_1800A1BDC.c)
 *     sub_1800A1C58 @ 0x1800A1C58 (sub_1800A1C58.c)
 *     sub_1800A1CB4 @ 0x1800A1CB4 (sub_1800A1CB4.c)
 *     sub_1800A1DF4 @ 0x1800A1DF4 (sub_1800A1DF4.c)
 *     sub_1800A1E84 @ 0x1800A1E84 (sub_1800A1E84.c)
 *     sub_1800A1F28 @ 0x1800A1F28 (sub_1800A1F28.c)
 *     sub_1800A1F50 @ 0x1800A1F50 (sub_1800A1F50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800A2EC0(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h]
  __int64 v14; // [rsp+40h] [rbp-C0h]
  _QWORD v15[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16[22]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v17[4]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+138h] [rbp+38h] BYREF

  v2 = a1 + 8;
  v14 = a1 + 8;
  sub_18002A570(a1 + 8);
  if ( *(_DWORD *)(a1 + 16) != 1 )
  {
    sub_180010DD0(v17, (__int64)"Attempt to call EndTimeSpan() on a query marker that wasn't a timespan.");
    v3 = sub_180010DD0(
           v15,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\gpuprofiler\\gpuprofilerframe.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v3, v4, (const char *)v17, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = a1 + 32;
  if ( sub_1800A1DF4() )
  {
    v6 = (_QWORD *)sub_1800A1F28(a1 + 32, &v12);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 72LL))(*v6);
    if ( v13 )
      sub_180010530(v13);
    v7 = (__int64 *)sub_180026844(*(_QWORD *)(a1 + 24), (__int64)v16, 1u);
    v8 = a1 + 216;
    sub_1800A1CB4(v8, v7);
    sub_1800A1C58(v16);
    if ( sub_1800A1DF4() )
    {
      sub_1800A1F50(v5, v17);
      v9 = (_QWORD *)sub_1800A1F28(v5, v15);
      sub_1800A1E84(v8, v9, v10);
    }
    else
    {
      sub_1800A1BDC((__int64)v16);
      sub_1800A1CB4(v5, v16);
      sub_1800A1C58(v16);
    }
  }
  return sub_18002A62C(v2);
}
