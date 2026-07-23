/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x1402F17EC
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140748764 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBuffer @ 0x140A31950 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A31C54 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F19A4 (MiInsertPhysicalPteMapping.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _KPROCESS *Process; // rdx
  ULONG_PTR v10; // r15
  unsigned int v11; // ebp
  int v12; // ebx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // r12
  unsigned int v16; // r14d
  char v18; // al
  __int64 v20; // [rsp+68h] [rbp+10h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( a4 )
  {
    if ( a4 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v12 = a6;
  v13 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  if ( a6 )
  {
    MiInsertVad(a6, (__int64)Process, 0);
    v12 = (*(_DWORD *)(a6 + 48) >> 12) & 0x7F;
  }
  v14 = 0LL;
  v15 = MiLockWorkingSetShared(v13);
  v20 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v16 = v11;
    if ( a3 )
    {
      v16 = (*(_DWORD *)(48LL * *a3 - 0x220000000000LL + 16) >> 5) & 7;
      v18 = *(_BYTE *)(48LL * *a3 - 0x220000000000LL + 34) >> 6;
      if ( v18 == 2 )
      {
        v16 |= 0x18u;
      }
      else if ( !v18 )
      {
        v16 |= 8u;
      }
      ++a3;
    }
    if ( v14 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v13, v14);
    }
    v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v10, 0LL, v12, v15, 0);
LABEL_9:
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v20 + v10), v16);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && (MiWorkingSetIsContended(v13) || (unsigned int)MiPageTableLockIsContended(v13, v14) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v13, v14);
      MiUnlockWorkingSetShared(v13, v15);
      v14 = 0LL;
      MiLockWorkingSetShared(v13);
    }
    --a5;
  }
  while ( a5 );
  if ( v14 )
    MiUnlockPageTableInternal(v13, v14);
  return MiUnlockWorkingSetShared(v13, v15);
}
