/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0017440
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001757C (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, char *a2)
{
  LARGE_INTEGER v3; // rsi
  char v4; // r8
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  union _LARGE_INTEGER v12; // [rsp+58h] [rbp+10h] BYREF

  v12.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&v12);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 216, &LockHandle);
  if ( v3.QuadPart >= *((_QWORD *)a2 + 24) )
  {
    ExCancelTimer(*((_QWORD *)a2 + 23), 0LL);
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v9, &EventYieldCancelExpirationTimer, v10, *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 24) = 0LL;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
    if ( *((_DWORD *)a2 + 20) )
    {
      do
      {
        v6 = (__int64 *)*((_QWORD *)a2 + 79);
        if ( (unsigned int)v5 < *((_DWORD *)a2 + 176) )
          v6 += v5;
        v7 = *v6;
        if ( *(_BYTE *)(v7 + 2024) )
        {
          v8 = *(_QWORD *)(v7 + 2000);
          if ( v8 )
          {
            if ( v3.QuadPart > (unsigned __int64)(*(_QWORD *)(v7 + 2008) + v8) )
            {
              VidSchiStopNodeYield((struct _VIDSCH_NODE *)v7);
              v4 = 1;
            }
          }
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a2 + 20) );
      if ( v4 )
      {
        *((_QWORD *)a2 + 153) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a2 + 1192), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
