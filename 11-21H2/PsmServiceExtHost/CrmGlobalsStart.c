/*
 * XREFs of CrmGlobalsStart @ 0x180048884
 * Callers:
 *     PsmCrmStart @ 0x180048860 (PsmCrmStart.c)
 * Callees:
 *     CrmRegistrationInitialize @ 0x18003372C (CrmRegistrationInitialize.c)
 *     CrmRegistrationStartWithActivity @ 0x180048A24 (CrmRegistrationStartWithActivity.c)
 *     CrmLaunchRPCServer @ 0x180048B28 (CrmLaunchRPCServer.c)
 *     TlgRegisterAggregateProviderEx @ 0x180048E10 (TlgRegisterAggregateProviderEx.c)
 */

int CrmGlobalsStart()
{
  RPC_STATUS v0; // eax
  char *Heap; // rax
  char *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rbx
  int result; // eax
  PVOID v8; // rax
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v0 = UuidCreate(&Uuid);
  if ( v0 )
    return I_RpcMapWin32Status(v0);
  TlgRegisterAggregateProviderEx();
  RtlGetDeviceFamilyInfoEnum(0LL, &unk_1800DD1E0, &unk_1800DD1E4);
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x6C0uLL);
  v2 = Heap;
  if ( !Heap )
    return -1073741801;
  P = Heap;
  v3 = (__int64)Heap;
  dword_1800DD1C8 = 12;
  v4 = 12LL;
  do
  {
    CrmRegistrationInitialize(v3);
    v3 += 144LL;
    --v4;
  }
  while ( v4 );
  v6 = 0LL;
  while ( 1 )
  {
    result = CrmRegistrationStartWithActivity(&v2[144 * v6], (unsigned int)(v6 + 5), v5, 1LL);
    if ( result < 0 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0xC )
    {
      v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
      qword_1800DD1D0 = v8;
      if ( !v8 )
        return -1073741801;
      CrmRegistrationInitialize((__int64)v8);
      result = CrmRegistrationStartWithActivity(qword_1800DD1D0, 17LL, v9, 2LL);
      if ( result >= 0 )
      {
        result = TpAllocTimer(&qword_1800DD1D8, CrmGlobalsPeriodicRundown, &CrmGlobals, 0LL);
        if ( result >= 0 )
        {
          v10 = -36000000000LL;
          TpSetTimer(qword_1800DD1D8, &v10, 3600000LL, 900000LL);
          return CrmLaunchRPCServer(&BindingVector);
        }
      }
      return result;
    }
  }
  return result;
}
