/*
 * XREFs of sub_1800D0260 @ 0x1800D0260
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800C8B38 @ 0x1800C8B38 (sub_1800C8B38.c)
 *     sub_1800CF7CC @ 0x1800CF7CC (sub_1800CF7CC.c)
 *     sub_1800D048C @ 0x1800D048C (sub_1800D048C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800D0260(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 *); // rdi
  int v7; // ebx
  int v8; // edx
  __int64 v9; // rbx
  const char *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 56LL))(*a2);
  if ( !(_BYTE)result )
  {
    sub_1800C8B38(&v15, a2);
    sub_1800D048C(v15, &v12);
    v11 = 0LL;
    v5 = v12;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 912LL);
    sub_18000E72C(&v11);
    v7 = v6(v5, 0LL, &v11);
    sub_180011C50(a1 + 72, &v17);
    sub_1800CF7CC(&v13, &v17);
    if ( v18 )
      sub_180010530(v18);
    v8 = v7;
    v9 = v13;
    sub_1800C7750(v13, v8);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) )
    {
      v10 = (const char *)sub_18002963C(*a2, &v17);
      if ( *((_QWORD *)v10 + 3) >= 0x10uLL )
        v10 = *(const char **)v10;
      sub_18001145C(v11, v10);
      sub_180011B24((__int64)&v17);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 464LL))(
        *(_QWORD *)(a1 + 144),
        v11,
        0LL);
    }
    if ( v14 )
      sub_180010530(v14);
    sub_18000E72C(&v11);
    result = sub_18000E72C(&v12);
    if ( v16 )
      return sub_180010530(v16);
  }
  return result;
}
