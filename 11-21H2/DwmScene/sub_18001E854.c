/*
 * XREFs of sub_18001E854 @ 0x18001E854
 * Callers:
 *     unknown_libname_17 @ 0x1800FFE0A (unknown_libname_17.c)
 *     sub_18010CEA1 @ 0x18010CEA1 (sub_18010CEA1.c)
 *     sub_18010CF04 @ 0x18010CF04 (sub_18010CF04.c)
 *     sub_18010CF3A @ 0x18010CF3A (sub_18010CF3A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001E854(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return result;
}
