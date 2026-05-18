/*
 * XREFs of sub_1800D7788 @ 0x1800D7788
 * Callers:
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     unknown_libname_4 @ 0x1800216E0 (unknown_libname_4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D7788(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD, _QWORD *, const char *, const char *, int); // rdi
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  _BYTE v14[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-40h]

  v15 = a6;
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v9 = unknown_libname_4(a6);
    v10 = *a1;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, const char *, const char *, int))(*(_QWORD *)*a1 + 40LL);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)a1[2] + 8LL))(a1[2], v14);
    result = v11(
               v10,
               a5,
               *v12,
               v9,
               "InitializeRenderer",
               "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\rendererd3d11.cpp",
               a3);
  }
  v13 = a6[3];
  if ( v13 >= 0x10 )
    result = sub_180010884((char *)*a6, v13 + 1);
  a6[2] = 0LL;
  a6[3] = 15LL;
  *(_BYTE *)a6 = 0;
  return result;
}
