/*
 * XREFs of PopFanReadFanNoiseInfo @ 0x1407FC558
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PopFanUpdateStatistics @ 0x140999930 (PopFanUpdateStatistics.c)
 */

__int64 __fastcall PopFanReadFanNoiseInfo(int a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  int v8; // esi
  __int64 i; // rdi
  int v11; // [rsp+30h] [rbp-88h] BYREF
  int v12; // [rsp+34h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-78h] BYREF
  int *v14; // [rsp+60h] [rbp-58h]
  __int64 v15; // [rsp+68h] [rbp-50h]
  int *v16; // [rsp+70h] [rbp-48h]
  __int64 v17; // [rsp+78h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 400);
    if ( *(_BYTE *)(i + 88) )
    {
      if ( !v8 )
      {
        if ( a1 == 84 )
        {
          if ( a3 != 160 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *(_DWORD *)(i + 128) + 2;
          PopFanUpdateStatistics(i);
          memmove((void *)(a2 + 8), (const void *)(i + 216), 8LL * (unsigned int)(*(_DWORD *)(i + 128) + 2));
        }
        else
        {
          if ( a1 != 85 )
            return (unsigned int)-1073741637;
          if ( a3 != 88 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *(_DWORD *)(i + 128);
          *(_OWORD *)(a2 + 4) = *(_OWORD *)(i + 132);
          *(_OWORD *)(a2 + 20) = *(_OWORD *)(i + 148);
          *(_OWORD *)(a2 + 36) = *(_OWORD *)(i + 164);
          *(_OWORD *)(a2 + 52) = *(_OWORD *)(i + 180);
          *(_DWORD *)(a2 + 68) = *(_DWORD *)(i + 196);
          *(_OWORD *)(a2 + 72) = *(_OWORD *)(i + 112);
        }
      }
      ++v8;
    }
    PopReleaseRwLock(i + 400);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  if ( v8 != 1 )
  {
    if ( (unsigned int)dword_140C03A00 > 2 )
    {
      v11 = a1;
      v15 = 4LL;
      v14 = &v11;
      v17 = 4LL;
      v16 = &v12;
      v12 = v8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03A00,
        (unsigned __int8 *)byte_1400314E1,
        0LL,
        0LL,
        4u,
        &v13);
    }
    return (unsigned int)-1073741823;
  }
  return v4;
}
