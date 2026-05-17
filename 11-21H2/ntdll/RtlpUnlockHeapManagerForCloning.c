/*
 * XREFs of RtlpUnlockHeapManagerForCloning @ 0x18010008C
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800FDAB4 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800FE6D8 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpCSparseBitmapUnlock @ 0x18005656C (RtlpCSparseBitmapUnlock.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpHpUnlockHeapForCloning @ 0x18011FB18 (RtlpHpUnlockHeapForCloning.c)
 */

signed __int64 __fastcall RtlpUnlockHeapManagerForCloning(unsigned int a1, unsigned int a2)
{
  struct _PEB *v2; // r13
  unsigned int i; // ebp
  void **ProcessHeaps; // rax
  void *v7; // rbx
  volatile signed __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  _BYTE *v12; // rdi
  signed __int32 v13; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  signed __int64 result; // rax
  signed __int32 v19; // ebx
  HANDLE v20; // r10
  __int64 v21; // rdx
  __int64 v22; // r8
  signed __int32 v23[8]; // [rsp+0h] [rbp-68h] BYREF
  int v24; // [rsp+20h] [rbp-48h] BYREF
  char v25; // [rsp+24h] [rbp-44h]
  void *v26; // [rsp+28h] [rbp-40h]
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+18h] BYREF

  v2 = NtCurrentPeb();
  for ( i = 0; i < a2; ++i )
  {
    ProcessHeaps = v2->ProcessHeaps;
    v7 = ProcessHeaps[i];
    if ( *((_DWORD *)v7 + 4) == -571548178 )
    {
      if ( (*((_BYTE *)v7 + 20) & 1) == 0 )
        RtlpHpUnlockHeapForCloning(ProcessHeaps[i], a1);
    }
    else if ( (*((_BYTE *)v7 + 112) & 1) == 0 )
    {
      if ( *((_BYTE *)v7 + 418) == 2 )
      {
        v8 = (volatile signed __int64 *)*((_QWORD *)v7 + 51);
        if ( v8 )
        {
          if ( a1 )
            *v8 = 1LL;
          RtlReleaseSRWLockExclusive(v8);
        }
      }
      if ( a1 )
      {
        v9 = *((_QWORD *)v7 + 44);
        *((_WORD *)v7 + 208) = 0;
        *(_QWORD *)(v9 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
        *(_DWORD *)(v9 + 8) = -2;
        *(_DWORD *)(v9 + 12) = 1;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
      v10 = *((_QWORD *)v7 + 44);
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
          v27 = 0;
          while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v12, (v13 & 2 | 1) + v13, v13) )
          {
            RtlBackoff(&v27);
            _m_prefetchw(v12);
            v13 = *(_DWORD *)v12;
          }
          if ( (v13 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
            {
              _InterlockedOr(v23, 0);
              RtlpWakeByAddress(v10 + 8, 0);
            }
            else
            {
              v15 = ZwSetEvent();
              if ( v15 < 0 )
                RtlRaiseStatus(v15, v16, v17);
            }
          }
        }
      }
    }
  }
  if ( a1 )
  {
    qword_180178D50 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_180178D48 = -2;
    dword_180178D4C = 1;
    qword_180178D58 = 0LL;
    qword_18017B740 = -1LL;
    qword_18017B738 = 1LL;
  }
  v24 = 1;
  v26 = &unk_18017B720;
  v25 = -1;
  result = RtlpCSparseBitmapUnlock((__int64)&v24);
  if ( !--dword_180178D4C )
  {
    qword_180178D50 = 0LL;
    result = (unsigned int)_InterlockedCompareExchange(&dword_180178D48, -1, -2);
    v19 = result;
    if ( (_DWORD)result != -2 )
    {
      if ( (dword_180178D48 & 1) != 0 )
        RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
      v20 = (HANDLE)qword_180178D58;
      if ( !qword_180178D58 )
        v20 = RtlpCreateDeferredCriticalSectionEvent((__int64)&RtlpProcessHeapsListLock);
      v28 = 0;
      while ( 1 )
      {
        result = (unsigned int)_InterlockedCompareExchange(&dword_180178D48, (v19 & 2 | 1) + v19, v19);
        if ( v19 == (_DWORD)result )
          break;
        RtlBackoff(&v28);
        _m_prefetchw(&dword_180178D48);
        v19 = dword_180178D48;
      }
      if ( (v19 & 2) != 0 )
      {
        if ( v20 == (HANDLE)-1LL )
        {
          _InterlockedOr(v23, 0);
          return RtlpWakeByAddress((unsigned __int64)&dword_180178D48, 0);
        }
        else
        {
          result = ZwSetEvent();
          if ( (int)result < 0 )
            RtlRaiseStatus(result, v21, v22);
        }
      }
    }
  }
  return result;
}
