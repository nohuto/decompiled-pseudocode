/*
 * XREFs of RtlDebugCreateTagHeap @ 0x180104C50
 * Callers:
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x18010728C (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(_DWORD *Src, int a2, __int64 a3, _WORD *a4)
{
  char v8; // si
  int v9; // ebx
  __int64 v10; // rbx
  _BYTE *v12; // rdi
  signed __int32 v13; // esi
  HANDLE DeferredCriticalSectionEvent; // r10
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  signed __int32 v19[8]; // [rsp+30h] [rbp-68h] BYREF
  char v20; // [rsp+50h] [rbp-48h]
  unsigned int TagHeap; // [rsp+54h] [rbp-44h]
  _DWORD *v22; // [rsp+A0h] [rbp+8h] BYREF
  int v23; // [rsp+A8h] [rbp+10h]

  v23 = a2;
  v22 = Src;
  v8 = 0;
  v20 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v9 = Src[29] | 0x10000000 | a2;
    v23 = v9;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v8 = 1;
      v20 = 1;
      v9 |= 1u;
      v23 = v9;
    }
    if ( (unsigned __int8)RtlpValidateHeap(Src, 0LL) )
      TagHeap = RtlCreateTagHeap((__int64 *)Src, v9, a3, a4);
    RtlpValidateHeapHeaders(Src);
  }
  if ( v8 )
  {
    v10 = *((_QWORD *)Src + 44);
    if ( (*(_DWORD *)(v10 + 12))-- == 1 )
    {
      *(_QWORD *)(v10 + 16) = 0LL;
      v12 = (_BYTE *)(v10 + 8);
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), -1, -2);
      if ( v13 != -2 )
      {
        if ( (*v12 & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v10);
        DeferredCriticalSectionEvent = *(HANDLE *)(v10 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v10);
        LODWORD(v22) = 0;
        while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v12, (v13 & 2 | 1) + v13, v13) )
        {
          RtlBackoff((unsigned int *)&v22);
          _m_prefetchw(v12);
          v13 = *(_DWORD *)v12;
        }
        if ( (v13 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v19, 0);
            RtlpWakeByAddress(v10 + 8, 0);
            v15 = 0;
          }
          else
          {
            v15 = ZwSetEvent();
          }
          if ( v15 < 0 )
            RtlRaiseStatus(v15, v16, v17);
        }
      }
    }
  }
  return TagHeap;
}
