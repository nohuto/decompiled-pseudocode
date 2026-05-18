/*
 * XREFs of sub_1800F4128 @ 0x1800F4128
 * Callers:
 *     sub_18010D076 @ 0x18010D076 (sub_18010D076.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F4128(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( v3 )
    {
      *(_QWORD *)(v2 + 40) = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      v2 = *(_QWORD *)(a1 + 8);
    }
    if ( v2 )
      return sub_180010884((char *)v2, 0x30uLL);
  }
  return result;
}
