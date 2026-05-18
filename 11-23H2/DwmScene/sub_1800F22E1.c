/*
 * XREFs of sub_1800F22E1 @ 0x1800F22E1
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_1800E1B50 @ 0x1800E1B50 (sub_1800E1B50.c)
 */

__int64 __fastcall sub_1800F22E1(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  __int64 v4; // rcx

  v3 = (const char *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 184) + 40LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  sub_18001DB68(&stru_1801C8648, 3, v3);
  *(_OWORD *)(a2 + 88) = 0LL;
  sub_1800E1B50(*(_QWORD *)(a2 + 312), a2 + 88);
  v4 = *(_QWORD *)(a2 + 96);
  if ( v4 )
    sub_180010530(v4);
  return 0LL;
}
