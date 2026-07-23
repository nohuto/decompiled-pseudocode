/*
 * XREFs of sub_14063AC94 @ 0x14063AC94
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14063AC94(void *Src, size_t Size, void *a3, size_t a4, KPROCESSOR_MODE PreviousMode)
{
  _DWORD *v9; // rdi
  int v10; // ebx
  _DWORD *Pool2; // rax
  int v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // kr00_8
  size_t v15; // rax
  __int64 i; // r10
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // r8
  __int64 v23; // r11
  KIRQL OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v27; // r8
  int v28; // eax
  bool v29; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(stru_140D3CAF0, PreviousMode) )
  {
    v10 = -1073741727;
    goto LABEL_40;
  }
  if ( Size < 0x38 )
    goto LABEL_5;
  if ( Size > a4 )
    goto LABEL_7;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, Size, 1819242320LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Src, Size);
    if ( *v9 != 1 || (v12 = v9[1]) == 0 )
    {
LABEL_7:
      v10 = -1073741811;
      goto LABEL_40;
    }
    v14 = (unsigned int)(v12 - 1);
    v13 = 48 * v14;
    if ( is_mul_ok(v14, 0x30uLL) )
    {
      v10 = 0;
    }
    else
    {
      v13 = -1LL;
      v10 = -1073741675;
    }
    if ( v10 < 0 )
      goto LABEL_40;
    v15 = v13 + 56;
    if ( v15 >= 0x38 )
    {
      if ( v15 > Size )
      {
LABEL_5:
        v10 = -1073741820;
        goto LABEL_40;
      }
      KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
      for ( i = 0LL; (unsigned int)i < v9[1]; i = (unsigned int)(i + 1) )
      {
        v17 = 12 * i;
        v18 = (unsigned int)v9[12 * i + 2] & (unsigned __int64)(-1LL << (dword_140CE1E44 & 0x1F));
        if ( !((unsigned int)dword_140CE1E44 >> 5) )
          goto LABEL_27;
        v19 = qword_140CE1E48
            + 8LL
            * ((37
              * (BYTE6(v18)
               + 37
               * (BYTE5(v18)
                + 37
                * (BYTE4(v18)
                 + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
              + HIBYTE(v18)) & (((unsigned int)dword_140CE1E44 >> 5) - 1));
        while ( 1 )
        {
          v19 = *(_QWORD *)v19;
          if ( (v19 & 1) != 0 )
            break;
          if ( v18 == ((-1LL << (dword_140CE1E44 & 0x1F)) & *(_QWORD *)(v19 + 8)) )
            goto LABEL_26;
        }
        v19 = 0LL;
LABEL_26:
        if ( v19 )
        {
          v21 = &v9[v17 + 6];
          v22 = (_QWORD *)(v19 + 24);
          v23 = 2LL;
          do
          {
            *(v21 - 1) = *(v22 - 1);
            *v21 = *v22;
            v22 += 3;
            v21 += 2;
            --v23;
          }
          while ( v23 );
          v20 = *(_QWORD *)(v19 + 64);
        }
        else
        {
LABEL_27:
          v20 = 0LL;
          *(_OWORD *)&v9[v17 + 4] = 0LL;
          *(_OWORD *)&v9[v17 + 8] = 0LL;
        }
        *(_QWORD *)&v9[v17 + 12] = v20;
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
            v27 = *((_QWORD *)CurrentPrcb + 4375);
            v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
            *(_DWORD *)(v27 + 20) &= v28;
            if ( v29 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      memmove(a3, v9, Size);
      v10 = 0;
    }
    else
    {
      v10 = -1073741675;
    }
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_40:
  if ( v9 )
    sub_140348B40((ULONG_PTR)v9);
  return (unsigned int)v10;
}
