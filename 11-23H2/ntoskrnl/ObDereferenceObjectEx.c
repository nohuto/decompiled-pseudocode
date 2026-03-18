/*
 * XREFs of ObDereferenceObjectEx @ 0x1402A2558
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140723350 (MiCreateImageOrDataSection.c)
 *     PspClearProcessThreadCidRefs @ 0x14076E2D8 (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ObDereferenceObjectExWithTag @ 0x1402A2574 (ObDereferenceObjectExWithTag.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR a1)
{
  return ObDereferenceObjectExWithTag(a1);
}
