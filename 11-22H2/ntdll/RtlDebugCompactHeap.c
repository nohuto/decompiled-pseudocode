/*
 * XREFs of RtlDebugCompactHeap @ 0x180104364
 * Callers:
 *     RtlCompactHeap @ 0x1800FD310 (RtlCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlCompactHeap @ 0x1800FD310 (RtlCompactHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180106FF4 (RtlpValidateHeapHeaders.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCompactHeap(_DWORD *Src, int a2)
{
  char v4; // r14
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rdi
  _BYTE *v10; // rsi
  signed __int32 v11; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v13; // eax
  signed __int32 v14[8]; // [rsp+38h] [rbp-78h] BYREF
  char v15; // [rsp+58h] [rbp-58h]
  __int64 v16; // [rsp+60h] [rbp-50h]
  _DWORD *v17; // [rsp+B8h] [rbp+8h] BYREF
  int v18; // [rsp+C0h] [rbp+10h]

  v18 = a2;
  v17 = Src;
  v4 = 0;
  v15 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_DWORD *))qword_18017E8C8)(Src);
  v16 = 0LL;
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v6 = Src[29] | 0x10000000 | a2;
    v18 = v6;
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v4 = 1;
      v15 = 1;
      v6 |= 1u;
      v18 = v6;
    }
    RtlpValidateHeap(Src, 0LL);
    v16 = RtlCompactHeap((char *)Src, v6, v7);
    RtlpValidateHeapHeaders(Src);
  }
  else
  {
    v16 = 0LL;
  }
  if ( v4 )
  {
    v8 = *((_QWORD *)Src + 44);
    if ( (*(_DWORD *)(v8 + 12))-- == 1 )
    {
      *(_QWORD *)(v8 + 16) = 0LL;
      v10 = (_BYTE *)(v8 + 8);
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), -1, -2);
      if ( v11 != -2 )
      {
        if ( (*v10 & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v8);
        DeferredCriticalSectionEvent = *(HANDLE *)(v8 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v8);
        LODWORD(v17) = 0;
        while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)v10, (v11 & 2 | 1) + v11, v11) )
        {
          RtlBackoff((unsigned int *)&v17);
          _m_prefetchw(v10);
          v11 = *(_DWORD *)v10;
        }
        if ( (v11 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v14, 0);
            RtlpWakeByAddress(v8 + 8, 0);
            v13 = 0;
          }
          else
          {
            v13 = ZwSetEvent();
          }
          if ( v13 < 0 )
            RtlRaiseStatus((unsigned int)v13);
        }
      }
    }
  }
  return v16;
}
