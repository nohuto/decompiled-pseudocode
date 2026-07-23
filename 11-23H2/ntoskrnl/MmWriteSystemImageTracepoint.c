/*
 * XREFs of MmWriteSystemImageTracepoint @ 0x1406438BC
 * Callers:
 *     KiTpWriteBreakpoint @ 0x14057F3BC (KiTpWriteBreakpoint.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     RtlLookupFunctionEntry @ 0x1402A5720 (RtlLookupFunctionEntry.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiInitializeDriverPatchState @ 0x140697230 (MiInitializeDriverPatchState.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     MiUnlockDriverPages @ 0x140875D6C (MiUnlockDriverPages.c)
 *     MiPrepareDriverPatchState @ 0x140A2B8D4 (MiPrepareDriverPatchState.c)
 */

__int64 __fastcall MmWriteSystemImageTracepoint(DWORD64 ControlPc, char a2, char a3)
{
  char v3; // si
  unsigned __int64 v4; // rdi
  __int64 Lock; // r13
  _QWORD *v6; // rax
  _QWORD *v7; // r15
  int v8; // ebx
  char v9; // r14
  char *AnyMultiplexedVm; // rbx
  unsigned int v11; // esi
  unsigned int BeginAddress; // edi
  PRUNTIME_FUNCTION v13; // rax
  unsigned int v15; // eax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-C0h] BYREF
  char *v20; // [rsp+48h] [rbp-B8h]
  __int64 v21[14]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[14]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = a2;
  v4 = ControlPc;
  memset(v21, 0, 0x68uLL);
  ImageBase = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = MiLookupDataTableEntry(v4, 0);
  v7 = v6;
  if ( !v6 )
  {
    v8 = -1073741811;
    goto LABEL_15;
  }
  if ( (unsigned int)MiGetSystemRegionType(v6[6]) == 1 )
  {
    v8 = -1073741637;
    goto LABEL_15;
  }
  v9 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v20 = AnyMultiplexedVm;
  while ( 1 )
  {
    MiInitializeDriverPatchState(v7, v21);
    v8 = MiPrepareDriverPatchState(v21, AnyMultiplexedVm);
    if ( v8 < 0 )
      break;
    if ( v9 )
    {
      v11 = *((_DWORD *)v7 + 16);
      BeginAddress = 0;
    }
    else
    {
      if ( !v3 )
      {
        BeginAddress = v4 - *((_DWORD *)v7 + 12);
        v11 = 1;
        goto LABEL_19;
      }
      v13 = RtlLookupFunctionEntry(v4, &ImageBase, 0LL);
      if ( !v13 )
        goto LABEL_13;
      BeginAddress = v13->BeginAddress;
      v11 = v13->EndAddress - v13->BeginAddress;
    }
    if ( !v11 )
      goto LABEL_13;
LABEL_19:
    v15 = *((_DWORD *)v7 + 16);
    if ( BeginAddress >= v15 || v15 - BeginAddress < v11 )
    {
LABEL_13:
      v8 = -1073741811;
      break;
    }
    v8 = MiLockDriverPageRange(v21, BeginAddress >> 12, (v11 + BeginAddress - 1) >> 12, 2 * v9 + 1, 0LL);
    if ( v8 < 0 )
      break;
    memset(v22, 0, 0x68uLL);
    LOBYTE(v22[3]) = a3;
    v22[1] = ControlPc;
    v22[2] = __PAIR64__(v11, BeginAddress);
    v8 = VslpEnterIumSecureMode(2u, 84, 0, (__int64)v22);
    if ( v8 != -1073741267 )
      break;
    if ( v9 )
    {
      v8 = -1073741637;
      break;
    }
    MiUnlockDriverPages(v21);
    v4 = ControlPc;
    v9 = 1;
    AnyMultiplexedVm = v20;
    v3 = a2;
  }
  MiUnlockDriverPages(v21);
LABEL_15:
  if ( Lock )
    MmReleaseLoadLock(Lock);
  return (unsigned int)v8;
}
