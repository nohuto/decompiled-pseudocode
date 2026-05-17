/*
 * XREFs of RtlDebugCompactHeap @ 0x180104690
 * Callers:
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x18010728C (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCompactHeap(_DWORD *Src, int a2)
{
  char v4; // r14
  int v6; // edi
  __int64 v7; // rdi
  _BYTE *v9; // rsi
  signed __int32 v10; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  signed __int32 v15[8]; // [rsp+48h] [rbp-78h] BYREF
  char v16; // [rsp+68h] [rbp-58h]
  __int64 v17; // [rsp+70h] [rbp-50h]
  _DWORD *v18; // [rsp+C8h] [rbp+8h] BYREF
  int v19; // [rsp+D0h] [rbp+10h]

  v19 = a2;
  v18 = Src;
  v4 = 0;
  v16 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_DWORD *))qword_1801742D8)(Src);
  v17 = 0LL;
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v6 = Src[29] | 0x10000000 | a2;
    v19 = v6;
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v4 = 1;
      v16 = 1;
      v6 |= 1u;
      v19 = v6;
    }
    RtlpValidateHeap(Src, 0LL);
    v17 = RtlCompactHeap((char *)Src, v6);
    RtlpValidateHeapHeaders(Src);
  }
  else
  {
    v17 = 0LL;
  }
  if ( v4 )
  {
    v7 = *((_QWORD *)Src + 44);
    if ( (*(_DWORD *)(v7 + 12))-- == 1 )
    {
      *(_QWORD *)(v7 + 16) = 0LL;
      v9 = (_BYTE *)(v7 + 8);
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), -1, -2);
      if ( v10 != -2 )
      {
        if ( (*v9 & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v7);
        DeferredCriticalSectionEvent = *(HANDLE *)(v7 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v7);
        LODWORD(v18) = 0;
        while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)v9, (v10 & 2 | 1) + v10, v10) )
        {
          RtlBackoff((unsigned int *)&v18);
          _m_prefetchw(v9);
          v10 = *(_DWORD *)v9;
        }
        if ( (v10 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v15, 0);
            RtlpWakeByAddress(v7 + 8, 0);
            v12 = 0;
          }
          else
          {
            v12 = ZwSetEvent();
          }
          if ( v12 < 0 )
            RtlRaiseStatus(v12, v13, v14);
        }
      }
    }
  }
  return v17;
}
