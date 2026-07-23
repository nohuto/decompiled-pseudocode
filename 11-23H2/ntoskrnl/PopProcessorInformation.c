/*
 * XREFs of PopProcessorInformation @ 0x1407A5B54
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     KeQueryGroupAffinity @ 0x14032A520 (KeQueryGroupAffinity.c)
 *     PpmPerfGetCurrentState @ 0x14032A848 (PpmPerfGetCurrentState.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 */

__int64 __fastcall PopProcessorInformation(__int64 a1, __int64 a2, USHORT a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  KAFFINITY GroupAffinity; // rdi
  unsigned __int64 v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebp
  __int64 Prcb; // r14
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int16 *v18[2]; // [rsp+30h] [rbp-48h] BYREF
  USHORT v19; // [rsp+40h] [rbp-38h]
  int v20; // [rsp+42h] [rbp-36h]
  __int16 v21; // [rsp+46h] [rbp-32h]
  unsigned int v22; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  GroupAffinity = KeQueryGroupAffinity(a3);
  v9 = (0x101010101010101LL
      * ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( (unsigned int)(24 * v9) > 0x600 )
  {
    if ( a4 )
      *a4 = 0;
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( (_DWORD)v9 )
    {
      CurrentThread = KeGetCurrentThread();
      v11 = 0;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
      v19 = a3;
      v18[1] = (unsigned __int16 *)GroupAffinity;
      v18[0] = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v22, v18) && v11 < (unsigned int)v9 )
      {
        Prcb = KeGetPrcb(v22);
        *(_DWORD *)(a1 + 24LL * v11) = *(unsigned __int8 *)(Prcb + 209);
        PpmPerfGetCurrentState(
          Prcb,
          (_DWORD *)(a1 + 8 + 24LL * v11),
          (unsigned int *)(a1 + 12 + 24LL * v11),
          0LL,
          0LL,
          0LL);
        v13 = *(_QWORD *)(Prcb + 33968);
        if ( v13 )
          v14 = *(_DWORD *)(v13 + 440);
        else
          v14 = *(_DWORD *)(Prcb + 68);
        *(_DWORD *)(a1 + 24LL * v11 + 4) = v14;
        v15 = *(_QWORD *)(Prcb + 33600);
        if ( v15 )
        {
          *(_DWORD *)(a1 + 24LL * v11 + 16) = *(_DWORD *)(v15 + 40);
          v16 = *(_DWORD *)(v15 + 24) + 1;
        }
        else
        {
          *(_DWORD *)(a1 + 24LL * v11 + 16) = 0;
          v16 = 0;
        }
        *(_DWORD *)(a1 + 24LL * v11++ + 20) = v16;
      }
      PopReleaseRwLock((__int64 *)&PpmIdlePolicyLock);
    }
    *a4 = 24 * v9;
  }
  return v4;
}
