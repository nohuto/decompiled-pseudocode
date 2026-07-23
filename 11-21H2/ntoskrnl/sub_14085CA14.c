/*
 * XREFs of sub_14085CA14 @ 0x14085CA14
 * Callers:
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_14084440C @ 0x14084440C (sub_14084440C.c)
 *     sub_14084442C @ 0x14084442C (sub_14084442C.c)
 *     sub_14085C97C @ 0x14085C97C (sub_14085C97C.c)
 *     sub_14085CB58 @ 0x14085CB58 (sub_14085CB58.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     sub_140942B68 @ 0x140942B68 (sub_140942B68.c)
 *     sub_140942CE4 @ 0x140942CE4 (sub_140942CE4.c)
 *     sub_140942DE4 @ 0x140942DE4 (sub_140942DE4.c)
 * Callees:
 *     sub_14085CAE8 @ 0x14085CAE8 (sub_14085CAE8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14085CA14(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  _QWORD **v4; // rdx
  PVOID *v5; // rcx

  sub_14085CAE8();
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P
    || (v3 = (PVOID *)P[1], *v3 != P)
    || (*v3 = v2, v2[1] = v3, v4 = (_QWORD **)P[9], v4[1] != P + 9)
    || (v5 = (PVOID *)P[10], *v5 != P + 9) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  v4[1] = v5;
  ExFreePoolWithTag(P, 0x53706E50u);
}
