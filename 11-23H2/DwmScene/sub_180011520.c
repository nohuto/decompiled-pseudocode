/*
 * XREFs of sub_180011520 @ 0x180011520
 * Callers:
 *     sub_180010FD0 @ 0x180010FD0 (sub_180010FD0.c)
 *     sub_1800111B0 @ 0x1800111B0 (sub_1800111B0.c)
 *     sub_180011850 @ 0x180011850 (sub_180011850.c)
 *     sub_1800185E0 @ 0x1800185E0 (sub_1800185E0.c)
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 *     sub_1800C95E0 @ 0x1800C95E0 (sub_1800C95E0.c)
 *     sub_1800CB170 @ 0x1800CB170 (sub_1800CB170.c)
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     sub_1800CBBFC @ 0x1800CBBFC (sub_1800CBBFC.c)
 *     sub_1800CC200 @ 0x1800CC200 (sub_1800CC200.c)
 *     sub_1800CCAE4 @ 0x1800CCAE4 (sub_1800CCAE4.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 *     sub_1800CF04C @ 0x1800CF04C (sub_1800CF04C.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     sub_1800D5D0C @ 0x1800D5D0C (sub_1800D5D0C.c)
 *     sub_1800D635C @ 0x1800D635C (sub_1800D635C.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011520(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
