/*
 * XREFs of sub_1800F17D0 @ 0x1800F17D0
 * Callers:
 *     sub_1800F2230 @ 0x1800F2230 (sub_1800F2230.c)
 *     sub_18010D001 @ 0x18010D001 (sub_18010D001.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F17D0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  sub_180010910((__int64)(a1 + 4));
  result = sub_180010910((__int64)(a1 + 2));
  v3 = a1[1];
  if ( v3 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
