/*
 * XREFs of RaDetectHeterogeneousCPU @ 0x1C0056F38
 * Callers:
 *     DllInitialize @ 0x1C0063C00 (DllInitialize.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

char RaDetectHeterogeneousCPU()
{
  ULONG ActiveProcessorCount; // eax
  ULONG v1; // ebp
  char v2; // si
  char v3; // di
  ULONG v4; // ebx
  char v5; // al
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-68h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp+8h] BYREF
  ULONG Length; // [rsp+98h] [rbp+10h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  ProcNumber = 0;
  v1 = ActiveProcessorCount;
  v2 = 0;
  v3 = 0;
  memset_0(&Information, 0, sizeof(Information));
  Length = 80;
  v4 = 0;
  while ( 1 )
  {
    if ( KeGetProcessorNumberFromIndex(v4, &ProcNumber) >= 0
      && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationProcessorCore, &Information, &Length) >= 0 )
    {
      if ( Information.Processor.EfficiencyClass )
      {
        v5 = v3;
        if ( !v3 )
          v5 = 1;
        v3 = v5;
        if ( !v2 )
          goto LABEL_11;
      }
      else if ( !v2 )
      {
        v2 = 1;
      }
      if ( v3 )
        return 1;
    }
LABEL_11:
    if ( ++v4 > v1 )
      return 0;
  }
}
