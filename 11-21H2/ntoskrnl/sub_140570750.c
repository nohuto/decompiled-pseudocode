/*
 * XREFs of sub_140570750 @ 0x140570750
 * Callers:
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 *     sub_1406362D0 @ 0x1406362D0 (sub_1406362D0.c)
 * Callees:
 *     sub_14020E67C @ 0x14020E67C (sub_14020E67C.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_1402EE784 @ 0x1402EE784 (sub_1402EE784.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 */

char __fastcall sub_140570750(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 EffectiveIrql; // al
  struct _KPRCB *CurrentPrcb; // r14
  char v7; // bp
  char v8; // si
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( !sub_14056B1E4(v2) )
    return 0;
  EffectiveIrql = KeGetEffectiveIrql();
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = EffectiveIrql;
  if ( !sub_14020E67C(v2, &v10) )
    return 0;
  if ( (*(_DWORD *)(v2 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v8 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    v8 = 1;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    sub_1402EE784(a1);
    sub_1402EE894((__int64)CurrentPrcb, a1, v7);
  }
  sub_140224100(v2);
  return v8;
}
