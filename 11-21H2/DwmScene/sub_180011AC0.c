/*
 * XREFs of sub_180011AC0 @ 0x180011AC0
 * Callers:
 *     sub_180011740 @ 0x180011740 (sub_180011740.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 *     sub_1800E2380 @ 0x1800E2380 (sub_1800E2380.c)
 *     sub_1800E2680 @ 0x1800E2680 (sub_1800E2680.c)
 *     sub_1800E4AE8 @ 0x1800E4AE8 (sub_1800E4AE8.c)
 *     sub_1800E4DA0 @ 0x1800E4DA0 (sub_1800E4DA0.c)
 *     sub_1800E7220 @ 0x1800E7220 (sub_1800E7220.c)
 *     sub_1800E75E0 @ 0x1800E75E0 (sub_1800E75E0.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 *     sub_1800EE3C8 @ 0x1800EE3C8 (sub_1800EE3C8.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180011AC0(__int64 a1, const char *a2)
{
  void (__fastcall *v4)(__int64, void *, _QWORD, const char *); // rsi
  unsigned int v5; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = 0;
    (*(void (__fastcall **)(__int64, void *, int *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &unk_180127F58, &v6, 0LL);
    if ( !v6 )
    {
      v4 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)a1 + 40LL);
      if ( a2 )
        v5 = strnlen(a2, 0xFFuLL);
      else
        v5 = 0;
      v4(a1, &unk_180127F58, v5, a2);
    }
  }
}
