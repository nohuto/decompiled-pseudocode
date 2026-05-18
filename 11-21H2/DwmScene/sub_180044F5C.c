/*
 * XREFs of sub_180044F5C @ 0x180044F5C
 * Callers:
 *     sub_180044248 @ 0x180044248 (sub_180044248.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180044F5C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  result = sub_180010910(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 >= 8 )
    result = sub_180010884(*(char **)a1, 2 * v4 + 2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  return result;
}
