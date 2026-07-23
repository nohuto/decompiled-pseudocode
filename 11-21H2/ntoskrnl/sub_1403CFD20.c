/*
 * XREFs of sub_1403CFD20 @ 0x1403CFD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025B8B0 @ 0x14025B8B0 (sub_14025B8B0.c)
 *     sub_14025D7D0 @ 0x14025D7D0 (sub_14025D7D0.c)
 *     sub_14025F1A4 @ 0x14025F1A4 (sub_14025F1A4.c)
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 *     sub_140266C0C @ 0x140266C0C (sub_140266C0C.c)
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14059C6B4 @ 0x14059C6B4 (sub_14059C6B4.c)
 */

LONG __fastcall sub_1403CFD20(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v3; // r13d
  struct _KEVENT *v4; // r15
  struct _KEVENT *v5; // rsi
  struct _KEVENT *v6; // rbp
  NTSTATUS v7; // eax
  __int64 *v8; // r14
  bool v9; // zf
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebp
  int v14; // ecx
  __int64 v15; // rsi
  _QWORD *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r10
  char v21; // al
  unsigned int v22; // r9d
  __int64 i; // rax
  _QWORD *v24; // rcx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 *v27; // r15
  __int64 v28; // r12
  __int64 v29; // rsi
  KIRQL v30; // al
  char v31; // dl
  unsigned __int64 v32; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v35; // r9
  int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rsi
  __int64 v39; // r15
  __int64 v40; // rax
  unsigned int v41; // ebp
  _QWORD *v42; // r14
  signed __int32 v44[8]; // [rsp+0h] [rbp-228h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-1E8h]
  __int64 v46; // [rsp+48h] [rbp-1E0h]
  struct _KTHREAD *v47; // [rsp+50h] [rbp-1D8h]
  PVOID Object[3]; // [rsp+58h] [rbp-1D0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+70h] [rbp-1B8h] BYREF
  PVOID v50[6]; // [rsp+D0h] [rbp-158h] BYREF
  struct _KWAIT_BLOCK v51; // [rsp+100h] [rbp-128h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 968) = CurrentThread;
  v47 = CurrentThread;
  *((_DWORD *)CurrentThread + 345) |= 2u;
  v45 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 0x12u);
  v50[2] = (PVOID)(a1 + 944);
  v3 = 0;
  Object[0] = (PVOID)(a1 + 104);
  v50[0] = (PVOID)(a1 + 104);
  v4 = (struct _KEVENT *)(a1 + 904);
  Object[1] = (PVOID)(a1 + 760);
  v5 = (struct _KEVENT *)(a1 + 720);
  v50[1] = (PVOID)(a1 + 904);
  v6 = (struct _KEVENT *)(a1 + 1032);
  v50[3] = (PVOID)(a1 + 720);
  v50[4] = (PVOID)(a1 + 1032);
