/*
 * XREFs of USBType1ProcessStreamPointer @ 0x1C0005024
 * Callers:
 *     USBType1ProcessPin @ 0x1C0004F30 (USBType1ProcessPin.c)
 * Callees:
 *     USBHwGetCurrentFrame @ 0x1C0002ED4 (USBHwGetCurrentFrame.c)
 *     USBType1Build1MsecIsocRequest @ 0x1C0003D80 (USBType1Build1MsecIsocRequest.c)
 *     USBType1BuildIsochUrbRequest @ 0x1C0003EF0 (USBType1BuildIsochUrbRequest.c)
 *     USBType1LockDelay @ 0x1C0039DC0 (USBType1LockDelay.c)
 */

__int64 __fastcall USBType1ProcessStreamPointer(PKSSTREAM_POINTER StreamPointer)
{
  PKSPIN Pin; // rbp
  int CurrentFrame; // ebx
  struct _KSSTREAM_POINTER *v3; // rdi
  _QWORD *Context; // r14
  __int64 v5; // rsi
  KSPIN_LOCK *v6; // r15
  KIRQL v7; // r12
  _QWORD *v8; // rcx
  __int64 v9; // r14
  int v10; // r8d
  int v11; // edx
  struct _IO_WORKITEM *v12; // rcx
  struct _KSSTREAM_POINTER *v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = StreamPointer;
  Pin = StreamPointer->Pin;
  CurrentFrame = 0;
  v3 = StreamPointer;
  Context = Pin->Context;
  v5 = Context[19];
  if ( *(_BYTE *)(v5 + 99) )
  {
    CurrentFrame = USBType1LockDelay(StreamPointer->Pin);
    if ( CurrentFrame < 0 )
      goto LABEL_3;
  }
  if ( !*(_BYTE *)(v5 + 96) )
    goto LABEL_19;
  v6 = Context + 14;
  v7 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  if ( !*(_BYTE *)(v5 + 916) )
  {
    v8 = Pin->Context;
    v15 = 0;
    v9 = v8[19];
    CurrentFrame = USBHwGetCurrentFrame(v8[2], &v15);
    if ( CurrentFrame >= 0 )
    {
      v10 = v15;
      v11 = *(_DWORD *)(v9 + 900);
      v12 = *(struct _IO_WORKITEM **)(v9 + 968);
      *(_BYTE *)(v9 + 916) = 1;
      *(_DWORD *)(v9 + 904) = v10 + 2;
      *(_DWORD *)(v9 + 896) = v11 + v10 + 2;
      *(_DWORD *)(v9 + 908) = v11 + 18;
      IoQueueWorkItem(v12, (PIO_WORKITEM_ROUTINE)USBType1AsyncEndpointPoll, CriticalWorkQueue, Pin);
    }
  }
  KeReleaseSpinLock(v6, v7);
  if ( CurrentFrame < 0 )
  {
LABEL_3:
    KsStreamPointerUnlock(v3, 0);
  }
  else
  {
LABEL_19:
    if ( *(_DWORD *)(v5 + 124) )
    {
      CurrentFrame = USBType1Build1MsecIsocRequest(Pin, &v14);
      if ( CurrentFrame < 0 )
        return (unsigned int)CurrentFrame;
      v3 = v14;
    }
    if ( !v3 )
      return 0;
    if ( *(_DWORD *)(v5 + 124) )
      return 0;
    CurrentFrame = USBType1BuildIsochUrbRequest(v3, (__int64 (__fastcall *)())USBType1CompleteCallback);
    if ( CurrentFrame >= 0 )
      return 0;
  }
  return (unsigned int)CurrentFrame;
}
