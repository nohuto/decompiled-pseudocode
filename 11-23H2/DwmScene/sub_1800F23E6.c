/*
 * XREFs of sub_1800F23E6 @ 0x1800F23E6
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_1800E1B98 @ 0x1800E1B98 (sub_1800E1B98.c)
 */

__int64 __fastcall sub_1800F23E6(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = (const char *)(*(_QWORD *)(a2 + 240) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 240) + 40LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  sub_18001DB68(&stru_1801C8648, 3, v3);
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 120) = 0LL;
  sub_1800E1B98(*(_QWORD *)(a2 + 384), a2 + 120, a2 + 80);
  v4 = *(_QWORD *)(a2 + 128);
  if ( v4 )
    sub_180010530(v4);
  v5 = *(_QWORD *)(a2 + 88);
  if ( v5 )
    sub_180010530(v5);
  return 0LL;
}
