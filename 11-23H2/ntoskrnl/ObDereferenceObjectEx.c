/*
 * XREFs of ObDereferenceObjectEx @ 0x1402A27E8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140723550 (MiCreateImageOrDataSection.c)
 *     PspClearProcessThreadCidRefs @ 0x14076E4C8 (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ObDereferenceObjectExWithTag @ 0x1402A2804 (ObDereferenceObjectExWithTag.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR a1)
{
  return ObDereferenceObjectExWithTag(a1);
}
