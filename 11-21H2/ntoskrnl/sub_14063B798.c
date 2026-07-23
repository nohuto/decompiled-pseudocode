/*
 * XREFs of sub_14063B798 @ 0x14063B798
 * Callers:
 *     sub_14063BE80 @ 0x14063BE80 (sub_14063BE80.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14063B798()
{
  unsigned int v0; // esi
  __int64 v1; // rbx
  int v2; // r14d
  unsigned __int64 OldIrql; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v6; // r8
  int v7; // eax
  bool v8; // zf
  char *Pool2; // r14
  unsigned int v10; // r12d
  unsigned __int64 v11; // rbx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  __int64 v14; // r8
  int v15; // eax
  char i; // cl
  unsigned __int64 v17; // rcx
  char v18; // dl
  unsigned int v19; // edi
  __int64 v20; // r8
  __int64 v21; // r11
  _QWORD *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  KIRQL v25; // bl
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r8
  __int64 v28; // rdi
  int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 v32; // [rsp+70h] [rbp+30h]

  v0 = 0;
  v1 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
  if ( dword_140CE1E40 >= 2 * ((unsigned int)dword_140CE1E44 >> 5) )
  {
    v1 = 2 * ((unsigned int)dword_140CE1E44 >> 5);
    v2 = 1;
    if ( (unsigned int)v1 < 4 )
      v1 = 4LL;
  }
  else
  {
    v2 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v2 )
  {
    while ( 1 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, 8LL * (unsigned int)v1, 1819242320LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
      if ( dword_140CE1E40 < 2 * ((unsigned int)dword_140CE1E44 >> 5) )
        break;
      v10 = 2 * ((unsigned int)dword_140CE1E44 >> 5);
      if ( v10 < 4 )
        v10 = 4;
      if ( (unsigned int)v1 >= v10 )
      {
        if ( (((_DWORD)v1 - 1) & (unsigned int)v1) != 0 )
        {
          for ( i = -1; (_DWORD)v1; LODWORD(v1) = (unsigned int)v1 >> 1 )
            ++i;
          v1 = (unsigned int)(1 << i);
        }
        if ( (unsigned int)v1 > 0x4000000 )
          v1 = 0x4000000LL;
        v17 = (unsigned int)v1;
        if ( Pool2 > &Pool2[8 * v1] )
          v17 = 0LL;
        if ( v17 )
          memset64(Pool2, (unsigned __int64)&dword_140CE1E40 + 1, v17);
        v18 = dword_140CE1E44;
        v19 = 0;
        v20 = -1LL << (dword_140CE1E44 & 0x1F);
        if ( (dword_140CE1E44 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v21 = qword_140CE1E48;
            while ( 1 )
            {
              v22 = *(_QWORD **)(v21 + 8LL * v19);
              if ( ((unsigned __int8)v22 & 1) != 0 )
                break;
              *(_QWORD *)(v21 + 8LL * v19) = *v22;
              v32 = v20 & v22[1];
              v23 = (37
                   * (BYTE6(v32)
                    + 37
                    * (BYTE5(v32)
                     + 37
                     * (BYTE4(v32)
                      + 37
                      * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                   + HIBYTE(v32)) & (unsigned int)(v1 - 1);
              *v22 = *(_QWORD *)&Pool2[8 * v23];
              *(_QWORD *)&Pool2[8 * v23] = v22;
            }
            v18 = dword_140CE1E44;
            ++v19;
          }
          while ( v19 < (unsigned int)dword_140CE1E44 >> 5 );
        }
        v24 = qword_140CE1E48;
        qword_140CE1E48 = (__int64)Pool2;
        dword_140CE1E44 = (32 * v1) | v18 & 0x1F;
        Pool2 = (char *)v24;
        break;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v11 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v12 = KeGetCurrentIrql();
          if ( v12 <= 0xFu && LockHandle.OldIrql <= 0xFu && v12 >= 2u )
          {
            v13 = KeGetCurrentPrcb();
            v14 = *((_QWORD *)v13 + 4375);
            v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v8 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v15;
            if ( v8 )
              sub_140418E4C((__int64)v13);
          }
        }
      }
      __writecr8(v11);
      sub_140348B40((ULONG_PTR)Pool2);
      v1 = v10;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v25 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = *((_QWORD *)v27 + 4375);
          v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v8 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
          *(_DWORD *)(v28 + 20) &= v29;
          if ( v8 )
            sub_140418E4C((__int64)v27);
        }
      }
    }
    __writecr8(v25);
    if ( Pool2 )
      sub_140348B40((ULONG_PTR)Pool2);
  }
  return v0;
}
