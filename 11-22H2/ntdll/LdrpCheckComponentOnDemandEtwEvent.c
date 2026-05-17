/*
 * XREFs of LdrpCheckComponentOnDemandEtwEvent @ 0x1800DB170
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     CompatCachepLookupCdb @ 0x180073C0C (CompatCachepLookupCdb.c)
 *     EtwEventWriteNoRegistration @ 0x180086FD0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009EE70 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwCreateEvent @ 0x18009F6F0 (ZwCreateEvent.c)
 *     LdrpIsCODServiceEnabled @ 0x1800DB584 (LdrpIsCODServiceEnabled.c)
 */

char __fastcall LdrpCheckComponentOnDemandEtwEvent(unsigned __int16 *a1)
{
  int v2; // esi
  wchar_t *v3; // rcx
  char v4; // di
  _QWORD *pShimData; // rbx
  int v6; // eax
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v9; // [rsp+3Ch] [rbp-44h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  int *p_UniqueProcess; // [rsp+48h] [rbp-38h] BYREF
  int v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+54h] [rbp-2Ch]
  int *v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+64h] [rbp-1Ch]
  __int64 v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+74h] [rbp-Ch]

  v9 = 1;
  v2 = 0;
  v3 = (wchar_t *)*((_QWORD *)a1 + 1);
  v4 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)CompatCachepLookupCdb(v3, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)LdrpIsCODServiceEnabled() )
      {
        if ( (int)ZwCreateEvent() >= 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpCODScenarioLock);
          v2 = 1;
          v4 = 1;
          if ( !LdrpCODScenarioTriggered )
          {
            pShimData[559] = 0LL;
            v13 = 0;
            v16 = 0;
            v19 = 0;
            p_UniqueProcess = &UniqueProcess;
            v14 = &v9;
            v17 = *((_QWORD *)a1 + 1);
            v6 = *a1 + 2;
            v12 = 4;
            v15 = 4;
            v18 = v6;
            LdrpCODScenarioTriggered = 1;
            if ( !(unsigned int)EtwEventWriteNoRegistration(
                                  (__int64)&UserLoaderGuid,
                                  &ComponentOnDemand,
                                  3,
                                  (__int64)&p_UniqueProcess) )
            {
              Timeout.QuadPart = -100000000LL;
              NtWaitForSingleObject(0LL, 0, &Timeout);
            }
          }
        }
      }
    }
  }
  if ( v2 )
    RtlReleaseSRWLockExclusive(&LdrpCODScenarioLock);
  return v4;
}
