/*
 * XREFs of ?ndisVerifierAllocateMemoryWithTag@@YAHPEAPEAXIK@Z @ 0x1C00ACEF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1C00AD2C8 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 */

__int64 __fastcall ndisVerifierAllocateMemoryWithTag(_LIST_ENTRY **a1, unsigned int a2, int a3)
{
  _LIST_ENTRY *v3; // rbp
  unsigned int v5; // edi
  int v7; // eax
  __int64 v8; // r8
  int v9; // r9d
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY *v11; // rbx
  KIRQL v12; // dl
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v5 = a2;
  if ( (ndisFlags & 0x400) != 0 )
  {
    v3 = retaddr;
    v7 = -1;
    if ( a2 + 40 >= a2 )
      v7 = a2 + 40;
    v5 = v7;
  }
  if ( ndisVerifierInjectResourceFailure((unsigned __int8)a1) || v9 < 0 )
  {
    v10 = 0LL;
LABEL_17:
    *a1 = v10;
    return v10 == 0LL ? 0xC0000001 : 0;
  }
  v10 = (_LIST_ENTRY *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _LIST_ENTRY *))ndisVerifierWdmDispatch
                        + 6))(
                         512LL,
                         v5,
                         v8,
                         24LL,
                         retaddr);
  v11 = v10;
  if ( !v10 || (ndisFlags & 0x400) == 0 )
    goto LABEL_17;
  *a1 = (_LIST_ENTRY *)((char *)v10 + 40);
  v10->Flink = 0LL;
  v10->Blink = 0LL;
  v10[2].Flink = 0LL;
  LODWORD(v10[1].Flink) = a3;
  HIDWORD(v10[1].Flink) = v5;
  v10[1].Blink = v3;
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisTrackMemLock);
  if ( !ndisMiniportTrackAlloc )
  {
    Flink = ndisDriverTrackAllocList.Flink;
    if ( ndisDriverTrackAllocList.Flink->Blink == &ndisDriverTrackAllocList )
    {
      v11->Flink = ndisDriverTrackAllocList.Flink;
      v11->Blink = &ndisDriverTrackAllocList;
      Flink->Blink = v11;
      ndisDriverTrackAllocList.Flink = v11;
      goto LABEL_15;
    }
LABEL_13:
    __fastfail(3u);
  }
  v13 = ndisMiniportTrackAllocList.Flink;
  if ( ndisMiniportTrackAllocList.Flink->Blink != &ndisMiniportTrackAllocList )
    goto LABEL_13;
  v11->Flink = ndisMiniportTrackAllocList.Flink;
  v11->Blink = &ndisMiniportTrackAllocList;
  v13->Blink = v11;
  ndisMiniportTrackAllocList.Flink = v11;
LABEL_15:
  KeReleaseSpinLock(&ndisTrackMemLock, v12);
  v10 = *a1;
  return v10 == 0LL ? 0xC0000001 : 0;
}
