/*
 * XREFs of sub_140A68338 @ 0x140A68338
 * Callers:
 *     sub_140562F00 @ 0x140562F00 (sub_140562F00.c)
 *     sub_140563100 @ 0x140563100 (sub_140563100.c)
 *     sub_140563158 @ 0x140563158 (sub_140563158.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A68338(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 v7; // rax
  _RTL_BITMAP *v8; // rsi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = qword_140C448A8;
  v5 = a1 >> 12;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = qword_140C448A8 + 152;
  v8 = *(_RTL_BITMAP **)(qword_140C448A8 + 152);
  v9 = (a2 >> 12) + v5;
  v10 = v9 - 1;
  while ( v8 != (_RTL_BITMAP *)v7 )
  {
    v11 = *(_QWORD *)&v8[1].SizeOfBitMap;
    if ( v10 < v11 )
      break;
    v12 = v5;
    v13 = v9;
    if ( v5 <= v11 )
      v12 = *(_QWORD *)&v8[1].SizeOfBitMap;
    if ( (PULONG)v10 >= (PULONG)((char *)v8[1].Buffer + v11 - 1) )
      v13 = (unsigned __int64)v8[1].Buffer + v11;
    v14 = v13 - 1;
    if ( v12 <= v14 )
    {
      if ( a3 )
      {
        if ( (int)sub_14042A5E0(*(_QWORD *)(v4 + 33168), v12 << 12) < 0 )
        {
          v15 = qword_140C448A8;
          v16 = *(_DWORD *)(qword_140C448A8 + 33272);
          if ( !v16 )
            v16 = 3432;
          *(_DWORD *)(qword_140C448A8 + 33272) = v16;
          v17 = *(_DWORD *)(v15 + 33276);
          if ( !v17 )
            v17 = 8;
          *(_DWORD *)(v15 + 33276) = v17;
        }
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 168), &LockHandle);
        RtlClearBits(v8 + 2, v12 - v11, v14 - v12 + 1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    v4 = qword_140C448A8;
    v8 = *(_RTL_BITMAP **)&v8->SizeOfBitMap;
    v7 = qword_140C448A8 + 152;
  }
  return 0LL;
}
