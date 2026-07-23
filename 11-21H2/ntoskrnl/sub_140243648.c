/*
 * XREFs of sub_140243648 @ 0x140243648
 * Callers:
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 *     sub_140724E14 @ 0x140724E14 (sub_140724E14.c)
 *     sub_1407CDBA0 @ 0x1407CDBA0 (sub_1407CDBA0.c)
 * Callees:
 *     sub_140243794 @ 0x140243794 (sub_140243794.c)
 *     sub_14024393C @ 0x14024393C (sub_14024393C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140243648(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  int *v7; // rbx
  __int64 v9; // rdx
  _QWORD *v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  v7 = &dword_140C1BF00[14 * a1];
  sub_14024393C(v7, &v12);
  if ( a3 )
    sub_14042A5E0(a1, a3);
  if ( a4 )
  {
    v9 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v9 + 8) != a2 + 80 || (v11 = *(_QWORD **)(a2 + 88), *v11 != a2 + 80) )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(v9 + 8) = v11;
  }
  LOBYTE(v9) = v12;
  return sub_140243794(v7, v9);
}
