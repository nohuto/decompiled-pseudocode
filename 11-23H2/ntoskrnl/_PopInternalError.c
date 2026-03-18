/*
 * XREFs of _PopInternalError @ 0x1405836C8
 * Callers:
 *     PopCreateDumpMdl @ 0x140AA2224 (PopCreateDumpMdl.c)
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140AA59E4 (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
