/*
 * XREFs of sub_180070348 @ 0x180070348
 * Callers:
 *     sub_18004BDC0 @ 0x18004BDC0 (sub_18004BDC0.c)
 *     sub_18009AD20 @ 0x18009AD20 (sub_18009AD20.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18002FC2C @ 0x18002FC2C (sub_18002FC2C.c)
 *     sub_180070198 @ 0x180070198 (sub_180070198.c)
 *     sub_180070704 @ 0x180070704 (sub_180070704.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180070348(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  struct _Mtx_internal_imp_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  _BYTE v10[48]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 24));
  v7 = 0LL;
  if ( a2 )
  {
    v8 = v3 << 32;
    v11 = v8 | a2;
    sub_180070704(a1 + 184, &v12, &v11);
    if ( v12 == *(_QWORD *)(a1 + 184) )
    {
      v7 = v8 | (unsigned int)sub_180070198(a1 + 216);
      *(_QWORD *)(*(_QWORD *)sub_18002FC2C((__int64 *)(a1 + 184), (__int64)v10, (unsigned __int64 *)&v11) + 40LL) = v7;
    }
    else
    {
      v7 = *(_QWORD *)(v12 + 40);
    }
  }
  Mtx_unlock(v6);
  return v7;
}
