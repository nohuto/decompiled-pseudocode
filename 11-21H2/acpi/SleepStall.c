/*
 * XREFs of SleepStall @ 0x1C0069CD0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     SleepQueueRequest @ 0x1C0068970 (SleepQueueRequest.c)
 */

__int64 __fastcall SleepStall(struct _SLIST_ENTRY *a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // ecx

  v4 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) != 8795 )
    {
      if ( *(_QWORD *)(v5 + 16) <= 0xFFuLL )
      {
        KeStallExecutionProcessor(*(_DWORD *)(v5 + 16));
        return v4;
      }
      v4 = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError((__int64)a1, -1072431089);
      v7 = 178;
      goto LABEL_10;
    }
    v6 = *(_QWORD *)(v5 + 16);
    if ( v6 > 0xFFFF )
    {
      v4 = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError((__int64)a1, -1072431089);
      v7 = 177;
LABEL_10:
      PrintDebugMessage(v7, *(const void **)(*(_QWORD *)(a2 + 80) + 16LL), 0LL, 0LL, 0LL);
      return v4;
    }
    if ( v6 )
    {
      v4 = SleepQueueRequest(a1, v6);
      if ( !v4 )
        return 32772;
    }
  }
  return v4;
}
