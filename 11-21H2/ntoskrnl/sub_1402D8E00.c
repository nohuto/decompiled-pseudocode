/*
 * XREFs of sub_1402D8E00 @ 0x1402D8E00
 * Callers:
 *     sub_1402D8C20 @ 0x1402D8C20 (sub_1402D8C20.c)
 *     sub_140814DC0 @ 0x140814DC0 (sub_140814DC0.c)
 *     sub_14081BBF8 @ 0x14081BBF8 (sub_14081BBF8.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall sub_1402D8E00(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return sub_1402AC800(a1);
}
