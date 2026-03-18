/*
 * XREFs of MiJumpStackTarget @ 0x1402003C0
 * Callers:
 *     MiDoStackCopy @ 0x140200230 (MiDoStackCopy.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiSwapStackPageNoDpc @ 0x14024A0FC (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x14024A2B8 (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x14024A35C (MiGetLeafPfnBuddy.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiStackTheftFreezeProcessors @ 0x140590CF0 (MiStackTheftFreezeProcessors.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(ULONG_PTR *a1)
{
  ULONG_PTR v1; // r14
  ULONG_PTR v3; // rdi
  signed __int32 v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int16 v9; // bx
  char v10; // al
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // rdi
  int v13; // ebp
  unsigned __int64 v14; // rbx
  bool v15; // zf
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  ULONG_PTR v20; // rdi
  signed __int32 v21; // eax
  unsigned int v22; // ebx
  volatile signed __int32 *result; // rax
  __int64 v24; // [rsp+20h] [rbp-48h]
  char v25; // [rsp+70h] [rbp+8h]
  int v26; // [rsp+78h] [rbp+10h] BYREF
  int v27; // [rsp+80h] [rbp+18h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v27 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v5 )
      KeYieldProcessorEx(&v27);
    goto LABEL_33;
  }
  *(_DWORD *)v3 = v5 | *(_DWORD *)(v3 + 4);
  if ( !*(_DWORD *)(v1 + 40) )
  {
    v6 = 48LL * *(_QWORD *)v1 - 0x220000000000LL;
    v24 = *(_QWORD *)(v1 + 8);
    v7 = *(_QWORD *)(v1 + 64);
    v8 = 0LL;
    v9 = (*(_QWORD *)(v1 + 56) != 0LL) + 1;
    v10 = MiLockWorkingSetShared(v7);
    v26 = 0;
    v25 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL)) == *(_QWORD *)(v1 + 32) )
    {
      if ( (unsigned int)MiCanStealKernelStack(v6, v9) )
      {
        if ( ((MiGetLeafPfnBuddy(v6, v11) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
        {
          v11 = *(_QWORD *)(v6 + 8);
          if ( *(_QWORD *)(v1 + 48) == (__int64)(v11 << 25) >> 16 )
          {
            v8 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( (unsigned int)MiLockPageTableInternal(v7, v8, 1LL) )
            {
              if ( v8 )
              {
                if ( *(_QWORD *)(v1 + 56) )
                {
                  MiRemoveLockedPageChargeAndDecRef(v6);
                  *(_QWORD *)(v1 + 56) = 0LL;
                }
                if ( (byte_140C506CE & 1) != 0 )
                {
                  if ( !(unsigned int)MiSwapStackPageNoDpc(0LL, v6, 48 * v24 - 0x220000000000LL) )
                    MiStackTheftFreezeProcessors(v1);
                }
                else
                {
                  v16 = MiMapPageInHyperSpaceWorker(v24, 0LL, 0x80000000LL);
                  v17 = *(_QWORD *)(v1 + 16);
                  v18 = v16;
                  *(_QWORD *)(v1 + 16) = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  MiStackTheftFreezeProcessors(v1);
                  LOBYTE(v19) = 17;
                  MiUnmapPageInHyperSpaceWorker(v18, v19, 0x80000000LL);
                  *(_QWORD *)(v1 + 16) = v17;
                }
                *(_DWORD *)(v1 + 40) = 0;
LABEL_13:
                _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v8 )
                  MiUnlockPageTableInternal(v7, v8);
                LOBYTE(v11) = v25;
                MiUnlockWorkingSetShared(v7, v11);
                v12 = *(unsigned __int64 **)(v1 + 16);
                v13 = 0;
                v14 = ZeroPte;
                if ( !(unsigned int)MiPteInShadowRange(v12) )
                  goto LABEL_31;
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v13 = 1;
                  if ( !HIBYTE(word_140C51864) )
                  {
                    v15 = (ZeroPte & 1) == 0;
                    goto LABEL_29;
                  }
                }
                else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                {
                  v15 = (ZeroPte & 1) == 0;
LABEL_29:
                  if ( !v15 )
                    v14 = ZeroPte | 0x8000000000000000uLL;
                }
LABEL_31:
                *v12 = v14;
                if ( v13 )
                  MiWritePteShadow(v12, v14);
                goto LABEL_33;
              }
            }
            else
            {
              v8 = 0LL;
            }
          }
        }
      }
    }
    *(_DWORD *)(v1 + 40) = -1073740748;
    goto LABEL_13;
  }
LABEL_33:
  v20 = a1[2];
  v21 = _InterlockedDecrement((volatile signed __int32 *)v20);
  v22 = ~v21 & 0x80000000;
  if ( (v21 & 0x7FFFFFFF) != 0 )
  {
    v28 = 0;
    while ( (*(_DWORD *)v20 & 0x80000000) != v22 )
      KeYieldProcessorEx(&v28);
  }
  else
  {
    *(_DWORD *)v20 = v22 | *(_DWORD *)(v20 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
