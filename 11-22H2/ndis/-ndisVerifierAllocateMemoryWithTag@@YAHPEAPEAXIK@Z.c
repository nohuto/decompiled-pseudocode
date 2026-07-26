/*
 * XREFs of ?ndisVerifierAllocateMemoryWithTag@@YAHPEAPEAXIK@Z @ 0x1C00B28F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1C00B2D64 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 */

__int64 __fastcall ndisVerifierAllocateMemoryWithTag(void **a1, unsigned int a2, unsigned int a3)
{
  void **v5; // rsi
  int v6; // eax
  int v7; // r9d
  __int64 v8; // rax
  _LIST_ENTRY *v9; // rbx
  KIRQL v10; // dl
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *Flink; // rax
  PVOID v14; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  PVOID v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  v5 = a1;
  if ( (ndisFlags & 0x400) != 0 )
  {
    RtlGetCallersAddress(&v16, &v14);
    LOBYTE(a1) = a2 + 40;
    v6 = -1;
    if ( a2 + 40 >= a2 )
      v6 = a2 + 40;
    a2 = v6;
  }
  if ( ndisVerifierInjectResourceFailure((unsigned __int8)a1) || v7 < 0 )
  {
    v8 = 0LL;
LABEL_17:
    *v5 = (void *)v8;
    return *v5 == 0LL ? 0xC0000001 : 0;
  }
  v8 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, void *))ndisVerifierWdmDispatch + 6))(
         512LL,
         a2,
         a3,
         24LL,
         retaddr);
  v9 = (_LIST_ENTRY *)v8;
  if ( !v8 || (ndisFlags & 0x400) == 0 )
    goto LABEL_17;
  *v5 = (void *)(v8 + 40);
  *(_QWORD *)v8 = 0LL;
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_DWORD *)(v8 + 16) = a3;
  *(_DWORD *)(v8 + 20) = a2;
  *(_QWORD *)(v8 + 24) = v16;
  *(_QWORD *)(v8 + 32) = v14;
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisTrackMemLock);
  if ( !ndisMiniportTrackAlloc )
  {
    Flink = ndisDriverTrackAllocList.Flink;
    if ( ndisDriverTrackAllocList.Flink->Blink == &ndisDriverTrackAllocList )
    {
      v9->Flink = ndisDriverTrackAllocList.Flink;
      v9->Blink = &ndisDriverTrackAllocList;
      Flink->Blink = v9;
      ndisDriverTrackAllocList.Flink = v9;
      goto LABEL_15;
    }
LABEL_13:
    __fastfail(3u);
  }
  v11 = ndisMiniportTrackAllocList.Flink;
  if ( ndisMiniportTrackAllocList.Flink->Blink != &ndisMiniportTrackAllocList )
    goto LABEL_13;
  v9->Flink = ndisMiniportTrackAllocList.Flink;
  v9->Blink = &ndisMiniportTrackAllocList;
  v11->Blink = v9;
  ndisMiniportTrackAllocList.Flink = v9;
LABEL_15:
  KeReleaseSpinLock(&ndisTrackMemLock, v10);
  return *v5 == 0LL ? 0xC0000001 : 0;
}
