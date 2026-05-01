/*
 * XREFs of sub_18001BC10 @ 0x18001BC10
 * Callers:
 *     sub_180006C40 @ 0x180006C40 (sub_180006C40.c)
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 *     sub_18001AD80 @ 0x18001AD80 (sub_18001AD80.c)
 *     sub_18001ADA8 @ 0x18001ADA8 (sub_18001ADA8.c)
 * Callees:
 *     sub_180008B2C @ 0x180008B2C (sub_180008B2C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001BC10(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r11

  v1 = sub_180008B2C((volatile signed __int32 *)(a1 + 12));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, v1 + 1);
    if ( qword_1800328E0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 16LL))(qword_1800328E0);
  }
  return v1;
}
