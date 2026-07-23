/*
 * XREFs of sub_1406E9BE0 @ 0x1406E9BE0
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_140205D38 @ 0x140205D38 (sub_140205D38.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 */

__int64 __fastcall sub_1406E9BE0(__int64 a1)
{
  unsigned __int64 v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v2 = sub_140347920(a1, 0x79517350u);
  sub_140205D38(v2, &v4, &v5, &v6);
  sub_1402F89B0((signed __int64 *)(a1 + 1208), v2, 0x79517350u);
  if ( v4 )
    return (unsigned int)v5 + 1;
  else
    return v6 ? 3 : 0;
}
