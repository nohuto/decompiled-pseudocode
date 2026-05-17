/*
 * XREFs of RtlDebugGetUserInfoHeap @ 0x180105420
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlpValidateHeapEntry @ 0x18007C0D8 (RtlpValidateHeapEntry.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugGetUserInfoHeap(unsigned __int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  char v9; // r14
  unsigned int v11; // esi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  _BYTE *v15; // rsi
  signed __int32 v16; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  signed __int32 v21[8]; // [rsp+58h] [rbp-88h] BYREF
  _DWORD *v22; // [rsp+78h] [rbp-68h]
  char UserInfoHeap; // [rsp+88h] [rbp-58h]
  char v24; // [rsp+89h] [rbp-57h]
  unsigned __int64 v25; // [rsp+98h] [rbp-48h]
  unsigned __int64 v26; // [rsp+E8h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+F0h] [rbp+10h]

  v27 = a2;
  v26 = a1;
  UserInfoHeap = 0;
  v9 = 0;
  v24 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
    v22 = a5;
    return ((__int64 (__fastcall *)(unsigned __int64))qword_1801742B8)(a1);
  }
  else
  {
    if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlGetUserInfoHeap") )
    {
      v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
      v27 = v11;
      if ( (v11 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v9 = 1;
        v24 = 1;
        v11 |= 1u;
        v27 = v11;
      }
      RtlpValidateHeap(a1, 0LL);
      v12 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
      v25 = v12;
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
          LODWORD(v26) = 0;
          while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)v15, (v16 & 2 | 1) + v16, v16) )
          {
            RtlBackoff((unsigned int *)&v26);
            _m_prefetchw(v15);
            v16 = *(_DWORD *)v15;
          }
          if ( (v16 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
            {
              _InterlockedOr(v21, 0);
              RtlpWakeByAddress(v13 + 8, 0);
              v18 = 0;
            }
            else
            {
              v18 = ZwSetEvent();
            }
            if ( v18 < 0 )
              RtlRaiseStatus(v18, v19, v20);
          }
        }
      }
    }
    return UserInfoHeap;
  }
}
