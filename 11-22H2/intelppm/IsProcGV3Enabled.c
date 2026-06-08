/*
 * XREFs of IsProcGV3Enabled @ 0x1C0007888
 * Callers:
 *     ValidatePStateCapability @ 0x1C0034430 (ValidatePStateCapability.c)
 * Callees:
 *     <none>
 */

char IsProcGV3Enabled()
{
  unsigned __int64 v0; // rax

  v0 = __readmsr(0x1A0u);
  return BYTE2(v0) & 1;
}
