/*
 * XREFs of sub_1800F21BB @ 0x1800F21BB
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_1800E1B50 @ 0x1800E1B50 (sub_1800E1B50.c)
 */

__int64 __fastcall sub_1800F21BB(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  __int64 v4; // rcx

  v3 = (const char *)(*(_QWORD *)(a2 + 80) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 40LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  sub_18001DB68(&stru_1801C8648, 3, v3);
  *(_OWORD *)(a2 + 64) = 0LL;
  sub_1800E1B50(*(_QWORD *)(a2 + 240), a2 + 64);
  v4 = *(_QWORD *)(a2 + 72);
  if ( v4 )
    sub_180010530(v4);
  return 0LL;
}
