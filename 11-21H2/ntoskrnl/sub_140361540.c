/*
 * XREFs of sub_140361540 @ 0x140361540
 * Callers:
 *     sub_140649758 @ 0x140649758 (sub_140649758.c)
 *     sub_1407E3510 @ 0x1407E3510 (sub_1407E3510.c)
 *     sub_140A0F2FC @ 0x140A0F2FC (sub_140A0F2FC.c)
 *     sub_140A0FC24 @ 0x140A0FC24 (sub_140A0FC24.c)
 *     sub_140A101C8 @ 0x140A101C8 (sub_140A101C8.c)
 *     sub_140A10548 @ 0x140A10548 (sub_140A10548.c)
 * Callees:
 *     sub_14036162C @ 0x14036162C (sub_14036162C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlNotifyFeatureUsage @ 0x1405E4020 (RtlNotifyFeatureUsage.c)
 */

__int64 __fastcall sub_140361540(__int64 a1, ULONG a2, int a3, int a4, unsigned int a5)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v13; // [rsp+50h] [rbp-48h]
  __int64 v14; // [rsp+60h] [rbp-38h]

  v8 = sub_14036162C(v12, a1, a5);
  v9 = 0;
  v13 = *(_OWORD *)v8;
  v14 = *(_QWORD *)(v8 + 16);
  if ( qword_140D010D0 )
    sub_14042A5E0(a2, a5);
  if ( a3 && a5 != 254 )
  {
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = a2;
    FeatureUsageReport.ReportingKind = a5;
    if ( a4 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v9) = (_DWORD)v14 == 0;
  return v9;
}
