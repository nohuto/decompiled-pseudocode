/*
 * XREFs of RtlDebugZeroHeap @ 0x180107B78
 * Callers:
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x1801228D8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugZeroHeap(__int64 a1, int a2)
{
  char v4; // si
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rbx
  _BYTE *v10; // rdi
  signed __int32 v11; // esi
  HANDLE DeferredCriticalSectionEvent; // r10
  int v13; // eax
  signed __int32 v14[8]; // [rsp+38h] [rbp-68h] BYREF
  char v15; // [rsp+58h] [rbp-48h]
  unsigned int v16; // [rsp+5Ch] [rbp-44h]
  __int64 v17; // [rsp+A8h] [rbp+8h] BYREF
  int v18; // [rsp+B0h] [rbp+10h]

  v18 = a2;
  v17 = a1;
  v4 = 0;
  v15 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(__int64))qword_1801812E0)(a1);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
  v18 = v6;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v4 = 1;
    v15 = 1;
    v6 |= 1u;
    v18 = v6;
  }
  if ( (unsigned __int8)RtlpValidateHeap(a1, 0LL) )
    v16 = RtlZeroHeap(a1, v6, v7);
  else
LABEL_7:
    v16 = -1073741811;
  if ( v4 )
  {
    v8 = *(_QWORD *)(a1 + 352);
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
