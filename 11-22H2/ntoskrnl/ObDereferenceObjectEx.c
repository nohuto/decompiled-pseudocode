/*
 * XREFs of ObDereferenceObjectEx @ 0x1402A2438
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1407233C0 (MiCreateImageOrDataSection.c)
 *     PspClearProcessThreadCidRefs @ 0x14076E7E8 (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ObDereferenceObjectExWithTag @ 0x1402A2454 (ObDereferenceObjectExWithTag.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR a1)
{
  return ObDereferenceObjectExWithTag(a1);
}
