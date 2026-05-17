/*
 * XREFs of RtlDebugCreateTagHeap @ 0x18010492C
 * Callers:
 *     RtlCreateTagHeap @ 0x18007F9F0 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlCreateTagHeap @ 0x18007F9F0 (RtlCreateTagHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180106FF4 (RtlpValidateHeapHeaders.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
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
  signed __int32 v17[8]; // [rsp+20h] [rbp-68h] BYREF
  char v18; // [rsp+40h] [rbp-48h]
  unsigned int TagHeap; // [rsp+44h] [rbp-44h]
  _DWORD *v20; // [rsp+90h] [rbp+8h] BYREF
  int v21; // [rsp+98h] [rbp+10h]

  v21 = a2;
  v20 = Src;
  v8 = 0;
  v18 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v9 = Src[29] | 0x10000000 | a2;
    v21 = v9;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v8 = 1;
      v18 = 1;
      v9 |= 1u;
      v21 = v9;
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
        LODWORD(v20) = 0;
        while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v12, (v13 & 2 | 1) + v13, v13) )
        {
          RtlBackoff((unsigned int *)&v20);
          _m_prefetchw(v12);
          v13 = *(_DWORD *)v12;
        }
        if ( (v13 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v17, 0);
            RtlpWakeByAddress(v10 + 8, 0);
            v15 = 0;
          }
          else
          {
            v15 = ZwSetEvent();
          }
          if ( v15 < 0 )
            RtlRaiseStatus((unsigned int)v15);
        }
      }
    }
  }
  return TagHeap;
}
