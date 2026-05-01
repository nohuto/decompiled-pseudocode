/*
 * XREFs of sub_1800091EC @ 0x1800091EC
 * Callers:
 *     sub_180002AD0 @ 0x180002AD0 (sub_180002AD0.c)
 *     sub_180002C70 @ 0x180002C70 (sub_180002C70.c)
 *     sub_180003CE8 @ 0x180003CE8 (sub_180003CE8.c)
 *     sub_180003DC0 @ 0x180003DC0 (sub_180003DC0.c)
 *     sub_18000418C @ 0x18000418C (sub_18000418C.c)
 *     sub_180004230 @ 0x180004230 (sub_180004230.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800091EC(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
