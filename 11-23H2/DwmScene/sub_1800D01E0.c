/*
 * XREFs of sub_1800D01E0 @ 0x1800D01E0
 * Callers:
 *     sub_1800CFB1C @ 0x1800CFB1C (sub_1800CFB1C.c)
 * Callees:
 *     sub_1800D06A4 @ 0x1800D06A4 (sub_1800D06A4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D01E0(__int64 a1, char a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 880LL))(*(_QWORD *)(a1 + 144));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 888LL))(*(_QWORD *)(a1 + 144));
  if ( a2 )
    return sub_1800D06A4(a1);
  return result;
}
