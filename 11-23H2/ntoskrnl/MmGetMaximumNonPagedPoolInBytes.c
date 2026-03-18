/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1403713C4
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1407F7438 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1409F8D00 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C69930 << 12;
}
