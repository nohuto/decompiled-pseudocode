/*
 * XREFs of sub_1403C44EC @ 0x1403C44EC
 * Callers:
 *     sub_1403C445C @ 0x1403C445C (sub_1403C445C.c)
 *     sub_140B0B180 @ 0x140B0B180 (sub_140B0B180.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x140250040 (RtlIsProcessorFeaturePresent.c)
 *     sub_1403631E0 @ 0x1403631E0 (sub_1403631E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

BOOLEAN sub_1403C44EC()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  BOOLEAN result; // al

  memset(&qword_140C5A5C0, 0, 0x40uLL);
  qword_140C5A5C0 = sub_1403631E0(v1, v0);
  qword_140C5A5C8 = sub_1403631E0(v3, v2);
  qword_140C5A5D0 = (__int64)&unk_140C0BEA0;
  result = RtlIsProcessorFeaturePresent(0x2Au);
  if ( result )
    LODWORD(qword_140C5A5F8) = qword_140C5A5F8 | 1;
  LODWORD(qword_140C5A5F8) = qword_140C5A5F8 | 2;
  return result;
}
