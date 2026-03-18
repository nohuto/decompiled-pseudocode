/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x1407D7178
 * Callers:
 *     EtwSetInformation @ 0x1407D7120 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1409E393C (EtwpEventWriteRegistrationStatus.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  __int16 v4; // ax
  unsigned int v6; // esi
  __int64 Pool2; // rax
  const char *P; // rbx
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0;
  v4 = *(_WORD *)(a1 + 98);
  v6 = a3;
  if ( (v4 & 8) != 0 || (v4 & 1) == 0 )
  {
    v9 = -1073741811;
  }
  else if ( *(_QWORD *)(a1 + 104) )
  {
    v9 = -1073741823;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, (unsigned int)a3 + 28, 1417114693LL);
    P = (const char *)Pool2;
    if ( Pool2 )
    {
      memmove((void *)(Pool2 + 28), Src, v6);
      v9 = EtwpSetProviderTraitsCommon(
             0LL,
             0,
             (__int64)&v14,
             a1,
             P,
             v6,
             &EtwpProviderTraitsKmMutex,
             (__int64)&EtwpProviderTraitsKmTree);
      if ( !v9 )
        return v9;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    EtwpEventWriteRegistrationStatus(v12, v11, v13, a1, v9);
  return v9;
}