LABEL_2:
  *(_QWORD *)(a1 + 864) = 0LL;
  *(_DWORD *)(a1 + 872) = 0;
  *(_BYTE *)(a1 + 698) = 0;
  sub_14025D7D0(a1);
  v7 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
  *(_BYTE *)(a1 + 698) = 1;
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 108) )
          goto LABEL_86;
        if ( !*(_QWORD *)(a1 + 17504) )
          goto LABEL_2;
        --*((_WORD *)CurrentThread + 243);
        sub_14025D7D0(a1);
        v8 = (__int64 *)(a1 + 928);
        if ( (__int64 *)*v8 == v8 )
        {
          *(_BYTE *)(a1 + 697) = 1;
          v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
          if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
            KiCheckForKernelApcDelivery();
          if ( !KeWaitForMultipleObjects(5u, v50, WaitAny, WrPageOut, 0, 0, 0LL, &v51) )
            goto LABEL_86;
          --*((_WORD *)CurrentThread + 243);
          *(_BYTE *)(a1 + 697) = 0;
        }
        if ( *(_DWORD *)(a1 + 724) )
        {
          KeResetEvent(v5);
          if ( *(_DWORD *)(a1 + 716) )
            sub_140280754((KSPIN_LOCK *)CurrentThread, 2, 0);
        }
        if ( *(_DWORD *)(a1 + 908) )
        {
          KeResetEvent(v4);
          _InterlockedOr(v44, 0);
          v18 = *(_DWORD *)(a1 + 16728);
          if ( v18 )
          {
            v19 = a1 + 16736;
            v20 = v18;
            do
            {
              v21 = *(_BYTE *)(*(_QWORD *)v19 + 206LL);
              if ( (v21 & 1) != 0 )
              {
                v22 = 0;
                *(_BYTE *)(*(_QWORD *)v19 + 206LL) = v21 & 0xFE;
                for ( i = *(_QWORD *)v19; v22 < *(_DWORD *)(*(_QWORD *)v19 + 72LL); ++v22 )
                {
                  v24 = *(_QWORD **)(*(_QWORD *)(i + 64) + 8LL * v22);
                  if ( v24 && *v24 == 2575857425LL )
                    sub_14025B8B0(v24);
                  i = *(_QWORD *)v19;
                }
              }
              v19 += 8LL;
              --v20;
            }
            while ( v20 );
          }
        }
        if ( *(_DWORD *)(a1 + 1036) )
        {
          KeResetEvent(v6);
          sub_1402664E8(a1);
        }
        v10 = 0LL;
        v11 = *(_QWORD *)(a1 + 17504);
        if ( *(__int64 *)(a1 + 16960) >= 0 )
          v10 = *(_QWORD *)(a1 + 16960);
        if ( *(_QWORD *)(a1 + 856) < 0x800uLL && (v11 > *(_QWORD *)(a1 + 16720) >> 2 || v11 > v10 >> 2) )
        {
          v25 = *(_DWORD *)(a1 + 872);
          if ( v25 >= 0x40 && *(_DWORD *)(a1 + 864) / v25 < (unsigned int)dword_140D051CC >> 3 )
          {
            v26 = *(_DWORD *)(a1 + 16728);
            LOBYTE(v3) = *(_QWORD *)(a1 + 3584) > 3 * (v11 >> 2);
            if ( v26 )
            {
              v27 = (__int64 *)(a1 + 16736);
              v28 = v26;
              do
              {
                v29 = *v27;
                if ( (*(_WORD *)(*v27 + 204) & 0x60) == 0 )
                {
                  if ( v3 )
                  {
                    v30 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v29 + 232));
                    v31 = *(_BYTE *)(v29 + 207);
                    v32 = v30;
                    if ( (v31 & 1) == 0 )
                    {
                      *(_BYTE *)(v29 + 207) = v31 | 1;
                      sub_14025F1A4(v29);
                      *(_DWORD *)(v29 + 124) = dword_140D051CC;
                    }
                    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v29 + 232));
                    if ( dword_140D06B08 )
                    {
                      if ( (dword_140D06B08 & 1) != 0 )
                      {
                        CurrentIrql = KeGetCurrentIrql();
                        if ( CurrentIrql <= 0xFu && (unsigned __int8)v32 <= 0xFu && CurrentIrql >= 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          v35 = *((_QWORD *)CurrentPrcb + 4375);
                          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
                          v9 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
                          *(_DWORD *)(v35 + 20) &= v36;
                          if ( v9 )
                            sub_140418E4C(CurrentPrcb);
                        }
                      }
                    }
                    __writecr8(v32);
                  }
                  sub_14059C6B4(v29, 0LL);
                }
                ++v27;
                --v28;
              }
              while ( v28 );
              CurrentThread = v47;
              v8 = (__int64 *)(a1 + 928);
              v5 = (struct _KEVENT *)(a1 + 720);
              v4 = (struct _KEVENT *)(a1 + 904);
            }
            ++*(_DWORD *)(a1 + 880);
            if ( v3 )
            {
              *(_QWORD *)(a1 + 888) = sub_1402F5718();
              v3 = 0;
              _InterlockedOr(v44, 0);
              *(_WORD *)(a1 + 900) |= 1u;
              ++*(_DWORD *)(a1 + 876);
            }
            else
            {
              v3 = 0;
            }
            *(_DWORD *)(a1 + 872) = 0;
            *(_QWORD *)(a1 + 864) = 0LL;
          }
        }
        if ( (__int64 *)*v8 == v8 )
          break;
        v12 = *(_DWORD *)(a1 + 1168);
        if ( (v12 & 1) != 0
          && (v12 & 0xFFFFFFFE) == 0
          && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1168), 0, 1) == 1 )
        {
          v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
          if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
            KiCheckForKernelApcDelivery();
          KeResetEvent((PRKEVENT)(a1 + 760));
          v6 = (struct _KEVENT *)(a1 + 1032);
          goto LABEL_2;
        }
        if ( sub_140266C0C(a1) )
        {
          if ( *(_QWORD *)(a1 + 17504) < *(_QWORD *)(a1 + 752) )
          {
            v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
            v6 = (struct _KEVENT *)(a1 + 1032);
            if ( v9 )
            {
              v6 = (struct _KEVENT *)(a1 + 1032);
              if ( *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
              {
                KiCheckForKernelApcDelivery();
                v6 = (struct _KEVENT *)(a1 + 1032);
              }
            }
            goto LABEL_2;
          }
          *(_DWORD *)(a1 + 744) = 4;
          v13 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 4u);
          v14 = 0;
        }
        else
        {
          if ( *(_DWORD *)(a1 + 716) )
            sub_140280754((KSPIN_LOCK *)CurrentThread, 2, 0);
          v13 = -1;
          v14 = 8;
        }
        v15 = *v8;
        v16 = *(_QWORD **)*v8;
        if ( *(__int64 **)(*v8 + 8) != v8 || v16[1] != v15 )
          __fastfail(3u);
        *v8 = (__int64)v16;
        v16[1] = v8;
        v17 = *(_DWORD *)(v15 + 40) & 0xFFFFFFE3;
        *(_QWORD *)v15 = 97LL;
        *(_DWORD *)(v15 + 40) = v14 | v17;
        v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
        *(_QWORD *)(v15 + 200) = v15 + 208;
        sub_14037AFC0(v15);
        v5 = (struct _KEVENT *)(a1 + 720);
        if ( v13 != -1 )
        {
          if ( KeQueryPriorityThread(CurrentThread) != 18 )
            KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v13);
          *(_DWORD *)(a1 + 744) = 18;
          v5 = (struct _KEVENT *)(a1 + 720);
        }
