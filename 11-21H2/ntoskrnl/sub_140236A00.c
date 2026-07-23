/*
 * XREFs of sub_140236A00 @ 0x140236A00
 * Callers:
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140236C14 @ 0x140236C14 (sub_140236C14.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140236A00(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        __int64 SpinLock,
        unsigned __int8 *a6)
{
  int v8; // esi
  unsigned __int8 v9; // r12
  signed __int16 v10; // di
  __int16 v11; // r14
  __int16 v12; // bx
  unsigned __int16 v13; // bx
  bool v14; // zf
  signed __int16 v15; // ax
  unsigned int v16; // edx
  signed __int16 v18; // bx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v20; // ecx
  char *v21; // rbx
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  int v24; // r8d
  struct _KTHREAD *v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // [rsp+70h] [rbp+8h]
  char v31; // [rsp+88h] [rbp+20h]

  v31 = a4;
  v30 = a1;
  v8 = 0;
  v9 = 0;
LABEL_2:
  v10 = *a2;
  while ( 1 )
  {
    v11 = v10;
    if ( a3 > 0 )
    {
      if ( (v10 & 0x4000) != 0 )
      {
        _mm_pause();
        goto LABEL_2;
      }
      if ( (v10 & 0x7FF) != 0 )
        goto LABEL_6;
      if ( (a4 & 3) != 0 )
      {
        if ( (a4 & 2) != 0 )
        {
          v18 = v10;
          goto LABEL_27;
        }
      }
      else if ( (unsigned int)sub_140236C14(a1, 0LL, 1LL) )
      {
        v18 = v10;
LABEL_27:
        v12 = v18 | 0x4000;
        goto LABEL_7;
      }
LABEL_6:
      v12 = v10;
LABEL_7:
      a1 = v30;
LABEL_8:
      v13 = a3 + v12;
      goto LABEL_9;
    }
    if ( v10 >= 0 )
    {
      v16 = -1073741567;
      goto LABEL_15;
    }
    v12 = v10;
    if ( a3 + (v10 & 0x7FF) )
      goto LABEL_8;
    v13 = v10 | 0x4000;
LABEL_9:
    if ( (v13 & 0x4000) != 0 )
    {
      v8 = 1;
      v9 = sub_140365AF4(SpinLock, *(_DWORD *)(a1 + 40) & 1);
    }
    v15 = _InterlockedCompareExchange16(a2, v13, v10);
    v14 = v10 == v15;
    v10 = v15;
    if ( v14 )
      break;
    if ( v8 )
    {
      if ( (*(_DWORD *)(v30 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v28 = *((_QWORD *)CurrentPrcb + 4375);
              v29 = ~(unsigned __int16)(-1LL << (v9 + 1));
              v14 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
              *(_DWORD *)(v28 + 20) &= v29;
              if ( v14 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(SpinLock);
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned __int64)(SpinLock - qword_140C50630) >= 0x8000000000LL )
          v20 = -1;
        else
          v20 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
        _disable();
        v21 = (char *)CurrentThread + 1696;
        v22 = 0LL;
        v23 = SpinLock & 0x7FFFFFFFFFFFFFFCLL;
        while ( (*(_QWORD *)v21 & 0x7FFFFFFFFFFFFFFCLL) != v23
             || !v21[18]
             || (*(_DWORD *)v21 & 1) != 0
             || *((_DWORD *)v21 + 2) != v20 )
        {
          v22 = (unsigned int)(v22 + 1);
          v21 += 96;
          if ( (unsigned int)v22 >= 6 )
            goto LABEL_53;
        }
        v21[18] = 0;
        if ( v21 )
        {
          if ( *(__int64 *)v21 < 0 )
          {
            *v21 |= 2u;
            _enable();
            sub_14034EE30(v21, v22, v23);
            _disable();
          }
          v24 = *((_DWORD *)v21 + 22);
          *((_DWORD *)v21 + 22) = 0;
          v21[17] = 0;
          *(_QWORD *)v21 = 0LL;
          *((_BYTE *)CurrentThread + 792) |= 1 << v21[16];
          _enable();
          if ( v24 )
            sub_14022B568((ULONG_PTR)CurrentThread, SpinLock, v24);
          goto LABEL_55;
        }
LABEL_53:
        if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, SpinLock, v20, 0LL);
        _enable();
LABEL_55:
        v25 = KeGetCurrentThread();
        v14 = (*((_WORD *)v25 + 243))++ == 0xFFFF;
        if ( v14 && *((struct _KTHREAD **)v25 + 19) != (struct _KTHREAD *)((char *)v25 + 152) )
          KiCheckForKernelApcDelivery();
      }
      v8 = 0;
    }
    a1 = v30;
    a4 = v31;
  }
  if ( a3 <= 0 )
  {
    v16 = (v13 >> 13) & 2 | 0xC0000100;
  }
  else if ( v11 >= 0 )
  {
    v16 = ((v13 & 0x4000) != 0) - 1073741567;
  }
  else
  {
    v16 = -1073741568;
  }
LABEL_15:
  if ( v8 )
    *a6 = v9;
  return v16;
}
