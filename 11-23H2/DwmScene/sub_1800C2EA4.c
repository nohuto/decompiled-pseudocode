/*
 * XREFs of sub_1800C2EA4 @ 0x1800C2EA4
 * Callers:
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     unknown_libname_3 @ 0x1800203B4 (unknown_libname_3.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C2EA4(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  void (__fastcall *v10)(__int64, __int64, _QWORD, _QWORD *, const char *, const char *, int); // rdi
  _QWORD *v11; // rax
  _BYTE v13[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v14; // [rsp+48h] [rbp-40h]

  v14 = a6;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1) )
  {
    v8 = unknown_libname_3(a6);
    v9 = *a1;
    v10 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, const char *, const char *, int))(*(_QWORD *)*a1 + 40LL);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)a1[2] + 8LL))(a1[2], v13);
    v10(
      v9,
      a5,
      *v11,
      v8,
      "InitializeRenderer",
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\rendererd3d11.cpp",
      a3);
  }
  return sub_180011B24((__int64)a6);
}
