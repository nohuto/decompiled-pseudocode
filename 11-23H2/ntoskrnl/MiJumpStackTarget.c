/*
 * XREFs of MiJumpStackTarget @ 0x14062D4D0
 * Callers:
 *     MiDoStackCopy @ 0x14062D2F0 (MiDoStackCopy.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiGetLeafPfnBuddy @ 0x14038C1BC (MiGetLeafPfnBuddy.c)
 *     MiCanStealKernelStack @ 0x14039A41C (MiCanStealKernelStack.c)
 *     MiSwapStackPageNoDpc @ 0x14039A4AC (MiSwapStackPageNoDpc.c)
 *     MiStackTheftFreezeProcessors @ 0x14062D86C (MiStackTheftFreezeProcessors.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(ULONG_PTR *a1)
{
  ULONG_PTR v1; // r14
  ULONG_PTR v3; // rsi
  signed __int32 v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  unsigned __int16 v9; // bx
  unsigned __int8 v10; // al
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  ULONG_PTR v14; // rsi
  signed __int32 v15; // eax
  unsigned int v16; // ebx
  volatile signed __int32 *result; // rax
  __int64 v18; // [rsp+20h] [rbp-48h]
  unsigned __int8 v19; // [rsp+70h] [rbp+8h]
  int v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  int v22; // [rsp+88h] [rbp+20h] BYREF

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v21 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v5 )
      KeYieldProcessorEx(&v21);
    goto LABEL_25;
  }
  *(_DWORD *)v3 = *(_DWORD *)(v3 + 4) | v5;
  if ( !*(_DWORD *)(v1 + 32) )
  {
    v6 = 48LL * *(_QWORD *)v1 - 0x220000000000LL;
    v18 = *(_QWORD *)(v1 + 8);
    v7 = *(_QWORD *)(v1 + 56);
    v8 = 0LL;
    v9 = (*(_QWORD *)(v1 + 48) != 0LL) + 1;
    v10 = MiLockWorkingSetShared(v7);
    v20 = 0;
    v19 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    if ( *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL)) == *(_QWORD *)(v1 + 24)
      && MiCanStealKernelStack((_QWORD *)v6, v9)
      && ((MiGetLeafPfnBuddy((_QWORD *)v6) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      v12 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v1 + 40) == (__int64)(v12 << 25) >> 16 )
      {
        v8 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (unsigned int)MiLockPageTableInternal(v7, v8, 1, v11) )
        {
          if ( v8 )
          {
            if ( *(_QWORD *)(v1 + 48) )
            {
              MiRemoveLockedPageChargeAndDecRef(v6);
              *(_QWORD *)(v1 + 48) = 0LL;
            }
            if ( (byte_140C65A8F & 1) != 0 )
            {
              *(_DWORD *)(v1 + 32) = (unsigned int)MiSwapStackPageNoDpc(v6, 48 * v18 - 0x220000000000LL) == 0
                                   ? 0xC0000434
                                   : 0;
            }
            else
            {
              v13 = MiMapPageInHyperSpaceWorker(v18, 0LL, 0x80000000);
              *(_QWORD *)(v1 + 16) = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              MiStackTheftFreezeProcessors(v1);
              MiUnmapPageInHyperSpaceWorker(v13, 0x11u);
              *(_DWORD *)(v1 + 32) = 0;
            }
            goto LABEL_13;
          }
        }
        else
        {
          v8 = 0LL;
        }
      }
    }
    *(_DWORD *)(v1 + 32) = -1073740748;
LABEL_13:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 )
      MiUnlockPageTableInternal(v7, v8);
    MiUnlockWorkingSetShared(v7, v19);
  }
LABEL_25:
  v14 = a1[2];
  v15 = _InterlockedDecrement((volatile signed __int32 *)v14);
  v16 = ~v15 & 0x80000000;
  if ( (v15 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( (*(_DWORD *)v14 & 0x80000000) != v16 )
      KeYieldProcessorEx(&v22);
  }
  else
  {
    *(_DWORD *)v14 = *(_DWORD *)(v14 + 4) | v16;
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
