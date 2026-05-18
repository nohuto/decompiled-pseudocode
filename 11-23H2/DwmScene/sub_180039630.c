/*
 * XREFs of sub_180039630 @ 0x180039630
 * Callers:
 *     sub_1800390DC @ 0x1800390DC (sub_1800390DC.c)
 *     sub_1800D08A0 @ 0x1800D08A0 (sub_1800D08A0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_1800268CC @ 0x1800268CC (sub_1800268CC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180039630(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  result = sub_180011C50(a1 + 72, &v4);
  if ( v4 )
  {
    result = sub_1800268CC(v4);
    *(_DWORD *)(a1 + 104) = result;
  }
  if ( v5 )
    return sub_180010530(v5);
  return result;
}
