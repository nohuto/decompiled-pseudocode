/*
 * XREFs of PopHandleWakeSources @ 0x140A51888
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1403965EC (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x140396620 (PopAcquireWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x14063D9E0 (ExCopyWakeTimerInfo.c)
 *     PopNewWakeSource @ 0x14098F388 (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x14098F3B8 (PopUnlinkWakeSources.c)
 *     PopValidateRTCWake @ 0x140A519DC (PopValidateRTCWake.c)
 */

LONG PopHandleWakeSources()
{
  __int64 v0; // rsi
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // r9d
  char v5; // dl
  int v7; // r14d
  SIZE_T *v8; // rbp
  int v9; // ecx
  __int64 v10; // rdi
  __int64 *v11; // rcx
  __int64 *i; // rax
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *j; // rax
  __int64 v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v19; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v0 = PopCurrentWakeInfo;
  v1 = 0;
  PopWakeSourceWorkState = 3;
  if ( !PopCurrentWakeInfo )
    goto LABEL_10;
  PopCurrentWakeInfo = 0LL;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  LOBYTE(v2) = 0;
  v19 = 0;
  if ( (PopSimulate & 0x200000) == 0 && (PopFixedWakeSourceMask & 1) == 0 )
  {
    if ( (PopSimulate & 0x400000) == 0 && (PopFixedWakeSourceMask & 2) == 0 )
    {
      if ( !(unsigned __int8)PopValidateRTCWake(&v19, v2) || (PopSimulate & 0x100000) != 0 )
        goto LABEL_5;
      LOBYTE(v2) = v19;
      v7 = 4;
    }
    else
    {
      v7 = 2;
    }
  }
  else
  {
    v7 = 1;
  }
  if ( dword_140C22820 < 0 || (unsigned __int64)dword_140C22820 >= 3 )
    v8 = 0LL;
  else
    v8 = (SIZE_T *)qword_140C22838[3 * dword_140C22820];
  if ( v7 == 4 )
  {
    if ( (unsigned __int64)v8 > 0xFFFFFFFFFFFFFFFCuLL )
      v9 = 4;
    else
      v9 = ((_BYTE)v2 != 0) + 2;
  }
  else
  {
    v9 = 1;
  }
  v10 = PopNewWakeSource(v9);
  PopUnlinkWakeSources(v0);
  if ( v10 )
  {
    if ( (unsigned int)(*(_DWORD *)(v10 + 16) - 2) <= 1 )
    {
      ExCopyWakeTimerInfo(v8, (_QWORD *)(v10 + 24));
    }
    else if ( v8 == (SIZE_T *)-1LL )
    {
      *(_DWORD *)(v10 + 24) = 0;
    }
    else if ( v8 == (SIZE_T *)-2LL )
    {
      *(_DWORD *)(v10 + 24) = 1;
    }
    else
    {
      if ( v8 == (SIZE_T *)-3LL )
        v7 = 2;
      *(_DWORD *)(v10 + 24) = v7;
    }
    v11 = *(__int64 **)(v0 + 32);
    if ( *v11 != v0 + 24 )
LABEL_36:
      __fastfail(3u);
    *(_QWORD *)v10 = v0 + 24;
    *(_QWORD *)(v10 + 8) = v11;
    *v11 = v10;
    *(_QWORD *)(v0 + 32) = v10;
    *(_DWORD *)(v0 + 40) = 1;
  }
LABEL_5:
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v3 = PopWakeInfoList;
  if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
    goto LABEL_36;
  ++PopWakeInfoCount;
  *(_QWORD *)v0 = PopWakeInfoList;
  *(_QWORD *)(v0 + 8) = &PopWakeInfoList;
  *(_QWORD *)(v3 + 8) = v0;
  PopWakeInfoList = v0;
  v4 = *(_DWORD *)(v0 + 40);
  if ( v4 )
  {
    v5 = 0;
    for ( i = *(__int64 **)(v0 + 24); i != (__int64 *)(v0 + 24); i = (__int64 *)*i )
    {
      v13 = *((_DWORD *)i + 4);
      if ( v13 == 1 )
        goto LABEL_7;
      if ( !v13 )
      {
        v14 = *(__int64 *)((char *)i + 76) - *(_QWORD *)&GUID_NETWORK_ADAPTER_CLASS.Data1;
        if ( !v14 )
          v14 = *(__int64 *)((char *)i + 84) - *(_QWORD *)GUID_NETWORK_ADAPTER_CLASS.Data4;
        if ( v14 )
        {
          v15 = *(__int64 *)((char *)i + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
          if ( !v15 )
            v15 = *(__int64 *)((char *)i + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
          if ( v15 )
            goto LABEL_7;
        }
      }
    }
  }
  else
  {
LABEL_7:
    v5 = 1;
  }
  *(_BYTE *)(v0 + 80) = v5;
  if ( v4 )
  {
    for ( j = *(__int64 **)(v0 + 24); j != (__int64 *)(v0 + 24); j = (__int64 *)*j )
    {
      if ( !*((_DWORD *)j + 4) )
      {
        v17 = *(__int64 *)((char *)j + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
        if ( !v17 )
          v17 = *(__int64 *)((char *)j + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
        if ( !v17 )
        {
          v1 = 1;
          break;
        }
      }
    }
  }
  *(_BYTE *)(v0 + 81) = v1;
LABEL_10:
  PopWakeSourceWorkState = 4;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  return KeSetEvent(&PopWakeSourceAvailable, 0, 0);
}
