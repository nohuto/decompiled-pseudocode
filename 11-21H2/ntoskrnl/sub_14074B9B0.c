/*
 * XREFs of sub_14074B9B0 @ 0x14074B9B0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14074BBC4 @ 0x14074BBC4 (sub_14074BBC4.c)
 *     sub_14074BC84 @ 0x14074BC84 (sub_14074BC84.c)
 *     sub_14074BE1C @ 0x14074BE1C (sub_14074BE1C.c)
 *     sub_14074BE9C @ 0x14074BE9C (sub_14074BE9C.c)
 *     sub_14074C12C @ 0x14074C12C (sub_14074C12C.c)
 *     sub_14074C1F8 @ 0x14074C1F8 (sub_14074C1F8.c)
 *     sub_1409B5334 @ 0x1409B5334 (sub_1409B5334.c)
 *     sub_1409B53D8 @ 0x1409B53D8 (sub_1409B53D8.c)
 */

__int64 __fastcall sub_14074B9B0(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  unsigned int MajorFunction; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // eax
  UCHAR v13; // al
  unsigned int v14; // r14d
  unsigned int v15; // [rsp+30h] [rbp-18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_WORD *)(a1 + 2) != 336
    || (v13 = CurrentStackLocation->MajorFunction, CurrentStackLocation->MajorFunction == 13)
    && CurrentStackLocation->MinorFunction == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v5 = a1 + 336;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction > 9 )
    {
      v7 = MajorFunction - 10;
      if ( !v7 )
      {
        v11 = sub_14074C12C(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_9;
      }
      v8 = v7 - 3;
      if ( !v8 )
      {
        v11 = sub_14074C1F8(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_9;
      }
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_8;
      v10 = v9 - 4;
      if ( !v10 )
      {
        v11 = sub_14074BE9C((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
LABEL_9:
        v15 = v11;
LABEL_30:
        sub_1402F9540((__int64)KeGetCurrentThread());
        return v15;
      }
      if ( v10 == 9 )
      {
        if ( CurrentStackLocation->MinorFunction == 1 )
        {
          v15 = -2147483631;
          a2->IoStatus.Status = -2147483631;
          IofCompleteRequest(a2, 1);
          goto LABEL_30;
        }
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 568));
        if ( (*(_DWORD *)(v5 + 112) & 2) != 0 )
        {
          v15 = -1073741202;
          a2->IoStatus.Status = -1073741202;
          IofCompleteRequest(a2, 1);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 232));
          goto LABEL_30;
        }
        ++*(_DWORD *)(v5 + 120);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 232));
        goto LABEL_8;
      }
LABEL_28:
      KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( MajorFunction != 9 )
    {
      if ( !CurrentStackLocation->MajorFunction )
      {
        v11 = sub_14074BC84((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_9;
      }
      if ( MajorFunction == 2 )
      {
        v11 = sub_14074BE1C((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_9;
      }
      if ( MajorFunction <= 2 )
        goto LABEL_28;
      if ( MajorFunction > 4 )
      {
        if ( MajorFunction == 5 )
        {
          v11 = sub_1409B5334(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_9;
        }
        if ( MajorFunction == 6 )
        {
          v11 = sub_1409B53D8(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_9;
        }
        goto LABEL_28;
      }
    }
LABEL_8:
    v11 = sub_14074BBC4((PFSRTL_ADVANCED_FCB_HEADER)v5, a2);
    goto LABEL_9;
  }
  if ( (v13 & 0xED) != 0 || v13 == 16 )
    v14 = -1073741808;
  else
    v14 = 0;
  a2->IoStatus.Status = v14;
  IofCompleteRequest(a2, 1);
  return v14;
}
