/*
 * XREFs of SmpCompleteSubSysStatusChange @ 0x14000270C
 * Callers:
 *     SmpReadySubSys @ 0x1400026A0 (SmpReadySubSys.c)
 *     SmpDeleteSubSys @ 0x14001AD78 (SmpDeleteSubSys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpCompleteSubSysStatusChange(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE *v2; // rcx

  result = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = (HANDLE *)_InterlockedExchange64((volatile __int64 *)(a1 + 16), 0LL);
    if ( v2 )
    {
      if ( *(_DWORD *)v2 )
        return NtSetEvent(v2[1], 0LL);
      else
        return SmpDisposeSubSysSynch(v2);
    }
  }
  return result;
}
