/*
 * XREFs of sub_180003928 @ 0x180003928
 * Callers:
 *     sub_180003FF0 @ 0x180003FF0 (sub_180003FF0.c)
 *     sub_1800049B0 @ 0x1800049B0 (sub_1800049B0.c)
 *     sub_18001BC8C @ 0x18001BC8C (sub_18001BC8C.c)
 *     sub_18001BE48 @ 0x18001BE48 (sub_18001BE48.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180003928(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v7; // rcx
  __int64 result; // rax

  v3 = (__int64 *)a1[3];
  if ( *v3 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *v3;
    *v3 = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  result = a1[4];
  *(_QWORD *)(result + 8 * ((__int64)(a1[3] - a1[2]) >> 3)) = a3;
  a1[3] += 8LL;
  return result;
}
