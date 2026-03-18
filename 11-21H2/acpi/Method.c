/*
 * XREFs of Method @ 0x1C0017300
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall Method(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax
  _SLIST_ENTRY *v6; // rax
  __int64 v7; // r15
  __int64 v8; // r14
  _QWORD *Pool2; // rbx
  KIRQL v10; // dl

  v2 = a2 + 8;
  result = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             *(unsigned __int8 **)(a2[10] + 32LL),
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             a2 + 8,
             0);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == -1073741771 && g_SimulatorCallbackObject )
    {
      result = 0LL;
      *(_QWORD *)(a1 + 120) = a2[5];
    }
  }
  else
  {
    *(_WORD *)(*v2 + 66LL) = 8;
    *(_DWORD *)(*v2 + 88LL) = *((_DWORD *)a2 + 10) - *(_DWORD *)(a1 + 120) + 194;
    v6 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1413827912, *(_DWORD *)(*v2 + 88LL));
    *(_QWORD *)(*v2 + 96LL) = v6;
    if ( v6 )
    {
      v7 = *v2;
      v8 = *(_QWORD *)(*v2 + 96LL);
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1399614785LL);
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        Pool2[1] = 0LL;
        Pool2[2] = v8 + 194;
        Pool2[3] = v7;
        v10 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        if ( P )
        {
          Pool2[1] = P;
          *(_QWORD *)P = Pool2;
        }
        P = Pool2;
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v10);
      }
      memset(*(void **)(*v2 + 96LL), 0, *(unsigned int *)(*v2 + 88LL));
      *(_BYTE *)(v8 + 193) = *(_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
      memmove((void *)(v8 + 194), *(const void **)(a1 + 120), a2[5] - *(_QWORD *)(a1 + 120));
      *(_QWORD *)(a1 + 120) = a2[5];
      KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 184));
      *(_QWORD *)(v8 + 24) = v8 + 16;
      *(_QWORD *)(v8 + 16) = v8 + 16;
      return 0LL;
    }
    else
    {
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(104, 0, 0, 0, 0LL);
      return 3221225626LL;
    }
  }
  return result;
}
