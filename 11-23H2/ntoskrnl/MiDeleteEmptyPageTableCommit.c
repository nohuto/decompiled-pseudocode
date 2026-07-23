/*
 * XREFs of MiDeleteEmptyPageTableCommit @ 0x14033D1CC
 * Callers:
 *     MiDeleteEmptyPageTableTail @ 0x14033CF20 (MiDeleteEmptyPageTableTail.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiCaptureDeleteHierarchy @ 0x14028AF30 (MiCaptureDeleteHierarchy.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnPageTablePageCommitment @ 0x140764B80 (MiReturnPageTablePageCommitment.c)
 */

unsigned __int64 __fastcall MiDeleteEmptyPageTableCommit(__int64 *a1)
{
  unsigned __int64 *v2; // r9
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned __int64 LeafVa; // r13
  __int64 v6; // r10
  unsigned __int64 v7; // r12
  char *v8; // r14
  _QWORD *v9; // rsi
  _KPROCESS *Process; // r15
  unsigned __int8 v11; // bl
  unsigned __int64 *v12; // rdx
  unsigned __int64 result; // rax
  __int64 v14; // rcx
  char *v15; // rcx
  __int64 i; // r14
  _QWORD *v17; // rcx
  __int64 j; // rsi
  _QWORD *v19; // rcx
  _OWORD v20[21]; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned __int64 *v23; // [rsp+1B0h] [rbp+B0h]

  memset(v20, 0, 0x88uLL);
  memset(&v20[9], 0, 0x88uLL);
  v2 = (unsigned __int64 *)a1[21];
  v22 = 0;
  v23 = v2;
  v3 = v2[14];
  LeafVa = MiGetLeafVa(*v2);
  if ( LeafVa < a1[4] )
    LeafVa = a1[4];
  v7 = MiGetLeafVa(*(_QWORD *)(v4 + 8) + 8LL) - 1;
  if ( v7 > a1[5] )
    v7 = a1[5];
  if ( LeafVa == (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12 )
  {
    v8 = *(char **)v3;
    v15 = (char *)v3;
    if ( *(_QWORD *)v3 )
    {
      for ( ; *((_QWORD *)v8 + 1) != v6; v8 = (char *)*((_QWORD *)v8 + 1) )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(v3 + 16); ; i = *((_QWORD *)v8 + 2) )
      {
        v8 = (char *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || *((char **)v8 + 1) == v15 )
          break;
        v15 = v8;
      }
    }
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v3 + 48), 0x15u) )
    {
      v20[0] = *(_OWORD *)v3;
      v20[1] = *(_OWORD *)(v3 + 16);
      v20[2] = *(_OWORD *)(v3 + 32);
      v20[3] = *(_OWORD *)(v3 + 48);
    }
    else
    {
      v20[0] = *(_OWORD *)v3;
      v20[1] = *(_OWORD *)(v3 + 16);
      v20[2] = *(_OWORD *)(v3 + 32);
      v20[3] = *(_OWORD *)(v3 + 48);
      v20[4] = *(_OWORD *)(v3 + 64);
      v20[5] = *(_OWORD *)(v3 + 80);
      v20[6] = *(_OWORD *)(v3 + 96);
      v20[7] = *(_OWORD *)(v3 + 112);
      *(_QWORD *)&v20[8] = *(_QWORD *)(v3 + 128);
    }
    HIDWORD(v20[1]) = (LeafVa >> 12) - 1;
    BYTE1(v20[2]) = ((LeafVa >> 12) - 1) >> 32;
    v8 = (char *)v20 + 1;
  }
  if ( v7 == (((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF) )
  {
    v9 = *(_QWORD **)(v3 + 8);
    v17 = (_QWORD *)v3;
    if ( v9 )
    {
      v19 = (_QWORD *)*v9;
      if ( *v9 )
      {
        do
        {
          v9 = v19;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
      }
    }
    else
    {
      for ( j = *(_QWORD *)(v3 + 16); ; j = v9[2] )
      {
        v9 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v9 || (_QWORD *)*v9 == v17 )
          break;
        v17 = v9;
      }
    }
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v3 + 48), 0x15u) )
    {
      v20[9] = *(_OWORD *)v3;
      v20[10] = *(_OWORD *)(v3 + 16);
      v20[11] = *(_OWORD *)(v3 + 32);
      v20[12] = *(_OWORD *)(v3 + 48);
    }
    else
    {
      v20[9] = *(_OWORD *)v3;
      v20[10] = *(_OWORD *)(v3 + 16);
      v20[11] = *(_OWORD *)(v3 + 32);
      v20[12] = *(_OWORD *)(v3 + 48);
      v20[13] = *(_OWORD *)(v3 + 64);
      v20[14] = *(_OWORD *)(v3 + 80);
      v20[15] = *(_OWORD *)(v3 + 96);
      v20[16] = *(_OWORD *)(v3 + 112);
      *(_QWORD *)&v20[17] = *(_QWORD *)(v3 + 128);
    }
    DWORD2(v20[10]) = (v7 >> 12) + 1;
    LOBYTE(v20[11]) = ((v7 >> 12) + 1) >> 32;
    v9 = (_QWORD *)((char *)&v20[9] + 1);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = MiLockWorkingSetShared(a1[3]);
  MiCaptureDeleteHierarchy(LeafVa, v7, v11, (__int64)&v22);
  MiUnlockWorkingSetShared(a1[3], v11);
  MiReturnPageTablePageCommitment(LeafVa, v7, (_DWORD)Process, (_DWORD)v8, (__int64)v9, v3, (__int64)&v22);
  v12 = v23;
  result = v23[4];
  v14 = *(_QWORD *)(result + 32);
  if ( v14 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], -v14);
    result = v12[4];
    *(_QWORD *)(result + 32) = 0LL;
  }
  return result;
}
