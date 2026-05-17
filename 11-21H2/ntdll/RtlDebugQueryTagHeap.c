/*
 * XREFs of RtlDebugQueryTagHeap @ 0x18010573C
 * Callers:
 *     RtlQueryTagHeap @ 0x1800FDCE0 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlQueryTagHeap @ 0x1800FDCE0 (RtlQueryTagHeap.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlDebugQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, _DWORD *a5)
{
  char v9; // si
  int v10; // ebx
  __int64 v11; // rbx
  _BYTE *v13; // rdi
  signed __int32 v14; // esi
  HANDLE DeferredCriticalSectionEvent; // r10
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  signed __int32 v20[8]; // [rsp+40h] [rbp-78h] BYREF
  char v21; // [rsp+70h] [rbp-48h]
  void *TagHeap; // [rsp+80h] [rbp-38h]
  __int64 v23; // [rsp+C0h] [rbp+8h] BYREF
  int v24; // [rsp+C8h] [rbp+10h]

  v24 = a2;
  v23 = a1;
  v9 = 0;
  v21 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlQueryTagHeap") )
  {
    v10 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    v24 = v10;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v21 = 1;
      v10 |= 1u;
      v24 = v10;
    }
    if ( (unsigned __int8)RtlpValidateHeap(a1, 0LL) )
      TagHeap = RtlQueryTagHeap(a1, v10, a3, a4, a5);
  }
  if ( v9 )
  {
    v11 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v11 + 12))-- == 1 )
    {
      *(_QWORD *)(v11 + 16) = 0LL;
      v13 = (_BYTE *)(v11 + 8);
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), -1, -2);
      if ( v14 != -2 )
      {
        if ( (*v13 & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v11);
        DeferredCriticalSectionEvent = *(HANDLE *)(v11 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v11);
        LODWORD(v23) = 0;
        while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)v13, (v14 & 2 | 1) + v14, v14) )
        {
          RtlBackoff((unsigned int *)&v23);
          _m_prefetchw(v13);
          v14 = *(_DWORD *)v13;
        }
        if ( (v14 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v20, 0);
            RtlpWakeByAddress(v11 + 8, 0);
            v16 = 0;
          }
          else
          {
            v16 = ZwSetEvent();
          }
          if ( v16 < 0 )
            RtlRaiseStatus(v16, v17, v18);
        }
      }
    }
  }
  return TagHeap;
}
