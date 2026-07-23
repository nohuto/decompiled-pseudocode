/*
 * XREFs of sub_1407AC250 @ 0x1407AC250
 * Callers:
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x1406E1310 (PsChargeProcessWakeCounter.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1409AD954 @ 0x1409AD954 (sub_1409AD954.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1406C9B74 @ 0x1406C9B74 (sub_1406C9B74.c)
 *     sub_140700280 @ 0x140700280 (sub_140700280.c)
 *     sub_1409E2D4C @ 0x1409E2D4C (sub_1409E2D4C.c)
 *     sub_1409E2E08 @ 0x1409E2E08 (sub_1409E2E08.c)
 */

__int64 __fastcall sub_1407AC250(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5, char a6, int *a7)
{
  int v8; // r13d
  int v9; // edi
  char v10; // r12
  bool v11; // r14
  __int64 v12; // rdx
  bool v13; // si
  char v14; // r8
  int v15; // ecx
  __int64 v16; // r10
  int v17; // ecx
  signed int v18; // r11d
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // r9d
  int v22; // ebp
  char v23; // r13
  int v24; // r15d
  char v25; // al
  volatile signed __int32 *v26; // rcx
  int v27; // ecx
  int v28; // edx
  int v29; // r15d
  __int64 v30; // r14
  int v31; // edi
  unsigned int v33; // [rsp+40h] [rbp-68h]
  int v34; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  char v37; // [rsp+B0h] [rbp+8h]

  v37 = 0;
  v33 = a3;
  v8 = a2 & 2;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  LOBYTE(v34) = 1;
  v10 = 0;
  v11 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  v12 = *(_QWORD *)(a1 + 1296);
  v13 = v8 != 0;
  v14 = a6;
  Object = (PVOID)v12;
  if ( !v12 || (v15 = *(_DWORD *)(v12 + 1512), (v15 & 0x1000) == 0) )
  {
    v18 = a3;
    v25 = 0;
    goto LABEL_31;
  }
  v16 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( a6 )
  {
    if ( v8 && (v15 & 0x800000) != 0 && a5 > 0 )
      goto LABEL_16;
    v17 = a2;
    v18 = a3;
    if ( (a2 & 1) == 0 || !*(_QWORD *)(v16 + 1296) )
      goto LABEL_26;
    if ( *(_QWORD *)(*(_QWORD *)(v16 + 1296) + 1272LL) == *(_QWORD *)(v12 + 1272) )
    {
      v19 = *(_QWORD *)(a1 + 1296);
      while ( 1 )
      {
        if ( (unsigned int)sub_1406C9B74(v16, v12) == 292 && (v21 & *(_DWORD *)(v20 + 1144)) != 0 )
        {
          v13 = v8 != 0;
          goto LABEL_16;
        }
        if ( v20 == *(_QWORD *)(v19 + 1272) )
          break;
        v12 = *(_QWORD *)(v20 + 1264);
      }
      v14 = a6;
    }
  }
  else
  {
    v18 = a3;
  }
  v17 = a2;
LABEL_26:
  if ( (*(_DWORD *)(v16 + 1120) & 0x40) != 0 || !v8 )
  {
    v25 = 1;
    v13 = 0;
    v37 = 1;
  }
  else
  {
    v33 = 7;
    v13 = v8 != 0;
    v34 = ((v17 >> 31) & 2) + 5;
    v25 = 1;
    v37 = 1;
  }
LABEL_31:
  if ( v14 && !v25 && !*(_QWORD *)(a1 + 2464) )
  {
LABEL_16:
    v22 = a5;
    v23 = 0;
    goto LABEL_17;
  }
  if ( v13 )
  {
    v26 = (volatile signed __int32 *)(a1 + 2508);
    v33 = 7;
  }
  else
  {
    v26 = (volatile signed __int32 *)(a1 + 4 * (v18 + 618LL));
  }
  v22 = a5;
  v27 = _InterlockedExchangeAdd(v26, a5) + a5;
  v23 = 1;
  v28 = v27 & 0x7FFFFFFF;
  v11 = v27 < 0;
  if ( v27 >= 0 )
    v28 = v27;
  v9 = v28;
  if ( !v13 && *(_QWORD *)(a1 + 2464) )
  {
    v29 = 1 << v18;
    if ( a5 <= 0 )
    {
      if ( (v29 & *(_DWORD *)(a1 + 2504)) != 0 && !v28 )
        v10 = 1;
    }
    else if ( (v29 & *(_DWORD *)(a1 + 2500)) != 0 && v28 == 1 )
    {
      v10 = 1;
    }
  }
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1080));
  sub_1402AFC00(a1 + 1080);
  sub_1402AC800((__int64)CurrentThread);
  if ( v10 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(a1 + 2464), 0LL, 0, 0LL, 0LL, 0, 0);
    v24 = a3;
    if ( (xmmword_140D06910 & 0x400) != 0 && v9 == 1 )
      sub_1409E2E08(a1, a3);
  }
  else
  {
    v24 = a3;
  }
  if ( a7 )
    *a7 = v9;
  if ( v11 || v37 )
  {
    v30 = a4;
    v31 = v22;
    sub_140700280((__int64)Object, 0LL, v24, v22, v34, a1, a4);
  }
  else
  {
    v30 = a4;
    v31 = v22;
  }
  if ( v23 )
  {
    if ( (xmmword_140D06910 & 0x2000) != 0 && !v13 )
      sub_1409E2D4C(a1, v24, v31, a1, v30);
    if ( a6 )
    {
      if ( v22 > 0 )
      {
        ObfReferenceObjectWithTag((PVOID)a1, 0x6B577350u);
        return a1 | v33;
      }
      ObDereferenceObjectDeferDeleteWithTag((PVOID)a1, 0x6B577350u);
    }
  }
  return 0LL;
}
