/*
 * XREFs of sub_1800C9D74 @ 0x1800C9D74
 * Callers:
 *     sub_1800C95E0 @ 0x1800C95E0 (sub_1800C95E0.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1800C9D74(__int64 a1, const char *a2)
{
  void (__fastcall *v4)(__int64, void *, _QWORD, const char *); // rsi
  unsigned int v5; // eax

  if ( a1 )
  {
    v4 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)a1 + 24LL);
    if ( a2 )
      v5 = strnlen(a2, 0xFFuLL);
    else
      v5 = 0;
    v4(a1, &unk_180105FA0, v5, a2);
  }
}
