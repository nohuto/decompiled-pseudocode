/*
 * XREFs of sub_1406DEAEC @ 0x1406DEAEC
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_140255CD4 @ 0x140255CD4 (sub_140255CD4.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 */

__int64 __fastcall sub_1406DEAEC(__int64 a1)
{
  unsigned __int64 v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  v2 = sub_140347920(a1, 0x79517350u);
  sub_140255CD4(v2, &v4, &v5);
  sub_1402F89B0((signed __int64 *)(a1 + 1208), v2, 0x79517350u);
  if ( v4 )
    return 1LL;
  else
    return v5 != 0 ? 2 : 0;
}
