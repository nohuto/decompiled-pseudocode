/*
 * XREFs of sub_1403A7778 @ 0x1403A7778
 * Callers:
 *     sub_140811EB0 @ 0x140811EB0 (sub_140811EB0.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 * Callees:
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall sub_1403A7778(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  P = 0LL;
  v4 = 0;
  if ( (int)sub_140812F84(a1, L"FirmwareModified", L"Description", 4LL, &P, &v4) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v3 != 0;
  }
  return v1;
}
