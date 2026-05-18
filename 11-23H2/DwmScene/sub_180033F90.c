/*
 * XREFs of sub_180033F90 @ 0x180033F90
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x18000CA6D (memcmp.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18002EB5C @ 0x18002EB5C (sub_18002EB5C.c)
 *     sub_180034118 @ 0x180034118 (sub_180034118.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180033F90(__int64 a1, _QWORD *a2, const void **a3, _QWORD *a4)
{
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  const void *v13; // rdx
  size_t v14; // r8
  __int64 v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-28h]

  if ( !*a4 )
  {
    v8 = (__int64 *)sub_180034118(a1, &v17);
    sub_180011020(a4, v8);
    if ( v18 )
      sub_180010530((__int64)v18);
  }
  sub_180015604(&v17, a4);
  v9 = sub_18002EB5C(a1 + 728, (__int64)&v17);
  if ( v18 )
    sub_180010574(v18);
  v10 = *(_QWORD **)(v9 + 48);
  v11 = *(_QWORD **)(v9 + 56);
  while ( v10 != v11 )
  {
    v12 = (_QWORD *)(*v10 + 24LL);
    v13 = a3;
    if ( (unsigned __int64)a3[3] >= 0x10 )
      v13 = *a3;
    v14 = *(_QWORD *)(*v10 + 40LL);
    if ( *(_QWORD *)(*v10 + 48LL) >= 0x10uLL )
      v12 = (_QWORD *)*v12;
    if ( (const void *)v14 == a3[2] && !memcmp(v12, v13, v14) )
    {
      sub_18001246C(a2, v10);
      goto LABEL_17;
    }
    v10 += 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_17:
  v15 = a4[1];
  if ( v15 )
    sub_180010530(v15);
  return a2;
}
