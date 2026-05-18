/*
 * XREFs of sub_180051254 @ 0x180051254
 * Callers:
 *     sub_180050E70 @ 0x180050E70 (sub_180050E70.c)
 *     sub_18008EE7C @ 0x18008EE7C (sub_18008EE7C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180051254(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx

  *(_QWORD *)a1 = a2;
  v5 = std::ios::rdbuf(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  LOBYTE(v6) = a3;
  *(_BYTE *)(a1 + 8) = std::istream::_Ipfx(*(_QWORD *)a1, v6);
  return a1;
}
