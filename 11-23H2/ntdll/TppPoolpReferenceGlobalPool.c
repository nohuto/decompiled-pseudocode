/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x180031818
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x180033284 (TppCleanupGroupMemberInitialize.c)
 *     TpReserveTaskPost @ 0x18004F8B0 (TpReserveTaskPost.c)
 *     RtlpTpIoAlloc @ 0x180127F2C (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TpAllocPool @ 0x18004BC30 (TpAllocPool.c)
 *     TpSetPoolStackInformation @ 0x180050B10 (TpSetPoolStackInformation.c)
 *     TpSetPoolMaxThreads @ 0x180080F40 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083F40 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleasePool @ 0x180085680 (TpReleasePool.c)
 *     TpSetPoolMinThreads @ 0x180085B80 (TpSetPoolMinThreads.c)
 *     TppRaiseInvalidParameter @ 0x180127248 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _PEB_LDR_DATA *Ldr,
        volatile signed __int32 **a3,
        __int64 a4)
{
  _RTL_SRWLOCK *v5; // rsi
  char v7; // bl
  NTSTATUS result; // eax
  ULONG v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx
  NTSTATUS v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  PTP_POOL PoolReturn; // [rsp+68h] [rbp+20h] BYREF

  v5 = (_RTL_SRWLOCK *)Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3, a4);
    return -1073741811;
  }
  if ( *a1 )
  {
    v7 = 0;
    RtlAcquireSRWLockShared(v5);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v7 = 1;
    }
    RtlReleaseSRWLockShared(v5);
    if ( v7 )
      return 0;
  }
  PoolReturn = 0LL;
  result = TpAllocPool(&PoolReturn, 0LL);
  v14 = result;
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(v5);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      goto LABEL_40;
    }
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(PoolReturn, TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        v9 = TppPoolpGlobalPoolMaxThreadsOverride;
        if ( !TppPoolpGlobalPoolMaxThreadsOverride )
        {
          if ( !PoolReturn || (v10 = *((_DWORD *)PoolReturn + 110)) == 0 )
            v10 = MEMORY[0x7FFE03C0];
          v9 = 8 * v10;
          if ( v9 < 0x300 )
            v9 = 768;
        }
        TpSetPoolMaxThreads(PoolReturn, v9);
        if ( TppPoolpGlobalPoolMaxThreadsOverride )
        {
          v12 = 0LL;
        }
        else
        {
          if ( !PoolReturn || (v11 = *((_DWORD *)PoolReturn + 110)) == 0 )
            v11 = MEMORY[0x7FFE03C0];
          v12 = (unsigned int)(4 * v11);
          if ( (unsigned int)v12 < 0x180 )
            v12 = 384LL;
        }
        TpSetPoolMaxThreadsSoftLimit(PoolReturn, v12);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_27;
      v13 = TpSetPoolStackInformation(PoolReturn, TppPoolpGlobalPoolStackSize);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_27:
        *a1 = (volatile signed __int32 *)PoolReturn;
        PoolReturn = 0LL;
LABEL_40:
        RtlReleaseSRWLockExclusive(v5);
        if ( PoolReturn )
          TpReleasePool(PoolReturn);
        if ( v14 >= 0 )
          *a3 = *a1;
        return v14;
      }
      TpSetPoolMaxThreads(PoolReturn, 1u);
      v13 = TpSetPoolMinThreads(PoolReturn, 1u);
    }
    v14 = v13;
    if ( v13 < 0 )
      goto LABEL_40;
    goto LABEL_27;
  }
  return result;
}
