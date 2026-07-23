/*
 * XREFs of PfpProcessScenarioPhase @ 0x1407D3920
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14074D774 (PfSnSetPrefetcherInformation.c)
 *     PfSetSuperfetchInformation @ 0x14075FB84 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsGetCurrentProcessSessionId @ 0x1402A2070 (PsGetCurrentProcessSessionId.c)
 *     RtlGetActiveConsoleId @ 0x14035EE60 (RtlGetActiveConsoleId.c)
 *     MmGetNextSession @ 0x14035EE90 (MmGetNextSession.c)
 *     PfpLogScenarioEvent @ 0x1407D3DB8 (PfpLogScenarioEvent.c)
 *     PfpScenCtxScenarioSet @ 0x140A883D8 (PfpScenCtxScenarioSet.c)
 *     PfPowerActionNotify @ 0x140A9FCE4 (PfPowerActionNotify.c)
 *     PfpScenCtxPrefetchWait @ 0x140AA01C4 (PfpScenCtxPrefetchWait.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(_DWORD *a1, char a2)
{
  unsigned int v2; // edi
  int v3; // r9d
  int v4; // ecx
  ULONG v5; // ebx
  int v7; // ecx
  ULONG ActiveConsoleId; // ebx
  int v9; // ebp
  void *NextSession; // rax

  v2 = 0;
  if ( *a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = a1[1];
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  if ( v3 == 1 || v3 == 2 )
    goto LABEL_15;
  if ( v3 == 3 )
  {
    v7 = a1[2];
    if ( v7 )
    {
      if ( v7 != 1 || dword_140C64FE0 != 3 )
        return v2;
      PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140C64FB0);
      PfpLogScenarioEvent(3, 0, 0, dword_140C64FE4, 0);
    }
    else
    {
      ActiveConsoleId = RtlGetActiveConsoleId();
      if ( (unsigned int)PsGetCurrentProcessSessionId() != ActiveConsoleId )
        return v2;
      if ( dword_140C65358 >= (unsigned int)dword_140C6535C )
        return v2;
      v9 = 0;
      NextSession = (void *)MmGetNextSession(0LL);
      if ( !NextSession )
        return v2;
      while ( (unsigned int)++v9 < 3 )
      {
        NextSession = (void *)MmGetNextSession(NextSession);
        if ( !NextSession )
          return v2;
      }
      ObfDereferenceObject(NextSession);
    }
LABEL_29:
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C64FB0);
    return v2;
  }
  if ( v3 != 4 )
  {
    if ( v3 == 5 )
    {
LABEL_15:
      if ( a2 )
        return (unsigned int)-1073741790;
      else
        PfPowerActionNotify((unsigned int)a1[2]);
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  v4 = a1[2];
  if ( !v4 )
    goto LABEL_29;
  if ( v4 == 1 )
  {
    v5 = RtlGetActiveConsoleId();
    if ( (unsigned int)PsGetCurrentProcessSessionId() == v5 )
    {
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C64FB0);
      if ( dword_140C65358 < (unsigned int)dword_140C6535C )
        PfpLogScenarioEvent(5, 2, 3, dword_140C64FE4, 1);
    }
  }
  return v2;
}
