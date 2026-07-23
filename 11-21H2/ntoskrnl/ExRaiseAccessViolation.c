/*
 * XREFs of ExRaiseAccessViolation @ 0x140A021F0
 * Callers:
 *     sub_140608EA0 @ 0x140608EA0 (sub_140608EA0.c)
 *     sub_14069B200 @ 0x14069B200 (sub_14069B200.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_140739F40 @ 0x140739F40 (sub_140739F40.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407B0890 @ 0x1407B0890 (sub_1407B0890.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 *     sub_1407E3D20 @ 0x1407E3D20 (sub_1407E3D20.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
