/*
 * XREFs of sub_14080ED34 @ 0x14080ED34
 * Callers:
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 * Callees:
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_14076651C @ 0x14076651C (sub_14076651C.c)
 *     sub_140767600 @ 0x140767600 (sub_140767600.c)
 *     sub_140768080 @ 0x140768080 (sub_140768080.c)
 *     sub_140958430 @ 0x140958430 (sub_140958430.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14080ED34(PVOID P)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  bool v4; // si
  unsigned int v5; // ebp
  __int64 v6; // rcx

  v1 = *((_QWORD *)P + 7);
  if ( v1 && (v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL)) != 0 )
  {
    v4 = 0;
    if ( (*(_DWORD *)(v3 + 396) & 0x10) == 0 )
      v4 = *(_QWORD *)(v3 + 16) != 0LL;
    v5 = sub_140768080(*((_QWORD *)P + 8));
    sub_14076651C(*((_QWORD *)P + 7), *((_QWORD *)P + 8), 2, 0, *((_DWORD *)P + 21), 0, 0LL, 0LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(v3 + 300) == 784 )
        sub_140958430(*((_QWORD *)P + 8), *((_QWORD *)P + 7));
      sub_140766258(v6, *((_QWORD *)P + 8));
    }
  }
  else
  {
    v5 = -1073741823;
  }
  sub_140767600(*((_QWORD **)P + 8));
  ExFreePoolWithTag(P, 0);
  return v5;
}
