/*
 * XREFs of sub_1C00A64F0 @ 0x1C00A64F0
 * Callers:
 *     sub_1C0035198 @ 0x1C0035198 (sub_1C0035198.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00A64F0(__int64 a1, unsigned __int8 a2)
{
  bool v4; // zf
  NTSTATUS v5; // eax
  unsigned int v6; // r15d
  ULONG Version; // ecx
  bool v8; // sf
  __int64 *v9; // rbx
  PKINTERRUPT *InterruptObject; // rax
  PKINTERRUPT v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 i; // rsi
  __int64 v15; // r14
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Dst; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+90h] [rbp+20h] BYREF

  v18 = 0LL;
  memset_0(&Dst, 0, sizeof(Dst));
  v4 = *(_DWORD *)(a1 + 4272) == 2;
  Dst.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 32);
  Dst.FullySpecified.InterruptObject = (PKINTERRUPT *)&v18;
  Dst.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)sub_1C000FB40;
  Dst.Version = 3;
  Dst.FullySpecified.ServiceContext = (PVOID)a1;
  if ( v4 )
  {
    Dst.FullySpecified.SpinLock = 0LL;
  }
  else
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 4280));
    Dst.FullySpecified.SpinLock = (PKSPIN_LOCK)(a1 + 4280);
  }
  *(_WORD *)&Dst.MessageBased.SynchronizeIrql = a2;
  Dst.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)sub_1C0025C60;
  v5 = IoConnectInterruptEx(&Dst);
  *(_BYTE *)(a1 + 4305) = 0;
  v6 = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)(a1 + 728) = 0LL;
  }
  else
  {
    Version = Dst.Version;
    *(_DWORD *)(a1 + 740) = Dst.Version;
    if ( Version == 3 )
    {
      v8 = *(char *)(a1 + 110) < 0;
      v9 = (__int64 *)(a1 + 4296);
      InterruptObject = Dst.FullySpecified.InterruptObject;
      *(_BYTE *)(a1 + 4305) = 1;
      v11 = *InterruptObject;
      *(_QWORD *)(a1 + 4288) = *InterruptObject;
      if ( v8 && *v9
        || (v12 = sub_1C0007CF4(64LL, 16LL * *((unsigned int *)v11 + 1), 1917083986LL, *(_QWORD *)(a1 + 8)),
            (*v9 = v12) != 0) )
      {
        v13 = *(_QWORD *)(a1 + 4288);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v13 + 4); i = (unsigned int)(i + 1) )
        {
          v15 = 16LL * (unsigned int)i;
          if ( IoGetAffinityInterrupt(*(PKINTERRUPT *)(v13 + 48 * i + 24), (PGROUP_AFFINITY)(v15 + *v9)) < 0 )
          {
            *(_WORD *)(v15 + *v9 + 8) = -1;
            *(_QWORD *)(v15 + *v9) = 0LL;
          }
          v13 = *(_QWORD *)(a1 + 4288);
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 728) = v18;
    }
  }
  return v6;
}
