/*
 * XREFs of sub_18001FE48 @ 0x18001FE48
 * Callers:
 *     sub_180020460 @ 0x180020460 (sub_180020460.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001FE48(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  v3 = a1[5];
  if ( v3 )
    result = sub_180010530(v3);
  v4 = a1[3];
  if ( v4 )
    result = sub_180010530(v4);
  v5 = a1[1];
  if ( v5 )
    return sub_180010530(v5);
  return result;
}
