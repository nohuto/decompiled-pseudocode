/*
 * XREFs of RtlCompactHeap @ 0x1800FE720
 * Callers:
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlpHpHeapCompact @ 0x18005FB70 (RtlpHpHeapCompact.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpCoalesceHeap @ 0x1800FFB8C (RtlpCoalesceHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x1801228D8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, int a2, __int64 a3)
{
  int v5; // edx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  _BYTE *v10; // rsi
  signed __int32 v11; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v13; // eax
  signed __int32 v14[8]; // [rsp+38h] [rbp-98h] BYREF
  char v15; // [rsp+58h] [rbp-78h]
  unsigned __int64 v16; // [rsp+60h] [rbp-70h]
  __int64 v17; // [rsp+70h] [rbp-60h]
  struct _TEB *v18; // [rsp+78h] [rbp-58h]
  struct _TEB *v19; // [rsp+80h] [rbp-50h]
  char *v20; // [rsp+D8h] [rbp+8h] BYREF

  v20 = Src;
  v15 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)Src, a2 & 1, a3);
    return 16LL;
  }
  else
  {
    v5 = *((_DWORD *)Src + 29) | a2;
    if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(Src);
    }
    else
    {
      v16 = 0LL;
      if ( (v5 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v15 = 1;
      }
      v6 = RtlpCoalesceHeap(Src);
      v17 = v6;
      if ( v6 )
      {
        v16 = 16LL * *(unsigned __int16 *)(v6 + 8);
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
          *(_DWORD *)(v6 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v7 = v16;
        if ( *(_QWORD *)(*((_QWORD *)Src + 31) + 40LL) > v16 )
          v7 = *(_QWORD *)(*((_QWORD *)Src + 31) + 40LL);
        v16 = v7;
      }
      if ( !v16 )
      {
        v18 = NtCurrentTeb();
        v18->LastStatusValue = 0;
        v19 = NtCurrentTeb();
        v19->LastErrorValue = RtlNtStatusToDosError(0);
      }
      if ( v15 )
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
            LODWORD(v20) = 0;
            while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)v10, (v11 & 2 | 1) + v11, v11) )
            {
              RtlBackoff((unsigned int *)&v20);
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
  }
}
