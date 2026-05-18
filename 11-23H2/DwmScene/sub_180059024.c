/*
 * XREFs of sub_180059024 @ 0x180059024
 * Callers:
 *     sub_1800586E4 @ 0x1800586E4 (sub_1800586E4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180059024(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  char v6; // si

  v3 = (_QWORD *)(a3 + 16);
  v4 = a1 - a3;
  v6 = 0;
  while ( (_QWORD *)((char *)v3 + v4 - 16) != a2 )
  {
    if ( *(_QWORD *)((char *)v3 + v4 - 8) != *(v3 - 1)
      || *(_QWORD *)((char *)v3 + v4) != *v3
      || *(_QWORD *)((char *)v3 + v4 + 8) != v3[1]
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)((char *)v3 + v4 + 16) + 16LL))(
            *(_QWORD *)((char *)v3 + v4 + 16),
            v3[2]) )
    {
      return v6;
    }
    v3 += 6;
  }
  return 1;
}
