/*
 * XREFs of sub_180011170 @ 0x180011170
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C9360 @ 0x1800C9360 (sub_1800C9360.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011170(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  if ( !(_BYTE)result )
    return sub_1800C9360(a1);
  return result;
}
