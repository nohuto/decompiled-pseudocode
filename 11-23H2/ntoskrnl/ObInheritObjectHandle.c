/*
 * XREFs of ObInheritObjectHandle @ 0x1407B06EC
 * Callers:
 *     ExpDuplicateSingleHandle @ 0x1407B0648 (ExpDuplicateSingleHandle.c)
 * Callees:
 *     ExGetHandlePointer @ 0x14022F830 (ExGetHandlePointer.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObpIncrPointerCount @ 0x14025A4D4 (ObpIncrPointerCount.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7090 (ObpIncrementHandleCountEx.c)
 *     EtwTraceDuplicateHandle @ 0x1409E534C (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObInheritObjectHandle(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 HandlePointer; // r14
  void *v9; // rsi
  int v10; // ebx
  signed __int32 v12[8]; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  HandlePointer = ExGetHandlePointer((__int64 *)a4);
  v9 = (void *)(HandlePointer + 48);
  ObpIncrPointerCount((volatile signed __int64 *)HandlePointer);
  v13 = *(_DWORD *)(a4 + 8) & 0x1FFFFFF;
  _InterlockedExchangeAdd64((volatile signed __int64 *)a4, 1uLL);
  _InterlockedOr(v12, 0);
  if ( *(_QWORD *)(a3 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
  v10 = ObpIncrementHandleCountEx(3u, (__int64)&v13, (struct _KPROCESS *)a1, (__int64)v9, 0, 0, 0LL);
  if ( v10 < 0 )
  {
    ObfDereferenceObject(v9);
  }
  else if ( (xmmword_140D1EAD0 & 0x40) != 0 )
  {
    EtwTraceDuplicateHandle(
      a2,
      a2,
      (_DWORD)v9,
      *(_DWORD *)(a1 + 1344),
      *(_DWORD *)(a1 + 1088),
      ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]);
  }
  return (unsigned int)v10;
}
