/*
 * XREFs of sub_180091E20 @ 0x180091E20
 * Callers:
 *     sub_1800914D8 @ 0x1800914D8 (sub_1800914D8.c)
 *     sub_180093190 @ 0x180093190 (sub_180093190.c)
 *     sub_180093310 @ 0x180093310 (sub_180093310.c)
 *     sub_1800EA9E2 @ 0x1800EA9E2 (sub_1800EA9E2.c)
 *     unknown_libname_67 @ 0x1800EAB3B (unknown_libname_67.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180091E20(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  result = sub_18001DE1C((__int64)(a1 + 15), a2);
  v5 = (_QWORD *)a1[14];
  if ( v5 )
  {
    LOBYTE(v4) = v5 != a1 + 7;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v5 + 32LL))(v5, v4);
    a1[14] = 0LL;
  }
  v6 = a1[3];
  if ( v6 )
    result = sub_180010530(v6);
  v7 = a1[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
