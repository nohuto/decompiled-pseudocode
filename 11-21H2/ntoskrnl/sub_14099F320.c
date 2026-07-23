/*
 * XREFs of sub_14099F320 @ 0x14099F320
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1407CD7A0 (RtlCompareUnicodeStrings.c)
 *     sub_14099F084 @ 0x14099F084 (sub_14099F084.c)
 */

__int64 __fastcall sub_14099F320(_RTL_AVL_TABLE *a1, _DWORD *a2, PVOID a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // r8
  const WCHAR *v5; // rax
  PCWCH v6; // r10
  LONG v7; // eax
  SIZE_T String2Length; // [rsp+48h] [rbp+10h] BYREF
  SIZE_T String1Length; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  LODWORD(String1Length) = 0;
  LODWORD(String2Length) = 0;
  sub_14099F084(a2, &String1Length);
  v5 = (const WCHAR *)sub_14099F084(v4, &String2Length);
  v7 = RtlCompareUnicodeStrings(v6, (unsigned int)String1Length, v5, (unsigned int)String2Length, 1u);
  if ( v7 >= 0 )
    return 2 - (unsigned int)(v7 != 0);
  return v3;
}
