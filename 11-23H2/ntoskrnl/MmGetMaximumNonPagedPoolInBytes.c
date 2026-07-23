/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x140371564
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1407F7708 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1409F8F90 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C69930 << 12;
}
