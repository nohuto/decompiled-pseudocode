/*
 * XREFs of LdrpPayloadRestrictionMitigationsEnabled @ 0x1800AD6AE
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 * Callees:
 *     <none>
 */

char LdrpPayloadRestrictionMitigationsEnabled()
{
  char v0; // dl
  char v1; // r8
  char v2; // al

  v0 = 0;
  if ( (((unsigned __int64)qword_1801993A8 >> 20) & 3) == 1
    || (BYTE2(qword_1801993A8) & 3) == 1
    || (BYTE3(qword_1801993A8) & 3) == 1
    || (((unsigned __int64)qword_1801993A8 >> 28) & 3) == 1
    || (BYTE4(qword_1801993A8) & 3) == 1
    || (v1 = 0, (BYTE5(qword_1801993A8) & 3) == 1) )
  {
    v1 = 1;
  }
  if ( (((unsigned __int64)qword_1801993E0 >> 20) & 3) == 1
    || (BYTE2(qword_1801993E0) & 3) == 1
    || (BYTE3(qword_1801993E0) & 3) == 1
    || (((unsigned __int64)qword_1801993E0 >> 28) & 3) == 1
    || (BYTE4(qword_1801993E0) & 3) == 1
    || (v2 = 0, (BYTE5(qword_1801993E0) & 3) == 1) )
  {
    v2 = 1;
  }
  if ( v1 || v2 )
    return 1;
  return v0;
}
