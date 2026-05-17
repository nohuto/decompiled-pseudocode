/*
 * XREFs of TpSetPoolMinThreads @ 0x180085380
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180031978 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     NtSetInformationWorkerFactory @ 0x1800A23A0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMin @ 0x180126310 (TppETWPoolThreadMin.c)
 */

__int64 __fastcall TpSetPoolMinThreads(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = (unsigned int)Ldr;
  if ( !a1 || (int)Ldr < 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  else
  {
    v5 = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 4LL, &v8);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
    {
      if ( v5 >= 0 )
        TppETWPoolThreadMin(a1, v8);
    }
    return (unsigned int)v5;
  }
}
