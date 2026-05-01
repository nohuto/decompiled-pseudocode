/*
 * XREFs of sub_180008B00 @ 0x180008B00
 * Callers:
 *     sub_180003DC0 @ 0x180003DC0 (sub_180003DC0.c)
 *     sub_180003EF0 @ 0x180003EF0 (sub_180003EF0.c)
 *     sub_180004230 @ 0x180004230 (sub_180004230.c)
 *     sub_180004310 @ 0x180004310 (sub_180004310.c)
 *     sub_180017720 @ 0x180017720 (sub_180017720.c)
 * Callees:
 *     sub_180008B2C @ 0x180008B2C (sub_180008B2C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180008B00(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r11

  v1 = sub_180008B2C(a1 + 60);
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
    if ( qword_1800328E0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 16LL))(qword_1800328E0);
  }
  return v1;
}
