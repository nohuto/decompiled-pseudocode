/*
 * XREFs of RtlDebugSetUserFlagsHeap @ 0x180106088
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpValidateHeapEntry @ 0x18007C0D8 (RtlpValidateHeapEntry.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  signed __int32 v22[12]; // [rsp+30h] [rbp-88h] BYREF
  char v23; // [rsp+60h] [rbp-58h]
  char v24; // [rsp+61h] [rbp-57h]
  unsigned __int64 v25; // [rsp+70h] [rbp-48h]
  unsigned __int64 v26; // [rsp+C0h] [rbp+8h] BYREF
  int v27; // [rsp+C8h] [rbp+10h]

  v27 = a2;
  v26 = a1;
  v23 = 0;
  v9 = 0;
  v24 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
    v22[8] = a5;
    return ((__int64 (__fastcall *)(unsigned __int64))qword_1801742C0)(a1);
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
        v27 = v12;
        if ( (v12 & 1) == 0 )
        {
          RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
          v9 = 1;
          v24 = 1;
          v12 |= 1u;
          v27 = v12;
        }
        RtlpValidateHeap(a1, 0LL);
        v13 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
        v25 = v13;
        if ( RtlpValidateHeapEntry(a1, v13, "RtlSetUserFlagsHeap") )
        {
          v23 = RtlSetUserFlagsHeap(a1, v12, a3, a4, v11);
          RtlpValidateHeap(a1, 0LL);
        }
      }
      else
      {
        v23 = 0;
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
            LODWORD(v26) = 0;
            while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)v16, (v17 & 2 | 1) + v17, v17) )
            {
              RtlBackoff((unsigned int *)&v26);
              _m_prefetchw(v16);
              v17 = *(_DWORD *)v16;
            }
            if ( (v17 & 2) != 0 )
            {
              if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
              {
                _InterlockedOr(v22, 0);
                RtlpWakeByAddress(v14 + 8, 0);
                v19 = 0;
              }
              else
              {
                v19 = ZwSetEvent();
              }
              if ( v19 < 0 )
                RtlRaiseStatus(v19, v20, v21);
            }
          }
        }
      }
      return v23;
    }
  }
}
