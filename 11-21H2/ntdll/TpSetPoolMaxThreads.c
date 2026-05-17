/*
 * XREFs of TpSetPoolMaxThreads @ 0x180074550
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18001E58C (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x180074450 (LdrpEnableParallelLoading.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180123C80 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     NtSetInformationWorkerFactory @ 0x1800A75A0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMax @ 0x180124850 (TppETWPoolThreadMax.c)
 */

unsigned int *__fastcall TpSetPoolMaxThreads(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  unsigned int *result; // rax
  __int64 v6; // rcx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = (unsigned int)Ldr;
  if ( !a1 )
    return (unsigned int *)TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  if ( (int)Ldr < 0 )
    return (unsigned int *)TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return (unsigned int *)TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v7);
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v6 = *((_QWORD *)result + 18) + 556LL;
  }
  else
  {
    v6 = 2147353478LL;
  }
  if ( *(_BYTE *)v6 )
    return (unsigned int *)TppETWPoolThreadMax(a1, v7);
  return result;
}
