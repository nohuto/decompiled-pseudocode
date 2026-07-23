/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1409AD2A0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1409AD3DC (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     sub_140609738 @ 0x140609738 (sub_140609738.c)
 *     CmInitServerSiloState @ 0x14080C904 (CmInitServerSiloState.c)
 *     RtlNlsInitState @ 0x1408231CC (RtlNlsInitState.c)
 *     PspInitializeProtectedProcessParameters @ 0x14084D2E4 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x140855C6C (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140936E80 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x1409ACAA0 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACFB8 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AD7E0 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AD844 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD98C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409ADAB8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409ADBF0 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1409B4514 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x1409C8FF0 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409E20B8 (EtwInitializeSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8348 (ExpTimeZoneInitSiloState.c)
 *     ExpNlsInitSiloState @ 0x1409FB7EC (ExpNlsInitSiloState.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *Object)
{
  _DWORD *ServerSiloGlobals; // rsi
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  RtlNlsInitState((__int64)ServerSiloGlobals);
  result = sub_140609738(Object);
  if ( (int)result >= 0 )
  {
    result = PspSiloInitializeUserSharedData(Object);
    if ( (int)result >= 0 )
    {
      result = PspSiloInitializeSystemRootSymlink(Object);
      if ( (int)result >= 0 )
      {
        result = PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals);
        if ( (int)result >= 0 )
        {
          result = PspSiloLoadApiSets(Object);
          if ( (int)result >= 0 )
          {
            result = PspSiloInitializeIsMultiSessionSku(Object);
            if ( (int)result >= 0 )
            {
              result = PspSiloInitializeIsStateSeparationEnabled(Object);
              if ( (int)result >= 0 )
              {
                inited = ObInitServerSilo(Object);
                if ( inited < 0 )
                  goto LABEL_18;
                result = ExpTimeZoneInitSiloState(Object);
                if ( (int)result >= 0 )
                {
                  result = ExpNlsInitSiloState(Object);
                  if ( (int)result >= 0 )
                  {
                    inited = SeInitServerSilo(Object);
                    if ( inited >= 0 )
                    {
                      inited = CmInitServerSiloState();
                      if ( inited >= 0 )
                      {
                        inited = EtwInitializeSiloState(Object);
                        if ( inited >= 0 )
                        {
                          inited = DbgkInitializeServerSilo(Object);
                          if ( inited >= 0 )
                          {
                            inited = PspNotifyServerSiloCreation(Object);
                            if ( inited >= 0 )
                              return 0LL;
                            PsTerminateServerSilo((__int64)Object);
                            return (unsigned int)inited;
                          }
                        }
                      }
                    }
LABEL_18:
                    ServerSiloGlobals[326] = 4;
                    PspDeleteExternalServerSiloState((__int64)Object);
                    return (unsigned int)inited;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
