/*
 * XREFs of sub_14070BA00 @ 0x14070BA00
 * Callers:
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     PsQueryProcessAttributesByToken @ 0x14070BA70 (PsQueryProcessAttributesByToken.c)
 */

__int64 __fastcall sub_14070BA00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbx

  v6 = sub_140347920(a1, 0x746C6644u);
  PsQueryProcessAttributesByToken(v6, a2, a3);
  return sub_1402F89B0((signed __int64 *)(a1 + 1208), v6, 0x746C6644u);
}
