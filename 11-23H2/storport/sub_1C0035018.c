/*
 * XREFs of sub_1C0035018 @ 0x1C0035018
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 * Callees:
 *     sub_1C003F828 @ 0x1C003F828 (sub_1C003F828.c)
 *     sub_1C00A949C @ 0x1C00A949C (sub_1C00A949C.c)
 *     sub_1C00AA5B0 @ 0x1C00AA5B0 (sub_1C00AA5B0.c)
 *     sub_1C00AA604 @ 0x1C00AA604 (sub_1C00AA604.c)
 */

__int64 __fastcall sub_1C0035018(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // r8

  v3 = a1 + 320;
  sub_1C00AA5B0(a1 + 320);
  result = sub_1C00AA604(v3, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)sub_1C00A949C(a1 + 656, *(_QWORD *)(a1 + 24)) != -1073741637 || (*(_BYTE *)(a1 + 104) & 8) != 0 )
    {
      if ( *(char *)(a1 + 110) >= 0 )
        sub_1C003F828(a1 + 944, *(_QWORD *)(a1 + 8), v8, 80LL, sub_1C0014EE0);
      KeInitializeDpc((PRKDPC)(a1 + 1456), (PKDEFERRED_ROUTINE)sub_1C0007650, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1584), sub_1C003D540, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1784), sub_1C003AC60, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 4136), sub_1C003D540, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1848), (PKDEFERRED_ROUTINE)sub_1C0034AF0, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1648), sub_1C00382A0, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 5392), (PKDEFERRED_ROUTINE)sub_1C001FFD0, *(PVOID *)(a1 + 8));
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
