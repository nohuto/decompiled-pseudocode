/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1402F6F20
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x140754FB4 (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1407B14B8 (PopEtGetProcessImageInfo.c)
 *     PopEtGetProcessVersionInfo @ 0x1407B1514 (PopEtGetProcessVersionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
