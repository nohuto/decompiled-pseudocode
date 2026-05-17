/*
 * XREFs of RtlDebugSizeHeap @ 0x180106428
 * Callers:
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18002A180 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugSizeHeap(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v6; // si
  unsigned int v8; // edi
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  signed __int32 v12; // esi
  HANDLE DeferredCriticalSectionEvent; // rdi
  __int64 v14; // [rsp+30h] [rbp-58h]
  unsigned __int64 v15; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+10h]

  v16 = a2;
  v15 = a1;
  v6 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_18017E8C0)(a1);
  v14 = -1LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSizeHeap") )
  {
    v8 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    v16 = v8;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v8 |= 1u;
      v16 = v8;
      v6 = 1;
    }
    RtlpValidateHeap(a1, 0LL);
    v9 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    if ( RtlpValidateHeapEntry(a1, v9, "RtlSizeHeap") )
      v14 = RtlSizeHeap(a1, v8, a3);
  }
  else
  {
    v14 = 0LL;
  }
  if ( v6 )
  {
    v10 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v10 + 12))-- == 1 )
    {
      *(_QWORD *)(v10 + 16) = 0LL;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), -1, -2);
      if ( v12 != -2 )
      {
        if ( (*(_BYTE *)(v10 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v10);
        DeferredCriticalSectionEvent = *(HANDLE *)(v10 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v10);
        LODWORD(v15) = 0;
        while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), (v12 & 2 | 1) + v12, v12) )
        {
          RtlBackoff((unsigned int *)&v15);
          _m_prefetchw((const void *)(v10 + 8));
          v12 = *(_DWORD *)(v10 + 8);
        }
        if ( (v12 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v10, (__int64)DeferredCriticalSectionEvent);
      }
    }
  }
  return v14;
}
