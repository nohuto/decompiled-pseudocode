/*
 * XREFs of sub_14074BC84 @ 0x14074BC84
 * Callers:
 *     sub_14074B9B0 @ 0x14074B9B0 (sub_14074B9B0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402D2BD8 @ 0x1402D2BD8 (sub_1402D2BD8.c)
 *     IoCheckLinkShareAccess @ 0x14074B530 (IoCheckLinkShareAccess.c)
 *     IoSetLinkShareAccess @ 0x14074BFF0 (IoSetLinkShareAccess.c)
 */

__int64 __fastcall sub_14074BC84(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_FilterContexts; // r15
  __int64 v7; // r8
  int v8; // ecx
  ULONG LowPart; // eax
  unsigned __int16 v10; // cx
  int v11; // r14d
  int v12; // r12d
  LONG HighPart; // eax
  NTSTATUS v14; // esi

  p_FilterContexts = (struct _FAST_MUTEX *)&AdvancedHeader[2].FilterContexts;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].FilterContexts);
  v7 = *(_QWORD *)(a3 + 48);
  if ( v7 && (*(_WORD *)(v7 + 88) || *(_QWORD *)(v7 + 64))
    || (v8 = *(_DWORD *)(a3 + 16), (v8 & 0xFF000000) != 0x1000000)
    || (v8 & 1) != 0 )
  {
    v14 = -1073741811;
    goto LABEL_15;
  }
  LowPart = AdvancedHeader[1].AllocationSize.LowPart;
  if ( (LowPart & 1) != 0 )
  {
    v14 = -1073741790;
    goto LABEL_15;
  }
  if ( (LowPart & 2) != 0 )
  {
    v14 = -1073741202;
    goto LABEL_15;
  }
  v10 = *(_WORD *)(a3 + 26);
  v11 = v10;
  v12 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
  if ( AdvancedHeader[1].AllocationSize.HighPart )
  {
    v14 = IoCheckLinkShareAccess(v12, v10, v7, &AdvancedHeader[1].FileSize.HighPart, 0LL, 1);
    if ( v14 >= 0 )
    {
      HighPart = AdvancedHeader[1].AllocationSize.HighPart;
      if ( HighPart )
        goto LABEL_10;
      goto LABEL_9;
    }
LABEL_15:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_11;
  }
LABEL_9:
  IoSetLinkShareAccess(v12, v11, *(_QWORD *)(a3 + 48), (_DWORD)AdvancedHeader + 124, 0LL, 0);
  HighPart = AdvancedHeader[1].AllocationSize.HighPart;
LABEL_10:
  ++AdvancedHeader[1].FileSize.LowPart;
  AdvancedHeader[1].AllocationSize.HighPart = HighPart + 1;
  v14 = 0;
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 16LL) = AdvancedHeader[2].PagingIoResource;
  Irp->IoStatus.Information = 1LL;
  *(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) |= 8u;
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 24LL) = AdvancedHeader;
LABEL_11:
  if ( AdvancedHeader[1].AllocationSize.HighPart || !sub_1402D2BD8(AdvancedHeader, 0, 1) )
    KeReleaseGuardedMutex(p_FilterContexts);
  Irp->IoStatus.Status = v14;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)v14;
}
