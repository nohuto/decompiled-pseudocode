/*
 * XREFs of sub_14024A5B4 @ 0x14024A5B4
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlCheckUpperOplock @ 0x14092E2F0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_140249470 @ 0x140249470 (sub_140249470.c)
 *     sub_14024A390 @ 0x14024A390 (sub_14024A390.c)
 *     sub_14024C370 @ 0x14024C370 (sub_14024C370.c)
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 */

__int64 __fastcall sub_14024A5B4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        _BYTE *a12,
        _BYTE *a13)
{
  __int64 v14; // r12
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r14
  PIRP v21; // rax
  void *v22; // rcx
  int v23; // eax
  int v24; // eax
  __int128 v26; // [rsp+60h] [rbp-38h] BYREF
  __int64 v27; // [rsp+70h] [rbp-28h]

  v14 = a3;
  v26 = 0LL;
  v27 = 0LL;
  v16 = *(_DWORD *)(a1 + 144);
  if ( (v16 & 0x40) == 0 || (v16 & 0x7000) != 0 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v17 = 0;
  }
  else
  {
    v17 = 0;
    if ( (unsigned __int8)sub_1402A6AB0(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0LL) )
      return v17;
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  v18 = *(_DWORD *)(a1 + 144);
  if ( (v18 & 0x1F00F80) != 0 )
  {
    if ( (v18 & 0x80u) != 0 )
    {
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      *(_QWORD *)(a1 + 8) = 0LL;
      return v17;
    }
    goto LABEL_20;
  }
  v19 = *(_QWORD *)a1;
  v20 = 7LL;
  *(_BYTE *)(v19 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v19 + 69));
  if ( !*(_BYTE *)(v19 + 68) )
  {
    v23 = *(_DWORD *)(a1 + 144);
    if ( (v23 & 6) != 0 )
    {
      v24 = v23 | 0x100;
    }
    else
    {
      v24 = v23 | 0x200;
      v20 = 8LL;
    }
    *(_DWORD *)(a1 + 144) = v24;
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = v20;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
LABEL_20:
    if ( (a4 & 1) != 0 )
    {
      return 264;
    }
    else
    {
      LOBYTE(a3) = 1;
      sub_14024A390(a1, 0LL, a3);
      sub_14024C370(a1, 0LL);
      *a12 = 0;
      return (unsigned int)sub_140249470(a1, v14, a6, a7, a8, (char *)&v26, 0, a9, a10, a11, a13);
    }
  }
  *(_QWORD *)(v19 + 56) = 8LL;
  sub_14024A390(a1, 0LL, 0LL);
  sub_140240DB4(a1, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  v21 = *(PIRP *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
  {
    v21->IoStatus.Information = 0LL;
    v21 = *(PIRP *)a1;
  }
  v21->IoStatus.Status = -1073741536;
  IofCompleteRequest(*(PIRP *)a1, 1);
  *(_QWORD *)a1 = 0LL;
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
  while ( 1 )
  {
    v22 = *(void **)(a1 + 88);
    if ( v22 == (void *)(a1 + 88) )
      break;
    sub_14024E884(v22);
  }
  return v17;
}
