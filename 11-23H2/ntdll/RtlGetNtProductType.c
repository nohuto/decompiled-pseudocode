/*
 * XREFs of RtlGetNtProductType @ 0x18004A430
 * Callers:
 *     RtlGetVersion @ 0x18002F620 (RtlGetVersion.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x180049D5C (RtlpQueryPhysicalMemoryPolicy.c)
 *     SwitchedRtlGetVersion @ 0x18004A218 (SwitchedRtlGetVersion.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800B0978 (RtlpHpInitializePerfPolicies.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800FAB60 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008B024 (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v2; // bl
  int v3; // eax

  v2 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v3 = *((_DWORD *)NtCurrentPeb()->SharedData + 4);
    goto LABEL_4;
  }
  if ( MEMORY[0x7FFE0268] )
  {
    v3 = MEMORY[0x7FFE0264];
LABEL_4:
    *a1 = v3;
    return 1;
  }
  if ( (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
  {
    *a1 = 1;
    return v2;
  }
  return 1;
}
