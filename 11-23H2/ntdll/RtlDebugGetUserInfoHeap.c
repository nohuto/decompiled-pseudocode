/*
 * XREFs of RtlDebugGetUserInfoHeap @ 0x180106534
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180087664 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x1801228D8 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugGetUserInfoHeap(unsigned __int64 a1, int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  char v9; // r14
  int v11; // esi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  _BYTE *v15; // rsi
  signed __int32 v16; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v18; // eax
  signed __int32 v19[8]; // [rsp+48h] [rbp-88h] BYREF
  _DWORD *v20; // [rsp+68h] [rbp-68h]
  char UserInfoHeap; // [rsp+78h] [rbp-58h]
  char v22; // [rsp+79h] [rbp-57h]
  unsigned __int64 v23; // [rsp+88h] [rbp-48h]
  unsigned __int64 v24; // [rsp+D8h] [rbp+8h] BYREF
  int v25; // [rsp+E0h] [rbp+10h]

  v25 = a2;
  v24 = a1;
  UserInfoHeap = 0;
  v9 = 0;
  v22 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
    v20 = a5;
    return ((__int64 (__fastcall *)(unsigned __int64))qword_1801812B8)(a1);
  }
  else
  {
    if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlGetUserInfoHeap") )
    {
      v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
      v25 = v11;
      if ( (v11 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v9 = 1;
        v22 = 1;
        v11 |= 1u;
        v25 = v11;
      }
      RtlpValidateHeap(a1, 0LL);
      v12 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
      v23 = v12;
      if ( RtlpValidateHeapEntry(a1, v12, "RtlGetUserInfoHeap") )
        UserInfoHeap = RtlGetUserInfoHeap(a1, v11, a3, a4, a5);
    }
    else
    {
      UserInfoHeap = 0;
    }
    if ( v9 )
    {
      v13 = *(_QWORD *)(a1 + 352);
      if ( (*(_DWORD *)(v13 + 12))-- == 1 )
      {
        *(_QWORD *)(v13 + 16) = 0LL;
        v15 = (_BYTE *)(v13 + 8);
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), -1, -2);
        if ( v16 != -2 )
        {
          if ( (*v15 & 1) != 0 )
            RtlpNotOwnerCriticalSection((const void **)v13);
          DeferredCriticalSectionEvent = *(HANDLE *)(v13 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v13);
          LODWORD(v24) = 0;
          while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)v15, (v16 & 2 | 1) + v16, v16) )
          {
            RtlBackoff((unsigned int *)&v24);
            _m_prefetchw(v15);
            v16 = *(_DWORD *)v15;
          }
          if ( (v16 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
            {
              _InterlockedOr(v19, 0);
              RtlpWakeByAddress(v13 + 8, 0);
              v18 = 0;
            }
            else
            {
              v18 = ZwSetEvent();
            }
            if ( v18 < 0 )
              RtlRaiseStatus((unsigned int)v18);
          }
        }
      }
    }
    return UserInfoHeap;
  }
}
