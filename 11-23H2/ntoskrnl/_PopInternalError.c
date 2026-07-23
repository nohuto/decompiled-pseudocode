/*
 * XREFs of _PopInternalError @ 0x140583BB8
 * Callers:
 *     PopCreateDumpMdl @ 0x140AA2094 (PopCreateDumpMdl.c)
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140AA5854 (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