LABEL_30:
        v6 = (struct _KEVENT *)(a1 + 1032);
      }
      v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      v6 = (struct _KEVENT *)(a1 + 1032);
      if ( v9 )
      {
        v6 = (struct _KEVENT *)(a1 + 1032);
        if ( *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        {
          KiCheckForKernelApcDelivery();
          goto LABEL_30;
        }
      }
    }
  }
LABEL_86:
  if ( *(_DWORD *)(a1 + 716) )
    sub_140280754((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 976));
  v37 = *(_DWORD *)(a1 + 16728);
  if ( v37 )
  {
    v38 = a1 + 16736;
    v46 = *(unsigned int *)(a1 + 16728);
    v39 = v37;
    do
    {
      if ( *(_QWORD *)v38 )
      {
        --*((_WORD *)CurrentThread + 243);
        v40 = *(_QWORD *)v38;
        v41 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v38 + 72LL) )
        {
          do
          {
            v42 = *(_QWORD **)(*(_QWORD *)(v40 + 64) + 8LL * v41);
            if ( v42 )
            {
              while ( *v42 == 97LL )
              {
                *(_BYTE *)(a1 + 697) = 1;
                v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
                if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
                  KiCheckForKernelApcDelivery();
                KeWaitForSingleObject((PVOID)(a1 + 944), WrPageOut, 0, 0, 0LL);
                --*((_WORD *)CurrentThread + 243);
              }
            }
            v40 = *(_QWORD *)v38;
            ++v41;
          }
          while ( v41 < *(_DWORD *)(*(_QWORD *)v38 + 72LL) );
          v39 = v46;
        }
        v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
      }
      v38 += 8LL;
      v46 = --v39;
    }
    while ( v39 );
  }
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v45);
  return KeSetEvent((PRKEVENT)(a1 + 784), 0, 0);
}
