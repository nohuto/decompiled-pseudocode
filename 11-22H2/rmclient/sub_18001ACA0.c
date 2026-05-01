/*
 * XREFs of sub_18001ACA0 @ 0x18001ACA0
 * Callers:
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001ACA0(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1800206C8;
  if ( qword_1800328E0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 8LL))(qword_1800328E0);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)a1 = off_1800206A8;
  return a1;
}
