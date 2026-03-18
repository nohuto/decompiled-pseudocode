/*
 * XREFs of MapUnmapPhysMem @ 0x1C0025584
 * Callers:
 *     OpRegion @ 0x1C0025430 (OpRegion.c)
 * Callees:
 *     MapPhysMem @ 0x1C0025610 (MapPhysMem.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall MapUnmapPhysMem(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  SIZE_T v5; // rdi
  KIRQL CurrentIrql; // al

  v4 = 0;
  v5 = a3;
  if ( a3 )
  {
    if ( KeGetCurrentIrql() )
    {
      v4 = -1072431098;
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(a1, 3222536198LL);
      CurrentIrql = KeGetCurrentIrql();
      PrintDebugMessage(77, CurrentIrql, 0, 0, 0LL);
    }
    else if ( a4 )
    {
      v4 = MapPhysMem(a2, (unsigned int)v5, a4);
      if ( v4 < 0 )
      {
        LogError(3222536204LL);
        AcpiDiagTraceAmlError(a1, 3222536204LL);
        PrintDebugMessage(102, (_DWORD)a2, v5, v4, 0LL);
      }
    }
    else
    {
      MmUnmapIoSpace(a2, v5);
    }
  }
  else
  {
    v4 = -1072431089;
    LogError(3222536207LL);
    AcpiDiagTraceAmlError(a1, 3222536207LL);
    PrintDebugMessage(216, 0, 0, 0, 0LL);
  }
  return (unsigned int)v4;
}
