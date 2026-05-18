/*
 * XREFs of sub_18001145C @ 0x18001145C
 * Callers:
 *     sub_1800111B0 @ 0x1800111B0 (sub_1800111B0.c)
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 *     sub_1800CB9B0 @ 0x1800CB9B0 (sub_1800CB9B0.c)
 *     sub_1800CBBFC @ 0x1800CBBFC (sub_1800CBBFC.c)
 *     sub_1800CDC58 @ 0x1800CDC58 (sub_1800CDC58.c)
 *     sub_1800CDE90 @ 0x1800CDE90 (sub_1800CDE90.c)
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 *     sub_1800D0260 @ 0x1800D0260 (sub_1800D0260.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 *     sub_1800D635C @ 0x1800D635C (sub_1800D635C.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18001145C(__int64 a1, const char *a2)
{
  void (__fastcall *v4)(__int64, void *, _QWORD, const char *); // rsi
  unsigned int v5; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = 0;
    (*(void (__fastcall **)(__int64, void *, int *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &unk_180105FA0, &v6, 0LL);
    if ( !v6 )
    {
      v4 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)a1 + 40LL);
      if ( a2 )
        v5 = strnlen(a2, 0xFFuLL);
      else
        v5 = 0;
      v4(a1, &unk_180105FA0, v5, a2);
    }
  }
}
