/*
 * XREFs of sub_180091F1C @ 0x180091F1C
 * Callers:
 *     sub_1800914D8 @ 0x1800914D8 (sub_1800914D8.c)
 *     sub_1800916DC @ 0x1800916DC (sub_1800916DC.c)
 *     sub_180091F70 @ 0x180091F70 (sub_180091F70.c)
 *     sub_1800E0BF4 @ 0x1800E0BF4 (sub_1800E0BF4.c)
 *     sub_1800EA9D0 @ 0x1800EA9D0 (sub_1800EA9D0.c)
 *     sub_1800EA9F4 @ 0x1800EA9F4 (sub_1800EA9F4.c)
 *     sub_1800EAA32 @ 0x1800EAA32 (sub_1800EAA32.c)
 *     sub_1800EAA68 @ 0x1800EAA68 (sub_1800EAA68.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180091F1C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
