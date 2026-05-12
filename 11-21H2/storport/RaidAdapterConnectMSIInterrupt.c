/*
 * XREFs of RaidAdapterConnectMSIInterrupt @ 0x1C008BC48
 * Callers:
 *     RaidAdapterConnectInterrupt @ 0x1C0034020 (RaidAdapterConnectInterrupt.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaidAdapterConnectMSIInterrupt(__int64 a1, unsigned __int8 a2)
{
  bool v4; // zf
  NTSTATUS v5; // eax
  unsigned int v6; // r15d
  ULONG Version; // ecx
  bool v8; // sf
  _QWORD *v9; // rbx
  PKINTERRUPT *InterruptObject; // rcx
  PKINTERRUPT v11; // rdx
  __int64 Pool; // rax
  __int64 v13; // r9
  __int64 i; // rsi
  __int64 v15; // r14
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+90h] [rbp+20h] BYREF

  v18 = 0LL;
  memset(&Parameters, 0, sizeof(Parameters));
  v4 = *(_DWORD *)(a1 + 4208) == 2;
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 32);
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)&v18;
  Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)RaidpAdapterMSIInterruptRoutine;
  Parameters.Version = 3;
  Parameters.FullySpecified.ServiceContext = (PVOID)a1;
  if ( v4 )
  {
    Parameters.FullySpecified.SpinLock = 0LL;
  }
  else
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 4216));
    Parameters.FullySpecified.SpinLock = (PKSPIN_LOCK)(a1 + 4216);
  }
  *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = a2;
  Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)RaidpAdapterInterruptRoutine;
  v5 = IoConnectInterruptEx(&Parameters);
  *(_BYTE *)(a1 + 4241) = 0;
  v6 = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  else
  {
    Version = Parameters.Version;
    *(_DWORD *)(a1 + 732) = Parameters.Version;
    if ( Version == 3 )
    {
      v8 = *(char *)(a1 + 110) < 0;
      v9 = (_QWORD *)(a1 + 4232);
      InterruptObject = Parameters.FullySpecified.InterruptObject;
      *(_BYTE *)(a1 + 4241) = 1;
      v11 = *InterruptObject;
      *(_QWORD *)(a1 + 4224) = *InterruptObject;
      if ( v8 && *v9
        || (Pool = RaidAllocatePool(64LL, 16LL * *((unsigned int *)v11 + 1), 1917083986LL, *(_QWORD *)(a1 + 8)),
            (*v9 = Pool) != 0LL) )
      {
        v13 = *(_QWORD *)(a1 + 4224);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v13 + 4); i = (unsigned int)(i + 1) )
        {
          v15 = 16LL * (unsigned int)i;
          if ( IoGetAffinityInterrupt(*(PKINTERRUPT *)(v13 + 48 * i + 24), (PGROUP_AFFINITY)(v15 + *v9)) < 0 )
          {
            *(_WORD *)(*v9 + v15 + 8) = -1;
            *(_QWORD *)(v15 + *v9) = 0LL;
          }
          v13 = *(_QWORD *)(a1 + 4224);
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 720) = v18;
    }
  }
  return v6;
}
