/*
 * XREFs of RtlCompactHeap @ 0x1800FD670
 * Callers:
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpHpHeapCompact @ 0x180014D08 (RtlpHpHeapCompact.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpCoalesceHeap @ 0x1800FEA84 (RtlpCoalesceHeap.c)
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, int a2)
{
  int v4; // edx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  _BYTE *v9; // rsi
  signed __int32 v10; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  signed __int32 v15[8]; // [rsp+48h] [rbp-98h] BYREF
  char v16; // [rsp+68h] [rbp-78h]
  unsigned __int64 v17; // [rsp+70h] [rbp-70h]
  __int64 v18; // [rsp+80h] [rbp-60h]
  struct _TEB *v19; // [rsp+88h] [rbp-58h]
  struct _TEB *v20; // [rsp+90h] [rbp-50h]
  char *v21; // [rsp+E8h] [rbp+8h] BYREF

  v21 = Src;
  v16 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)Src, a2 & 1);
    return 16LL;
  }
  else
  {
    v4 = *((_DWORD *)Src + 29) | a2;
    if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(Src);
    }
    else
    {
      v17 = 0LL;
      if ( (v4 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v16 = 1;
      }
      v5 = RtlpCoalesceHeap(Src);
      v18 = v5;
      if ( v5 )
      {
        v17 = 16LL * *(unsigned __int16 *)(v5 + 8);
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v5 + 11) = *(_BYTE *)(v5 + 8) ^ *(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10);
          *(_DWORD *)(v5 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v6 = v17;
        if ( *(_QWORD *)(*((_QWORD *)Src + 31) + 40LL) > v17 )
          v6 = *(_QWORD *)(*((_QWORD *)Src + 31) + 40LL);
        v17 = v6;
      }
      if ( !v17 )
      {
        v19 = NtCurrentTeb();
        v19->LastStatusValue = 0;
        v20 = NtCurrentTeb();
        v20->LastErrorValue = RtlNtStatusToDosError(0);
      }
      if ( v16 )
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
            LODWORD(v21) = 0;
            while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)v9, (v10 & 2 | 1) + v10, v10) )
            {
              RtlBackoff((unsigned int *)&v21);
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
  }
}
