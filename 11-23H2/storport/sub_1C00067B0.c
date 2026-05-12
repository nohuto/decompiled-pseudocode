/*
 * XREFs of sub_1C00067B0 @ 0x1C00067B0
 * Callers:
 *     sub_1C0006430 @ 0x1C0006430 (sub_1C0006430.c)
 * Callees:
 *     sub_1C0001008 @ 0x1C0001008 (sub_1C0001008.c)
 */

char __fastcall sub_1C00067B0(__int64 a1, __int64 a2, char a3, _BYTE *a4, LARGE_INTEGER *a5, _DWORD *a6, _DWORD *a7)
{
  signed __int64 v11; // rbp
  char v12; // r15
  char v13; // di
  __int64 v14; // rax
  int v15; // r14d
  signed __int64 v16; // rax
  char v17; // al
  bool v19; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v21; // rbp
  USHORT DepthSList; // di
  int v23; // edi
  char v24; // al
  volatile LONG *v25; // rsi
  volatile LONG *v26; // rcx

  if ( (*(_BYTE *)(a2 + 22) & 0x51) != 0 )
    return 0;
  v11 = *(_QWORD *)(a1 + 88);
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = 0x100000000LL;
    if ( (v11 & 1) != 0 )
      break;
    v15 = (v11 >> 1) & 0x7FFFFFFF;
    if ( v15 >= *(_DWORD *)(a1 + 4) )
    {
      if ( *(_BYTE *)(a2 + 22) )
        break;
      if ( !v12 && !a3 )
      {
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 80)) )
          return v13;
        v12 = 1;
        v14 = 0x100000000LL;
      }
    }
    else
    {
      v14 = 2LL;
    }
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v14 + v11, v11);
    if ( v11 == v16 )
    {
      v17 = *(_BYTE *)(a2 + 20);
      if ( v15 < *(_DWORD *)(a1 + 4) )
      {
        *a4 = 0;
        *(_BYTE *)(a2 + 20) = v17 & 0xFE;
LABEL_9:
        v13 = 1;
        break;
      }
      *a4 = 1;
      v19 = byte_1C0093BE8 == 0;
      *(_BYTE *)(a2 + 20) = v17 | 3;
      if ( !v19 )
      {
        v19 = byte_1C0093BA0 == 0;
        goto LABEL_20;
      }
      if ( dword_1C0093400 )
      {
        if ( !byte_1C0093BA0 )
          goto LABEL_43;
        v19 = dword_1C0093404 == 0;
LABEL_20:
        if ( v19 )
LABEL_43:
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        else
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      else
      {
        PerformanceCounter.QuadPart = 0LL;
      }
      *a5 = PerformanceCounter;
      *a6 = 1;
      v21 = v11 / 0x100000000LL;
      *a7 = v21;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), (PSLIST_ENTRY)((a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL));
      DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a1 + 96));
      if ( DepthSList > 0x40u )
      {
        if ( v12 )
        {
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
          v12 = 0;
        }
        if ( a3 )
        {
          sub_1C0001008((union _SLIST_HEADER *)a1);
        }
        else
        {
          v26 = (volatile LONG *)(a1 + 72);
          if ( DepthSList > 0x80u )
          {
            ExAcquireSpinLockExclusiveAtDpcLevel(v26);
          }
          else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v26) )
          {
            goto LABEL_23;
          }
          sub_1C0001008((union _SLIST_HEADER *)a1);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        }
      }
LABEL_23:
      v23 = v21 + 1;
      if ( (int)v21 + 1 > *(_DWORD *)(a1 + 180) )
      {
        v24 = 0;
        if ( a3 )
        {
          v25 = (volatile LONG *)(a1 + 72);
        }
        else
        {
          if ( v12 )
          {
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
            v12 = 0;
          }
          v25 = (volatile LONG *)(a1 + 72);
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
          v24 = 1;
        }
        if ( v23 > *(_DWORD *)(a1 + 180) )
          *(_DWORD *)(a1 + 180) = v23;
        if ( v24 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v25);
      }
      goto LABEL_9;
    }
    v11 = v16;
  }
  if ( v12 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
  return v13;
}
