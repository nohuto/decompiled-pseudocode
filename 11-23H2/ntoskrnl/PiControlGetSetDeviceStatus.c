/*
 * XREFs of PiControlGetSetDeviceStatus @ 0x1406CBD50
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BD7C (PiControlFreeUserModeCallersBuffer.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     PnpRequestDeviceAction @ 0x1403591E4 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x140359D80 (PnpDeleteDeviceActionRequest.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     PnpCancelDeviceActionRequest @ 0x140562CC4 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x140562D1C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CBF64 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406D4220 (PiControlMakeUserModeCallersCopy.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiControlGetSetDeviceStatus(__int64 a1, unsigned __int16 *a2, unsigned int a3, char a4)
{
  unsigned int v4; // ecx
  size_t v5; // r12
  _DWORD *v7; // rbx
  volatile signed __int32 *v8; // rdi
  void *v9; // r14
  __int64 result; // rax
  _QWORD *v11; // r13
  __int64 v12; // rax
  _DWORD *v13; // rsi
  int v14; // ecx
  int v15; // r15d
  int v16; // ebx
  int v17; // ecx
  int v18; // eax
  NTSTATUS v19; // eax
  void *Pool2; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  struct _KEVENT *p_Event; // rax
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  _DWORD *v25; // [rsp+48h] [rbp-38h] BYREF
  __int128 v26; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+38h] BYREF

  v4 = *a2;
  v5 = a3;
  v26 = 0LL;
  v24 = 0LL;
  LODWORD(v28) = 0;
  WORD1(v26) = v4;
  v7 = a2;
  LOWORD(v26) = v4;
  v8 = 0LL;
  v9 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v26 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    v11 = (_QWORD *)PnpDeviceObjectFromDeviceInstanceWithTag(&v26, 1399877200LL);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v26 + 1));
    if ( !v11 )
      return (unsigned int)-1073741810;
    v12 = v11[39];
    v13 = *(_DWORD **)(v12 + 40);
    if ( !v13 )
    {
      v16 = -1073741810;
      goto LABEL_11;
    }
    if ( v13 == IopRootDeviceNode && v7[4] )
    {
      v16 = -1073741790;
      goto LABEL_11;
    }
    v14 = v7[4];
    v15 = v7[7] & 1;
    if ( !v14 )
    {
      PiControlGetUserFlagsFromDeviceNode(*(_QWORD *)(v12 + 40), v7 + 5);
      v7[6] = v13[101];
      v7[8] = v13[102];
      v16 = 0;
      goto LABEL_9;
    }
    v17 = v14 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
      {
        v16 = -1073741808;
        goto LABEL_11;
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v18 = PnpRequestDeviceAction(v11, 1u, 0, 0LL, (__int64)&Event, (__int64)&v28, &v24);
      v16 = v18;
    }
    else
    {
      if ( v15 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, v5, 1433431632LL);
        v9 = Pool2;
        if ( !Pool2 )
        {
          v16 = -1073741670;
LABEL_11:
          ObfDereferenceObjectWithTag(v11, 0x53706E50u);
          if ( v16 < 0 )
          {
            if ( v9 )
              ExFreePoolWithTag(v9, 0x55706E50u);
          }
          return (unsigned int)v16;
        }
        memmove(Pool2, v7, v5);
        v7 = v9;
      }
      else
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
      }
      v25 = v7;
      v21 = &v24;
      if ( v15 )
        v21 = 0LL;
      v22 = &v28;
      if ( v15 )
        v22 = 0LL;
      p_Event = &Event;
      if ( v15 )
        p_Event = 0LL;
      v18 = PnpRequestDeviceAction(v11, 0xFu, 0, &v25, (__int64)p_Event, (__int64)v22, v21);
      v16 = v18;
      if ( v15 )
        goto LABEL_40;
    }
    if ( v18 >= 0 )
    {
      v19 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
      v8 = (volatile signed __int32 *)v24;
      v16 = v19;
      if ( v19 == 257 )
      {
        if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue((volatile signed __int32 *)v24) )
        {
          v16 = -1073741536;
          goto LABEL_9;
        }
        PnpCancelDeviceActionRequest((__int64)v8);
        v16 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      if ( !v16 )
        v16 = v28;
      goto LABEL_9;
    }
LABEL_40:
    v8 = (volatile signed __int32 *)v24;
LABEL_9:
    if ( v8 )
      PnpDeleteDeviceActionRequest(v8);
    goto LABEL_11;
  }
  return result;
}
