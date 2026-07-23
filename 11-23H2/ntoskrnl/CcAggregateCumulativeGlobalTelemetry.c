/*
 * XREFs of CcAggregateCumulativeGlobalTelemetry @ 0x140880ECC
 * Callers:
 *     CcPostVolumeTelemetry @ 0x1403D12B0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 CcAggregateCumulativeGlobalTelemetry()
{
  __int64 result; // rax

  qword_140C5F930 += qword_140C5F8B0;
  qword_140C5F938 += qword_140C5F8B8;
  qword_140C5F940 += qword_140C5F8C0;
  qword_140C5F948 += qword_140C5F8C8;
  qword_140C5F950 += qword_140C5F8D0;
  qword_140C5F958 += qword_140C5F8D8;
  qword_140C5F960 += qword_140C5F8E0;
  qword_140C5F968 += qword_140C5F8E8;
  qword_140C5F970 += qword_140C5F8F0;
  qword_140C5F978 += qword_140C5F8F8;
  qword_140C5F980 += qword_140C5F900;
  qword_140C5F988 += qword_140C5F908;
  qword_140C5F990 += qword_140C5F910;
  qword_140C5F998 += qword_140C5F918;
  qword_140C5F9A0 += qword_140C5F920;
  result = qword_140C5F928;
  qword_140C5F9A8 += qword_140C5F928;
  return result;
}
