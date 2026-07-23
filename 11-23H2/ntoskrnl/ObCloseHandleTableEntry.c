/*
 * XREFs of ObCloseHandleTableEntry @ 0x14073FFB4
 * Callers:
 *     ExSweepHandleTable @ 0x14073FE50 (ExSweepHandleTable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExGetHandlePointer @ 0x14022F830 (ExGetHandlePointer.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExSweepSingleHandle @ 0x1402BEDA8 (ExSweepSingleHandle.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x1405713D0 (KeRaiseUserException.c)
 *     ExDestroyHandle @ 0x14073FC8C (ExDestroyHandle.c)
 *     ObpDecrementHandleCount @ 0x140740144 (ObpDecrementHandleCount.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CE1D0 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1409E6E1C (EtwpTraceHandle.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(__int64 a1, __int64 *a2, _KPROCESS *a3, ULONG_PTR a4, char a5, char a6)
{
  unsigned __int64 HandlePointer; // r13
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r12
  __int64 v14; // r15
  int v15; // eax
  int v16; // ebx
  __int64 v17; // r8
  unsigned __int8 (__fastcall *v19)(_KPROCESS *, unsigned __int64, ULONG_PTR, __int64); // rax
  __int64 v20; // rdx
  signed __int32 v21[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-88h]
  $115DCDF994C6370D29323EAB0E0C9502 v23; // [rsp+38h] [rbp-80h] BYREF

  memset(&v23, 0, sizeof(v23));
  HandlePointer = ExGetHandlePointer(a2);
  v11 = HandlePointer + 48;
  v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
  v22 = v12;
  v13 = 0;
  if ( *(_QWORD *)(v12 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KiStackAttachProcess(a3, 0, (__int64)&v23);
      v12 = v22;
      v13 = 1;
    }
    v19 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, __int64))(v12 + 168);
    LOBYTE(v12) = a5;
    if ( !v19(a3, HandlePointer + 48, a4, v12) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v21, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v13 )
        KiUnstackDetachProcess(&v23);
      return 3221226037LL;
    }
    v12 = v22;
    v11 = HandlePointer + 48;
  }
  v14 = *a2 >> 17;
  if ( (v14 & 1) != 0 && !a6 )
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
    _InterlockedExchangeAdd64(a2, 1uLL);
    _InterlockedOr(v21, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    KeLeaveCriticalRegion();
    if ( v13 )
      KiUnstackDetachProcess(&v23);
    if ( KeGetCurrentThread()->ApcStateIndex != 1
      && ((NtGlobalFlag & 0x400000) != 0
       || KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[29]
       || *(_QWORD *)(a1 + 96)) )
    {
      return KeRaiseUserException(0xC0000235);
    }
    return 3221226037LL;
  }
  if ( (xmmword_140D1EAD0 & 0x40) != 0 )
  {
    v20 = a4;
    if ( a3 == PsInitialSystemProcess )
      v20 = a4 | 0x80000000;
    EtwpTraceHandle(4385LL, v20, v11, v12);
  }
  if ( a6 )
    v15 = ExSweepSingleHandle(a1, a2);
  else
    v15 = ExDestroyHandle(a1, a4, a2);
  v16 = v15;
  KeLeaveCriticalRegion();
  if ( (v14 & 4) != 0 )
  {
    LOBYTE(v17) = 1;
    SeCloseObjectAuditAlarm(HandlePointer + 48, a4 & 0xFFFFFFFFFFFFFFFCuLL, v17);
  }
  ObpDecrementHandleCount((ULONG_PTR)a3);
  if ( v13 )
    KiUnstackDetachProcess(&v23);
  if ( v16 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, -v16);
  ObfDereferenceObjectWithTag((PVOID)(HandlePointer + 48), 0x6E48624Fu);
  return 0LL;
}
