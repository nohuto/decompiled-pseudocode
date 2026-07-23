/*
 * XREFs of sub_1409B35D0 @ 0x1409B35D0
 * Callers:
 *     sub_14042A6B0 @ 0x14042A6B0 (sub_14042A6B0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwTerminateProcess @ 0x14041BCE0 (ZwTerminateProcess.c)
 *     sub_14045ECB0 @ 0x14045ECB0 (sub_14045ECB0.c)
 *     sub_14045F202 @ 0x14045F202 (sub_14045F202.c)
 *     sub_14045F318 @ 0x14045F318 (sub_14045F318.c)
 *     sub_14088151A @ 0x14088151A (sub_14088151A.c)
 *     sub_140882604 @ 0x140882604 (sub_140882604.c)
 *     sub_1408826B4 @ 0x1408826B4 (sub_1408826B4.c)
 *     sub_1408826D2 @ 0x1408826D2 (sub_1408826D2.c)
 *     sub_14097AC7C @ 0x14097AC7C (sub_14097AC7C.c)
 *     sub_1409B47DC @ 0x1409B47DC (sub_1409B47DC.c)
 *     sub_1409B4870 @ 0x1409B4870 (sub_1409B4870.c)
 *     sub_1409B48CC @ 0x1409B48CC (sub_1409B48CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409B35D0(unsigned __int64 a1, __int64 a2, NTSTATUS a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r13
  char *v10; // r14
  int v11; // r13d
  __int64 v12; // rax
  bool v13; // zf
  volatile signed __int64 *v14; // r12
  __int64 v15; // rsi
  int v16; // eax
  PVOID v17; // rcx
  int v18; // eax
  _DWORD *v19; // rsi
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // r14
  bool v25; // r8
  _QWORD *v26; // rax
  _BYTE v27[8]; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v28; // [rsp+58h] [rbp-A0h] BYREF
  int v29; // [rsp+60h] [rbp-98h] BYREF
  __int64 v30; // [rsp+68h] [rbp-90h] BYREF
  int v31; // [rsp+70h] [rbp-88h]
  PVOID P; // [rsp+78h] [rbp-80h] BYREF
  __int64 v33; // [rsp+80h] [rbp-78h] BYREF
  __int64 v34; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 *v35; // [rsp+90h] [rbp-68h]
  __int64 v36; // [rsp+98h] [rbp-60h]
  __int64 v37; // [rsp+A0h] [rbp-58h]
  _QWORD v38[10]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+100h] [rbp+8h] BYREF
  __int64 v40; // [rsp+108h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+110h] [rbp+18h] BYREF
  __int64 *v42; // [rsp+118h] [rbp+20h]

  v42 = a4;
  ExitStatus = a3;
  v40 = a2;
  v39 = a1;
  v30 = 0LL;
  v28 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v27[0] = 0;
  v38[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v38[1] = CurrentThread;
  v37 = 0LL;
  if ( *((_BYTE *)CurrentThread + 562) != 1 )
    return 3221225711LL;
  if ( v39 )
  {
    if ( a2 )
      return 3221225712LL;
  }
  else if ( a2 )
  {
    goto LABEL_9;
  }
  if ( (ExitStatus & 0xFFFFFFFE) != 0 )
    return 3221225713LL;
LABEL_9:
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v7 = (__int64)a4;
  *(_QWORD *)v7 = *(_QWORD *)v7;
  v30 = *a4;
  v8 = *((_QWORD *)CurrentThread + 23);
  if ( a2 )
  {
    result = sub_1408826D2(v8, a2, (__int64 *)&v28);
    v9 = v39;
  }
  else
  {
    v9 = v39;
    result = sub_14097AC7C(v8, v39, &v28);
  }
  if ( (int)result < 0 )
    return result;
  v10 = (char *)v28;
  if ( !*((_DWORD *)v28 + 10) )
  {
    v11 = -1073741816;
    goto LABEL_100;
  }
  if ( *((_BYTE *)v28 + 76) )
  {
    --*((_WORD *)CurrentThread + 242);
    v14 = (volatile signed __int64 *)(v10 + 112);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    v35 = (unsigned __int64 *)(v10 + 104);
    v15 = *((_QWORD *)v10 + 13);
    while ( v15 )
    {
      v21 = sub_1408826B4(v9, v15);
      if ( v21 >= 0 )
      {
        if ( v21 <= 0 )
          break;
        v15 = *(_QWORD *)(v15 + 8);
      }
      else
      {
        v15 = *(_QWORD *)v15;
      }
    }
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    sub_1402AFC00((ULONG_PTR)(v10 + 112));
    sub_1402F9540((__int64)CurrentThread);
    if ( !v15 )
    {
      v11 = -1073741800;
      goto LABEL_99;
    }
    v36 = v15;
    goto LABEL_64;
  }
  v12 = sub_14045ECB0((__int64)CurrentThread, 0LL);
  v37 = v12;
  --*((_WORD *)CurrentThread + 243);
  v11 = sub_14045F318(
          v12,
          (__int64)a4,
          qword_140D071D8,
          qword_140D071E8,
          (*((_DWORD *)CurrentThread + 29) & 0x100000) != 0,
          &v34,
          &v33);
  v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v11 < 0 )
    goto LABEL_100;
  --*((_WORD *)CurrentThread + 242);
  v14 = (volatile signed __int64 *)(v10 + 112);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
  v35 = (unsigned __int64 *)(v10 + 104);
  v15 = *((_QWORD *)v10 + 13);
  while ( v15 )
  {
    v16 = sub_1408826B4((unsigned __int64)CurrentThread, v15);
    if ( v16 >= 0 )
    {
      if ( v16 <= 0 )
        break;
      v15 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      v15 = *(_QWORD *)v15;
    }
  }
  if ( !v15 )
  {
    v17 = 0LL;
    P = 0LL;
    if ( v40 )
    {
      v11 = -1073741584;
    }
    else
    {
      v18 = *((_DWORD *)v10 + 18);
      if ( v18 )
      {
        *((_DWORD *)v10 + 18) = v18 - 1;
        v11 = 0;
      }
      else
      {
        v11 = sub_1409B47DC(v10, &P);
        v17 = P;
      }
      if ( v11 >= 0 && !v17 )
      {
LABEL_48:
        v15 = *((_QWORD *)v10 + 16);
        *((_QWORD *)v10 + 16) = *(_QWORD *)v15;
        *(_QWORD *)(v15 + 24) = CurrentThread;
        *(_QWORD *)(v15 + 32) = 0LL;
        goto LABEL_49;
      }
    }
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    sub_1402AFC00((ULONG_PTR)(v10 + 112));
    sub_1402F9540((__int64)CurrentThread);
    if ( v11 < 0 )
    {
LABEL_99:
      v10 = (char *)v28;
      goto LABEL_100;
    }
    v19 = P;
    v20 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)v38 & -(__int64)((ExitStatus & 1) != 0)));
    v10 = (char *)v28;
    if ( v20 )
      v11 = sub_1409B48CC(v28, v19, v20);
    else
      v11 = v19[10];
    ExFreePoolWithTag(v19, 0);
    if ( v11 )
    {
      if ( v11 != 192 && v11 != -1073740526 && (unsigned int)(v11 - 257) > 1 )
        v11 = -1073741749;
      goto LABEL_100;
    }
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
    goto LABEL_48;
  }
LABEL_49:
  v36 = v15;
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  sub_1402AFC00((ULONG_PTR)v14);
  sub_1402F9540((__int64)CurrentThread);
  if ( *(_DWORD *)(v15 + 36) == -1 )
  {
    v11 = -1073741670;
    goto LABEL_99;
  }
LABEL_64:
  --*((_WORD *)CurrentThread + 243);
  *((_DWORD *)CurrentThread + 345) |= 0x200u;
  v29 = *(_DWORD *)(v15 + 32);
  v10 = (char *)v28;
  v11 = sub_14088151A((__int64)v28, &v29, &v39, ExitStatus, &v30, &v34, &v33, &ExitStatus, v27);
  v31 = v11;
  *((_DWORD *)CurrentThread + 345) &= ~0x200u;
  v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v27[0] )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  if ( v11 < 0 )
  {
    if ( !v40 )
      goto LABEL_94;
    v39 = 0LL;
  }
  v22 = v39;
  if ( !v39 )
  {
    *v42 = v30;
    if ( v40 )
    {
      v13 = (*(_DWORD *)(v15 + 36))-- == 1;
      if ( v13 )
      {
        --*((_WORD *)CurrentThread + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
        RtlAvlRemoveNode((unsigned __int64 *)v10 + 13, (unsigned __int64 *)v15);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10 + 112);
        sub_1402AFC00((ULONG_PTR)(v10 + 112));
        sub_1402F9540((__int64)CurrentThread);
        v10 = (char *)v28;
      }
    }
    goto LABEL_94;
  }
  --*((_WORD *)CurrentThread + 243);
  v11 = sub_14045F202(
          v37,
          qword_140D071E0,
          qword_140D071E8,
          *((_QWORD *)v10 + 1),
          v22,
          ExitStatus,
          v34,
          v33,
          v30,
          (*((_DWORD *)CurrentThread + 29) & 0x100000) != 0);
  v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v40 )
    goto LABEL_94;
  v23 = *(_DWORD *)(v15 + 36);
  if ( v23 )
    goto LABEL_88;
  *(_DWORD *)(v15 + 32) = v29;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
  v24 = (_QWORD *)*v35;
  v25 = 0;
  if ( !*v35 )
    goto LABEL_85;
  while ( (int)sub_1408826B4((unsigned __int64)CurrentThread, (__int64)v24) >= 0 )
  {
    v26 = (_QWORD *)v24[1];
    if ( !v26 )
    {
      v25 = 1;
      goto LABEL_85;
    }
LABEL_83:
    v24 = v26;
  }
  v26 = (_QWORD *)*v24;
  if ( *v24 )
    goto LABEL_83;
  v25 = 0;
LABEL_85:
  RtlAvlInsertNodeEx(v35, (unsigned __int64)v24, v25, (_QWORD *)v15);
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  sub_1402AFC00((ULONG_PTR)v14);
  sub_1402F9540((__int64)CurrentThread);
  v23 = *(_DWORD *)(v15 + 36);
  v10 = (char *)v28;
LABEL_88:
  *(_DWORD *)(v15 + 36) = v23 + 1;
LABEL_94:
  if ( !v10[76] && !*(_DWORD *)(v15 + 36) )
  {
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    *(_QWORD *)v15 = *((_QWORD *)v10 + 16);
    *((_QWORD *)v10 + 16) = v15;
    sub_1409B4870(v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    sub_1402AFC00((ULONG_PTR)(v10 + 112));
    sub_1402F9540((__int64)CurrentThread);
    goto LABEL_99;
  }
LABEL_100:
  sub_140882604(v10);
  return (unsigned int)v11;
}
