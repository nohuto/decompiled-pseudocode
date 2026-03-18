/*
 * XREFs of InitEvent @ 0x1C002DF60
 * Callers:
 *     Event @ 0x1C002DF00 (Event.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall InitEvent(__int64 a1, struct _SLIST_ENTRY *a2, __int64 a3)
{
  unsigned int v5; // edi
  _SLIST_ENTRY *v6; // rax
  _SLIST_ENTRY *v7; // rbx

  v5 = 0;
  *(_WORD *)(a3 + 66) = 7;
  *(_DWORD *)(a3 + 88) = 32;
  v6 = HeapAlloc(a2, 1314276680, 0x20u);
  *(_QWORD *)(a3 + 96) = v6;
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, *(unsigned int *)(a3 + 88));
    KeInitializeSpinLock((PKSPIN_LOCK)&v7[1].Next + 1);
    v7[1].Next = (_SLIST_ENTRY *)(&v7->Next + 1);
    *((_QWORD *)&v7->Next + 1) = &v7->Next + 1;
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    PrintDebugMessage(65, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v5;
}
