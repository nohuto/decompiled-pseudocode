/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1409AD0A0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1409AD1DC (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140297694 (PsGetServerSiloGlobals.c)
 *     sub_1406091E8 @ 0x1406091E8 (sub_1406091E8.c)
 *     CmInitServerSiloState @ 0x14080C634 (CmInitServerSiloState.c)
 *     RtlNlsInitState @ 0x140822ECC (RtlNlsInitState.c)
 *     PspInitializeProtectedProcessParameters @ 0x14084CFE4 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x14085596C (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140936C80 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x1409AC8A0 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACDB8 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AD5E0 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AD644 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD78C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AD8B8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409AD9F0 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1409B4314 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x1409C8DF0 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409E1E28 (EtwInitializeSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F80B8 (ExpTimeZoneInitSiloState.c)
 *     ExpNlsInitSiloState @ 0x1409FB55C (ExpNlsInitSiloState.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *Object)
{
  _DWORD *ServerSiloGlobals; // rsi
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  RtlNlsInitState((__int64)ServerSiloGlobals);
  result = sub_1406091E8(Object);
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
