/*
 * XREFs of RtlDebugSetUserFlagsHeap @ 0x180105DC8
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugSetUserFlagsHeap(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4, signed __int32 a5)
{
  char v9; // r14
  unsigned int v11; // r12d
  int v12; // esi
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  _BYTE *v16; // rsi
  signed __int32 v17; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v19; // eax
  signed __int32 v20[12]; // [rsp+20h] [rbp-88h] BYREF
  char v21; // [rsp+50h] [rbp-58h]
  char v22; // [rsp+51h] [rbp-57h]
  unsigned __int64 v23; // [rsp+60h] [rbp-48h]
  unsigned __int64 v24; // [rsp+B0h] [rbp+8h] BYREF
  int v25; // [rsp+B8h] [rbp+10h]

  v25 = a2;
  v24 = a1;
  v21 = 0;
  v9 = 0;
  v22 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
    v20[8] = a5;
    return ((__int64 (__fastcall *)(unsigned __int64))qword_18017E8B0)(a1);
  }
  else
  {
    v11 = a5;
    if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    {
      return 0;
    }
    else
    {
      if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserFlagsHeap") )
      {
        v12 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
        v25 = v12;
        if ( (v12 & 1) == 0 )
        {
          RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
          v9 = 1;
          v22 = 1;
          v12 |= 1u;
          v25 = v12;
        }
        RtlpValidateHeap(a1, 0LL);
        v13 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
        v23 = v13;
        if ( RtlpValidateHeapEntry(a1, v13, "RtlSetUserFlagsHeap") )
        {
          v21 = RtlSetUserFlagsHeap(a1, v12, a3, a4, v11);
          RtlpValidateHeap(a1, 0LL);
        }
      }
      else
      {
        v21 = 0;
      }
      if ( v9 )
      {
        v14 = *(_QWORD *)(a1 + 352);
        if ( (*(_DWORD *)(v14 + 12))-- == 1 )
        {
          *(_QWORD *)(v14 + 16) = 0LL;
          v16 = (_BYTE *)(v14 + 8);
          v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), -1, -2);
          if ( v17 != -2 )
          {
            if ( (*v16 & 1) != 0 )
              RtlpNotOwnerCriticalSection((const void **)v14);
            DeferredCriticalSectionEvent = *(HANDLE *)(v14 + 24);
            if ( !DeferredCriticalSectionEvent )
              DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v14);
            LODWORD(v24) = 0;
            while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)v16, (v17 & 2 | 1) + v17, v17) )
            {
              RtlBackoff((unsigned int *)&v24);
              _m_prefetchw(v16);
              v17 = *(_DWORD *)v16;
            }
            if ( (v17 & 2) != 0 )
            {
              if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
              {
                _InterlockedOr(v20, 0);
                RtlpWakeByAddress(v14 + 8, 0);
                v19 = 0;
              }
              else
              {
                v19 = ZwSetEvent();
              }
              if ( v19 < 0 )
                RtlRaiseStatus((unsigned int)v19);
            }
          }
        }
      }
      return v21;
    }
  }
}
