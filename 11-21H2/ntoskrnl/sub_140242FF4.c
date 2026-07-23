/*
 * XREFs of sub_140242FF4 @ 0x140242FF4
 * Callers:
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int16 __fastcall sub_140242FF4(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        __int64 SpinLock,
        unsigned __int8 a6)
{
  __int64 v6; // rax
  __int16 v9; // bx
  signed __int16 v10; // cx
  __int16 v11; // tt
  __int16 v12; // dx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v14; // ecx
  char *v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  int v18; // r8d
  struct _KTHREAD *v19; // rcx
  bool v20; // zf
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // edx

  LOWORD(v6) = *a2;
  while ( 1 )
  {
    v9 = v6;
    v10 = v6;
    if ( (v6 & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v12 = 0x8000;
      else
        v12 = 0;
      v10 = v12 | v6 & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v10 += a3;
    }
    else if ( !a4 )
    {
      v10 -= a3;
    }
    if ( v10 == (_WORD)v6 )
      return v6;
    v11 = v6;
    LOWORD(v6) = _InterlockedCompareExchange16(a2, v10, v6);
    if ( v11 == (_WORD)v6 )
    {
      if ( (v9 & 0x4000) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
          LOWORD(v6) = dword_140D06B08;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              LOWORD(v6) = KeGetCurrentIrql();
              if ( (unsigned __int8)v6 <= 0xFu && a6 <= 0xFu && (unsigned __int8)v6 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v6 = -1LL << (a6 + 1);
                v22 = *((_QWORD *)CurrentPrcb + 4375);
                v23 = ~(unsigned __int16)v6;
                v20 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
                *(_DWORD *)(v22 + 20) &= v23;
                if ( v20 )
                  LOWORD(v6) = sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(a6);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(SpinLock);
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned __int64)(SpinLock - qword_140C50630) >= 0x8000000000LL )
            v14 = -1;
          else
            v14 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
          _disable();
          v15 = (char *)CurrentThread + 1696;
          v16 = 0LL;
          v17 = SpinLock & 0x7FFFFFFFFFFFFFFCLL;
          while ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) != v17
               || !v15[18]
               || (*(_DWORD *)v15 & 1) != 0
               || *((_DWORD *)v15 + 2) != v14 )
          {
            v16 = (unsigned int)(v16 + 1);
            v15 += 96;
            if ( (unsigned int)v16 >= 6 )
              goto LABEL_35;
          }
          v15[18] = 0;
          if ( v15 )
          {
            if ( *(__int64 *)v15 < 0 )
            {
              *v15 |= 2u;
              _enable();
              sub_14034EE30(v15, v16, v17);
              _disable();
            }
            v18 = *((_DWORD *)v15 + 22);
            *((_DWORD *)v15 + 22) = 0;
            v15[17] = 0;
            *(_QWORD *)v15 = 0LL;
            LOWORD(v6) = (unsigned __int8)v15[16];
            *((_BYTE *)CurrentThread + 792) |= 1 << v6;
            _enable();
            if ( v18 )
              LOWORD(v6) = sub_14022B568((ULONG_PTR)CurrentThread, SpinLock, v18);
            goto LABEL_38;
          }
LABEL_35:
          LODWORD(v6) = *((_DWORD *)CurrentThread + 30);
          if ( (v6 & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, SpinLock, v14, 0LL);
          _enable();
LABEL_38:
          v19 = KeGetCurrentThread();
          v20 = (*((_WORD *)v19 + 243))++ == 0xFFFF;
          if ( v20 )
          {
            v6 = (__int64)v19 + 152;
            if ( *(_QWORD *)v6 != v6 )
              LOWORD(v6) = KiCheckForKernelApcDelivery();
          }
        }
      }
      return v6;
    }
  }
}
