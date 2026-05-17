/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x18001E58C
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     TpReserveTaskPost @ 0x1800708D8 (TpReserveTaskPost.c)
 *     RtlpTpIoAlloc @ 0x18012505C (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     TpSetPoolStackInformation @ 0x180070E80 (TpSetPoolStackInformation.c)
 *     TpSetPoolMaxThreads @ 0x180074550 (TpSetPoolMaxThreads.c)
 *     TpAllocPool @ 0x180074630 (TpAllocPool.c)
 *     TpReleasePool @ 0x180086DF0 (TpReleasePool.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180087980 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180089830 (TpSetPoolMinThreads.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _PEB_LDR_DATA *Ldr,
        volatile signed __int32 **a3,
        __int64 a4)
{
  volatile signed __int64 *v5; // rsi
  char v7; // bl
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // edx
  int v14; // edx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-28h]
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v5 = (volatile signed __int64 *)Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3, a4);
    return 3221225485LL;
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
      return 0LL;
  }
  v18 = 0LL;
  result = TpAllocPool(&v18, 0LL);
  v17 = result;
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v5, v9, v10, v11);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      goto LABEL_40;
    }
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(v18, (unsigned int)TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        v12 = (unsigned int)TppPoolpGlobalPoolMaxThreadsOverride;
        if ( !TppPoolpGlobalPoolMaxThreadsOverride )
        {
          if ( !v18 || (v13 = *(_DWORD *)(v18 + 440)) == 0 )
            v13 = MEMORY[0x7FFE03C0];
          v12 = (unsigned int)(8 * v13);
          if ( (unsigned int)v12 < 0x300 )
            v12 = 768LL;
        }
        TpSetPoolMaxThreads(v18, v12);
        if ( TppPoolpGlobalPoolMaxThreadsOverride )
        {
          v15 = 0LL;
        }
        else
        {
          if ( !v18 || (v14 = *(_DWORD *)(v18 + 440)) == 0 )
            v14 = MEMORY[0x7FFE03C0];
          v15 = (unsigned int)(4 * v14);
          if ( (unsigned int)v15 < 0x180 )
            v15 = 384LL;
        }
        TpSetPoolMaxThreadsSoftLimit(v18, v15);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_27;
      v16 = TpSetPoolStackInformation(v18);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_27:
        *a1 = (volatile signed __int32 *)v18;
        v18 = 0LL;
LABEL_40:
        RtlReleaseSRWLockExclusive(v5);
        if ( v18 )
          TpReleasePool(v18);
        if ( v17 >= 0 )
          *a3 = *a1;
        return (unsigned int)v17;
      }
      TpSetPoolMaxThreads(v18, 1LL);
      v16 = TpSetPoolMinThreads(v18, 1LL);
    }
    v17 = v16;
    if ( v16 < 0 )
      goto LABEL_40;
    goto LABEL_27;
  }
  return result;
}
