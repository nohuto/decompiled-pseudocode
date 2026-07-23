/*
 * XREFs of sub_140A20438 @ 0x140A20438
 * Callers:
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 *     sub_140A1F234 @ 0x140A1F234 (sub_140A1F234.c)
 * Callees:
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A20438(__int64 a1, PVOID *a2)
{
  int v3; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  P = 0LL;
  v3 = sub_140812F84(a1, L"FirmwareVariable", (__int64)L"Description", 3u, &P, &v5);
  if ( v3 >= 0 )
  {
    if ( v5 >= 0x1C && *((_DWORD *)P + 1) >= 0x1Cu && *(_DWORD *)P )
    {
      *a2 = P;
      return (unsigned int)v3;
    }
    v3 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  return (unsigned int)v3;
}
