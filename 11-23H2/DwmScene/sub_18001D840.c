/*
 * XREFs of sub_18001D840 @ 0x18001D840
 * Callers:
 *     sub_18001D9B8 @ 0x18001D9B8 (sub_18001D9B8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001C808 @ 0x18001C808 (sub_18001C808.c)
 *     sub_18001C834 @ 0x18001C834 (sub_18001C834.c)
 *     sub_18001C9A4 @ 0x18001C9A4 (sub_18001C9A4.c)
 *     sub_18001D13C @ 0x18001D13C (sub_18001D13C.c)
 *     sub_18001D168 @ 0x18001D168 (sub_18001D168.c)
 *     sub_18001D308 @ 0x18001D308 (sub_18001D308.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18001D59C @ 0x18001D59C (sub_18001D59C.c)
 *     sub_18001D614 @ 0x18001D614 (sub_18001D614.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18001DEDC @ 0x18001DEDC (sub_18001DEDC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001D840(__int64 a1, int a2, __int64 a3)
{
  __int64 *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r9
  struct _Mtx_internal_imp_t *v9; // rax
  char v11; // [rsp+30h] [rbp-79h]
  int v12; // [rsp+38h] [rbp-71h] BYREF
  struct _Mtx_internal_imp_t *v13; // [rsp+40h] [rbp-69h] BYREF
  __int128 v14; // [rsp+48h] [rbp-61h] BYREF
  void *v15[2]; // [rsp+58h] [rbp-51h] BYREF
  __int128 *v16; // [rsp+68h] [rbp-41h] BYREF
  __int128 *v17; // [rsp+70h] [rbp-39h]
  int v18; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v19[56]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+17h]

  sub_18001D13C((__int64 *)v15);
  v13 = (struct _Mtx_internal_imp_t *)sub_18001D614();
  sub_180011C7C(v13);
  v6 = sub_18001D59C();
  v14 = 0LL;
  v16 = &v14;
  v17 = &v14;
  *(_QWORD *)&v14 = sub_18001C808();
  sub_18001C834(&v14, v6, v11, v7);
  v17 = 0LL;
  sub_18001D308((__int64)&v16);
  sub_18001DEDC(v15);
  sub_18001C834(v15, &v14, v11, v8);
  sub_18001C9A4((void **)&v14, (__int64)&v14);
  Mtx_unlock(v13);
  v9 = *(struct _Mtx_internal_imp_t **)v15[0];
  v13 = *(struct _Mtx_internal_imp_t **)v15[0];
  while ( !*((_BYTE *)v9 + 25) )
  {
    sub_18001D168(&v18, (_DWORD *)v9 + 8);
    v12 = a2;
    if ( !v20 )
    {
      std::_Xbad_function_call();
      return sub_18001C9A4(v15, (__int64)v15);
    }
    (*(void (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v20 + 16LL))(v20, a1, &v12, a3);
    sub_18001DE1C(v19);
    sub_18001D3F8((__int64 *)&v13);
    v9 = v13;
  }
  return sub_18001C9A4(v15, (__int64)v15);
}
