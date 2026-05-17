/*
 * XREFs of RtlDebugQueryTagHeap @ 0x180106858
 * Callers:
 *     RtlQueryTagHeap @ 0x1800FEE20 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlQueryTagHeap @ 0x1800FEE20 (RtlQueryTagHeap.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x1801228D8 (RtlpHeapExceptionFilter.c)
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
  signed __int32 v18[8]; // [rsp+30h] [rbp-78h] BYREF
  char v19; // [rsp+60h] [rbp-48h]
  void *TagHeap; // [rsp+70h] [rbp-38h]
  __int64 v21; // [rsp+B0h] [rbp+8h] BYREF
  int v22; // [rsp+B8h] [rbp+10h]

  v22 = a2;
  v21 = a1;
  v9 = 0;
  v19 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlQueryTagHeap") )
  {
    v10 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    v22 = v10;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v19 = 1;
      v10 |= 1u;
      v22 = v10;
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
        LODWORD(v21) = 0;
        while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)v13, (v14 & 2 | 1) + v14, v14) )
        {
          RtlBackoff((unsigned int *)&v21);
          _m_prefetchw(v13);
          v14 = *(_DWORD *)v13;
        }
        if ( (v14 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v18, 0);
            RtlpWakeByAddress(v11 + 8, 0);
            v16 = 0;
          }
          else
          {
            v16 = ZwSetEvent();
          }
          if ( v16 < 0 )
            RtlRaiseStatus((unsigned int)v16);
        }
      }
    }
  }
  return TagHeap;
}
