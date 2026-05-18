/*
 * XREFs of sub_1800E0400 @ 0x1800E0400
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 *     sub_1800DFD10 @ 0x1800DFD10 (sub_1800DFD10.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E0400(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  char v5; // bp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  v15 = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v13 = a1 + 8;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 8));
  v12 = ++*(_DWORD *)(a1 + 88);
  v5 = *(_BYTE *)(a1 + 112);
  if ( !v5 )
  {
    v6 = (_QWORD *)sub_1800DFD10((__int64 *)(a1 + 96), (__int64)v14, (int *)&v12);
    v8 = *v6 + 40LL;
    if ( v8 != a2 )
    {
      sub_18001DE1C(*v6 + 40LL, v7);
      sub_18002771C(v8, a2);
    }
  }
  Mtx_unlock(v4);
  if ( v5 )
    sub_180025DA4(a2);
  v10 = v12;
  sub_18001DE1C(a2, v9);
  return v10;
}
