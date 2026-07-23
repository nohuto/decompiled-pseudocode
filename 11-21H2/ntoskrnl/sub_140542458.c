/*
 * XREFs of sub_140542458 @ 0x140542458
 * Callers:
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 * Callees:
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_14024A390 @ 0x14024A390 (sub_14024A390.c)
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_14054268C @ 0x14054268C (sub_14054268C.c)
 *     sub_14071CAB0 @ 0x14071CAB0 (sub_14071CAB0.c)
 */

__int64 __fastcall sub_140542458(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  char v10; // r15
  int v11; // esi
  int v12; // eax
  unsigned int v13; // eax
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r14d
  int v19; // eax
  _QWORD *v20; // rcx

  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v10 = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) )
  {
    v11 = 16;
    if ( !(unsigned __int8)sub_14071CAB0(16LL, a5) )
    {
      v12 = *(_DWORD *)(a1 + 144);
      if ( (v12 & 0x100) != 0 )
      {
        v13 = v12 & 0xFFFFFEFF;
        *(_DWORD *)(a1 + 144) = v13;
        *(_DWORD *)(a1 + 144) = v13 | 0x400;
      }
    }
    if ( a4 && (*(_DWORD *)(a1 + 144) & 0x100) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v14 = (_QWORD *)(a3 + 168);
      v15 = (_QWORD *)(a1 + 40);
      v16 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(v16 + 8) != a1 + 40 )
        __fastfail(3u);
      *v14 = v16;
      *(_QWORD *)(a3 + 176) = v15;
      *(_QWORD *)(v16 + 8) = v14;
      *v15 = v14;
      *(_QWORD *)(a3 + 56) = a1;
      v10 = 0;
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v17) = 1;
        sub_14054268C(a3, v17);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)sub_140542AD0);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v11 = 16;
      }
      v18 = 259;
      goto LABEL_19;
    }
    v19 = *(_DWORD *)(a1 + 144);
    if ( (v19 & 0x300) != 0 )
    {
LABEL_18:
      v18 = 0;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
      v11 = 1;
LABEL_19:
      while ( 1 )
      {
        v20 = *(_QWORD **)(a1 + 88);
        if ( v20 == (_QWORD *)(a1 + 88) )
          break;
        sub_14024E884(v20);
      }
      if ( v10 )
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      sub_14024A390(a1, 0LL, 0LL);
      sub_140240DB4(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 144) = v11 | *(_DWORD *)(a1 + 144) & 0x20;
      goto LABEL_25;
    }
    if ( (v19 & 0x400) != 0 )
    {
      *(_QWORD *)(a3 + 56) = 8LL;
      goto LABEL_18;
    }
  }
  v18 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_25:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v18;
}
