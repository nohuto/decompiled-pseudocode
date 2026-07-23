/*
 * XREFs of EtwCreateTraceInstanceId @ 0x180125180
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwCreateTraceInstanceId(__int64 a1, __int64 a2)
{
  signed __int32 v2; // eax

  if ( a1 && a2 && (*(_QWORD *)a2 = a1, *(_DWORD *)(a1 + 4) == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess)) )
  {
    do
    {
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 1u);
      *(_DWORD *)(a2 + 8) = v2 + 1;
    }
    while ( v2 == -1 );
    return 0LL;
  }
  else
  {
    RtlSetLastWin32Error(87);
    return 87LL;
  }
}
