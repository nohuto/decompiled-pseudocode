/*
 * XREFs of RaidGetNpemControlInterface @ 0x1C004EA4C
 * Callers:
 *     RaidQueryLedStateByNpem @ 0x1C004F168 (RaidQueryLedStateByNpem.c)
 *     RaidSetLedStateByNpem @ 0x1C004F5C4 (RaidSetLedStateByNpem.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidQueryNpemControlInterface @ 0x1C004F1D0 (RaidQueryNpemControlInterface.c)
 */

__int64 __fastcall RaidGetNpemControlInterface(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 Pool; // rbx
  __int64 v7; // rdx
  int NpemControlInterface; // ebp

  if ( !a2 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v3 )
    return 3221225485LL;
  if ( !v3 )
    return 3221225473LL;
  v5 = *(_QWORD *)(v3 + 5560);
  if ( v5 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    Pool = RaidAllocatePool(64LL, 64LL, 1347314002LL, a1);
    if ( Pool )
    {
      NpemControlInterface = RaidQueryNpemControlInterface(*(PDEVICE_OBJECT *)(v3 + 32));
      if ( NpemControlInterface < 0
        || (LOBYTE(v7) = 1,
            NpemControlInterface = (*(__int64 (__fastcall **)(_QWORD, __int64))(Pool + 32))(*(_QWORD *)(Pool + 8), v7),
            NpemControlInterface < 0) )
      {
        ExFreePoolWithTag((PVOID)Pool, 0x504E6152u);
        Pool = 0LL;
      }
      else
      {
        *a2 = Pool;
      }
      *(_QWORD *)(v3 + 5560) = Pool;
      return (unsigned int)NpemControlInterface;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
