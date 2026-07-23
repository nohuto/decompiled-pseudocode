/*
 * XREFs of EtwTelemetryCoverageReport @ 0x14024F470
 * Callers:
 *     sub_1406310E4 @ 0x1406310E4 (sub_1406310E4.c)
 *     PsSetProcessFaultInformation @ 0x1406D40C0 (PsSetProcessFaultInformation.c)
 *     sub_14081B500 @ 0x14081B500 (sub_14081B500.c)
 *     sub_14085A124 @ 0x14085A124 (sub_14085A124.c)
 *     sub_140861D70 @ 0x140861D70 (sub_140861D70.c)
 *     sub_1409E52D0 @ 0x1409E52D0 (sub_1409E52D0.c)
 *     sub_1409E54B0 @ 0x1409E54B0 (sub_1409E54B0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_14024F59C @ 0x14024F59C (sub_14024F59C.c)
 *     sub_14024F6A4 @ 0x14024F6A4 (sub_14024F6A4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406D45B4 @ 0x1406D45B4 (sub_1406D45B4.c)
 *     sub_14085A124 @ 0x14085A124 (sub_14085A124.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwTelemetryCoverageReport(__int64 *a1)
{
  int v1; // r13d
  int v2; // r12d
  _QWORD *v4; // rsi
  BOOL v5; // r14d
  __int64 v6; // r15
  __int64 v7; // rbx
  int v8; // ebx
  __int64 v10; // r8
  unsigned int v11; // r13d
  KIRQL v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  int v17; // eax
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v23; // eax
  _QWORD *Pool2; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // r8
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  __int64 v31; // r9
  int v32; // eax
  int v33; // r9d
  __int64 v34; // rdx
  int v35; // eax
  int v36; // r9d
  unsigned int v37; // [rsp+38h] [rbp-99h] BYREF
  int v38; // [rsp+3Ch] [rbp-95h] BYREF
  int v39; // [rsp+40h] [rbp-91h]
  int v40; // [rsp+44h] [rbp-8Dh] BYREF
  int v41; // [rsp+48h] [rbp-89h] BYREF
  int v42; // [rsp+4Ch] [rbp-85h] BYREF
  int v43; // [rsp+50h] [rbp-81h] BYREF
  __int64 v44; // [rsp+58h] [rbp-79h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+68h] [rbp-69h] BYREF
  int *v46; // [rsp+88h] [rbp-49h]
  __int64 v47; // [rsp+90h] [rbp-41h]
  unsigned int *v48; // [rsp+98h] [rbp-39h]
  __int64 v49; // [rsp+A0h] [rbp-31h]
  int *v50; // [rsp+A8h] [rbp-29h]
  __int64 v51; // [rsp+B0h] [rbp-21h]
  int *v52; // [rsp+B8h] [rbp-19h]
  __int64 v53; // [rsp+C0h] [rbp-11h]
  int *v54; // [rsp+C8h] [rbp-9h]
  __int64 v55; // [rsp+D0h] [rbp-1h]
  int *v56; // [rsp+D8h] [rbp+7h]
  __int64 v57; // [rsp+E0h] [rbp+Fh]
  char v58[16]; // [rsp+E8h] [rbp+17h] BYREF

  v1 = 0;
  v2 = 0;
  v37 = 0;
  v39 = 0;
  v4 = 0LL;
  v5 = KeGetEffectiveIrql() < 2u && (a1[2] & 1) == 0;
  if ( !qword_140C5B0F0 )
  {
    if ( !v5 )
      return (unsigned int)-1073741641;
    v8 = sub_14085A124();
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  v6 = qword_140C5B0F0;
  v7 = qword_140C5B0F0 + 24;
  if ( *((_DWORD *)a1 + 3) >= 0xFFFFFF00 )
    return (unsigned int)-1073741637;
  if ( v5 )
  {
    sub_1406D45B4(qword_140C5B100, a1);
    return 0;
  }
  if ( (unsigned int)sub_14024F59C(a1, &v37) )
  {
    v11 = *((_DWORD *)a1 + 3);
    if ( v11 < *(_DWORD *)v6 )
    {
      *((_DWORD *)a1 + 3) = *(_DWORD *)v6;
      while ( 1 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
        v13 = *(_QWORD *)(v7 + 8);
        v14 = v12;
        v44 = *(_QWORD *)(v7 + 64);
        if ( v13 )
        {
          v39 = sub_14024F6A4(v13, *a1, v37);
          if ( v39 )
            break;
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v7);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = *((_QWORD *)CurrentPrcb + 4375);
              v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
              v19 = (v23 & *(_DWORD *)(v20 + 20)) == 0;
              *(_DWORD *)(v20 + 20) &= v23;
              if ( v19 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v14);
        if ( !v4 )
        {
          Pool2 = (_QWORD *)ExAllocatePool2(64LL, 1024LL, 1450669125LL, v20);
          v4 = Pool2;
          if ( !Pool2 )
          {
            *((_DWORD *)a1 + 3) = v11;
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 4));
            v2 = v39;
            v8 = -1073741670;
            v1 = 0;
            goto LABEL_58;
          }
          memset(Pool2, 0, 0x400uLL);
          v4[2] = v4 + 128;
          v4[3] = v4 + 5;
          v4[4] = v4 + 5;
        }
        v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
        v26 = *(_QWORD *)(v7 + 64);
        if ( v44 == v26 )
        {
          v27 = *(_QWORD **)(v7 + 8);
          if ( v27 )
          {
            v28 = *(_QWORD **)(v7 + 24);
            if ( *v28 != v7 + 16 )
              __fastfail(3u);
            *v27 = v7 + 16;
            v27[1] = v28;
            *v28 = v27;
            *(_QWORD *)(v7 + 24) = v27;
            v26 = *(_QWORD *)(v7 + 64);
          }
          *(_QWORD *)(v7 + 8) = v4;
          *(_QWORD *)(v7 + 64) = v26 + 1;
          v4 = 0LL;
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v7);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && (unsigned __int8)v25 <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = *((_QWORD *)v30 + 4375);
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
              v19 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
              *(_DWORD *)(v31 + 20) &= v32;
              if ( v19 )
                sub_140418E4C(v30);
            }
          }
        }
        __writecr8(v25);
      }
      if ( !*(_DWORD *)(v7 + 72) )
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 32), DelayedWorkQueue);
        *(_DWORD *)(v7 + 72) = 1;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v7);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v15 = KeGetCurrentIrql();
          if ( v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
          {
            v16 = KeGetCurrentPrcb();
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v18 = *((_QWORD *)v16 + 4375);
            v19 = (v17 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v17;
            if ( v19 )
              sub_140418E4C(v16);
          }
        }
      }
      __writecr8(v14);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x56777445u);
      return 0;
    }
    v2 = 1;
    v8 = 0;
    v1 = 1;
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_58:
  if ( dword_140C5B0F8
    && (unsigned int)dword_140C04418 > 5
    && (unsigned __int8)sub_1402A2000(
                          &dword_140C04418,
                          1LL,
                          v10,
                          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    v34 = *a1;
    v38 = *(_DWORD *)v6;
    v46 = &v38;
    v37 = *(_DWORD *)(v6 + 4);
    v48 = &v37;
    v35 = v33 - *(_DWORD *)(v6 + 16);
    v36 = v33 - *(_DWORD *)(v6 + 20);
    v40 = v35;
    v50 = &v40;
    v52 = &v41;
    v54 = &v42;
    v56 = &v43;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v41 = v36;
    v53 = 4LL;
    v42 = v2;
    v55 = 4LL;
    v43 = v1;
    v57 = 4LL;
    sub_1403699D0(v58, v34);
    sub_14020A9C4((__int64)&dword_140C04418, (unsigned __int8 *)&word_14003557E, 0LL, 0LL, 9u, &v45);
  }
  return (unsigned int)v8;
}
