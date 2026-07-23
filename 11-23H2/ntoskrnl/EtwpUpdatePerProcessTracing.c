/*
 * XREFs of EtwpUpdatePerProcessTracing @ 0x1409E7BEC
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x1407F824C (EtwpUpdateTrace.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     PsLookupProcessByProcessId @ 0x1406FA580 (PsLookupProcessByProcessId.c)
 *     EtwpGetFlagExtension @ 0x1407F8208 (EtwpGetFlagExtension.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1409E7D20 (EtwpUpdateProcessTracingCallback.c)
 */

LONG __fastcall EtwpUpdatePerProcessTracing(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rbp
  unsigned __int16 *FlagExtension; // rax
  unsigned int *v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  PEPROCESS Process; // [rsp+30h] [rbp-38h] BYREF
  __int16 v14; // [rsp+80h] [rbp+18h]

  v4 = a4;
  Process = 0LL;
  HIBYTE(v14) = 0;
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
  FlagExtension = EtwpGetFlagExtension(a1, 2);
  if ( FlagExtension )
  {
    v9 = (unsigned int *)(FlagExtension + 2);
    v10 = (unsigned __int16)(4 * *FlagExtension - 4) >> 2;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( PsLookupProcessByProcessId((HANDLE)*v9, &Process) >= 0 )
        {
          EtwpUpdateProcessTracingCallback((ULONG_PTR)Process);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        }
        ++v9;
        --v11;
      }
      while ( v11 );
    }
  }
  LOBYTE(v14) = a3;
  if ( a2 == EtwpHostSiloState )
    *(_WORD *)(MmWriteableSharedUserData + 2 * v4 + 896) = v14;
  else
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1320LL) + 2 * v4 + 550) = v14;
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
