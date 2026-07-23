/*
 * XREFs of sub_1406A9520 @ 0x1406A9520
 * Callers:
 *     <none>
 * Callees:
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406A9520(unsigned int *P)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = 0LL;
  v2[0] = &sub_1407F50E0;
  v2[2] = *((_QWORD *)P + 4);
  v2[3] = P[10];
  sub_140232788((__int64)qword_140C158E0, 1LL, (_DWORD)P + 48, (__int64)v2);
  ExFreePoolWithTag(*((PVOID *)P + 4), 0x63734943u);
  ExFreePoolWithTag(P, 0x63734943u);
}
