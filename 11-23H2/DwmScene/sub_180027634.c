/*
 * XREFs of sub_180027634 @ 0x180027634
 * Callers:
 *     sub_180025948 @ 0x180025948 (sub_180025948.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180027634(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  void **v6; // rcx
  _QWORD *v7; // rdx
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( !sub_18001F84C(a3) )
    sub_18001DE60(v6, ": ", 2uLL);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)a2 + 1) + 16LL))(*((_QWORD *)a2 + 1), v9, *a2);
  v7 = v9;
  if ( v9[3] >= 0x10uLL )
    v7 = (_QWORD *)v9[0];
  sub_18001DE60((void **)a3, v7, v9[2]);
  sub_180011B24((__int64)v9);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  sub_180011B24(a3);
  return a1;
}
