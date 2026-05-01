/*
 * XREFs of CrmGlobalsStart @ 0x1800436B4
 * Callers:
 *     PsmCrmStart @ 0x180043690 (PsmCrmStart.c)
 * Callees:
 *     CrmRegistrationInitialize @ 0x1800053EC (CrmRegistrationInitialize.c)
 *     CrmRegistrationStartWithActivity @ 0x1800438A0 (CrmRegistrationStartWithActivity.c)
 *     TlgRegisterAggregateProviderEx @ 0x180043C50 (TlgRegisterAggregateProviderEx.c)
 *     CrmLaunchRPCServer @ 0x180044504 (CrmLaunchRPCServer.c)
 *     CrmGlobalsCheckTestSigningEnabled @ 0x18004B658 (CrmGlobalsCheckTestSigningEnabled.c)
 */

int CrmGlobalsStart()
{
  RPC_STATUS v0; // eax
  int result; // eax
  PVOID Heap; // rax
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v6; // ebx
  PVOID v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v0 = UuidCreate(&Uuid);
  if ( v0 )
    return I_RpcMapWin32Status(v0);
  TlgRegisterAggregateProviderEx();
  RtlGetDeviceFamilyInfoEnum(0LL, &unk_1800DC220, &unk_1800DC224);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x6C0uLL);
  v3 = (int)Heap;
  if ( !Heap )
    return -1073741801;
  P = Heap;
  v4 = (__int64)Heap;
  dword_1800DC208 = 12;
  v5 = 12LL;
  do
  {
    CrmRegistrationInitialize(v4);
    v4 += 144LL;
    --v5;
  }
  while ( v5 );
  v6 = 0;
  while ( 1 )
  {
    result = CrmRegistrationStartWithActivity(v3 + 144 * v6, v6 + 5);
    if ( result < 0 )
      break;
    if ( (unsigned int)++v6 >= 0xC )
    {
      v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
      qword_1800DC210 = v7;
      if ( !v7 )
        return -1073741801;
      CrmRegistrationInitialize((__int64)v7);
      result = CrmRegistrationStartWithActivity((_DWORD)qword_1800DC210, 17);
      if ( result >= 0 )
      {
        result = TpAllocTimer(&qword_1800DC218, CrmGlobalsPeriodicRundown, &CrmGlobals, 0LL);
        if ( result >= 0 )
        {
          v8 = -36000000000LL;
          TpSetTimer(qword_1800DC218, &v8, 3600000LL, 900000LL);
          result = TpAllocWork(&qword_1800DC1F0, CrmGlobalsPeriodicNotifier, &CrmGlobals, 0LL);
          if ( result >= 0 )
          {
            dword_1800DC240 = CrmGlobalsCheckTestSigningEnabled();
            return CrmLaunchRPCServer(&BindingVector);
          }
        }
      }
      return result;
    }
  }
  return result;
}
