/*
 * XREFs of sub_140A6849C @ 0x140A6849C
 * Callers:
 *     sub_1405633A8 @ 0x1405633A8 (sub_1405633A8.c)
 *     sub_140A687F0 @ 0x140A687F0 (sub_140A687F0.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402127F0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     RtlFindFirstRunClear @ 0x14024B2A0 (RtlFindFirstRunClear.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlFindNextForwardRunClear @ 0x1402E1F90 (RtlFindNextForwardRunClear.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A6849C()
{
  __int64 v0; // r15
  unsigned int v1; // r14d
  __int64 v2; // rdx
  bool v3; // r13
  __int64 v4; // rax
  _RTL_BITMAP *v5; // rdi
  ULONG i; // eax
  int v7; // eax
  __int64 v8; // rcx
  ULONG v9; // esi
  ULONG v10; // esi
  ULONG v11; // ebx
  int v12; // eax
  int v13; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  ULONG StartingIndex; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h]

  StartingIndex = 0;
  v1 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LODWORD(v0) = HIDWORD(KeGetPcr()[1].LockArray);
  v2 = qword_140C448A8;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140C448A8 + 136) + 24 * v0) )
  {
    v3 = (_DWORD)v0 == *(_DWORD *)(qword_140C448A8 + 180);
    v17 = *(_QWORD *)(qword_140C448A8 + 33216);
    do
    {
      v4 = v2 + 152;
      v5 = *(_RTL_BITMAP **)(v2 + 152);
      while ( v5 != (_RTL_BITMAP *)v4 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 168), &LockHandle);
        for ( i = RtlFindFirstRunClear(v5 + 2, &StartingIndex); ; i = RtlFindNextForwardRunClear(
                                                                        v5 + 2,
                                                                        v9,
                                                                        &StartingIndex) )
        {
          v10 = StartingIndex;
          v11 = i;
          if ( i )
          {
            if ( i >= 0x140 )
              v11 = 320;
            RtlSetBits(v5 + 2, StartingIndex, v11);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( !v11 )
            break;
          v7 = sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33168), (*(_QWORD *)&v5[1].SizeOfBitMap + v10) << 12);
          v8 = qword_140C448A8;
          v1 = v7;
          if ( v7 < 0 )
          {
            v12 = *(_DWORD *)(qword_140C448A8 + 33272);
            if ( !v12 )
              v12 = 3576;
            *(_DWORD *)(qword_140C448A8 + 33272) = v12;
            v13 = *(_DWORD *)(v8 + 33276);
            if ( !v13 )
              v13 = 8;
            *(_DWORD *)(v8 + 33276) = v13;
            goto LABEL_22;
          }
          v9 = v11 + v10;
          StartingIndex = v9;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(qword_140C448A8 + 168), &LockHandle);
        }
        if ( *(_DWORD *)(qword_140C448A8 + 200) == 3 )
          goto LABEL_22;
        v2 = qword_140C448A8;
        v5 = *(_RTL_BITMAP **)&v5->SizeOfBitMap;
        v4 = qword_140C448A8 + 152;
      }
    }
    while ( !v3 );
  }
LABEL_22:
  if ( (_DWORD)v0 != *(_DWORD *)(qword_140C448A8 + 180) && *(int *)(qword_140C448A8 + 200) < 3 )
  {
    do
      _mm_pause();
    while ( *(int *)(qword_140C448A8 + 200) < 3 );
  }
  return v1;
}
