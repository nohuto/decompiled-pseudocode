/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800FE010
 * Callers:
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x18010A7A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800FFFC0 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  signed __int32 v7; // edi
  HANDLE DeferredCriticalSectionEvent; // r10
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
      v5 = 28LL;
      if ( *(_DWORD *)(a1 + 16) != -571548178 )
        v5 = 208LL;
      if ( *(_WORD *)(v5 + a1) == 0xFFFF )
        v6 = -1073741811;
      else
        v6 = RtlpSetHeapDebuggingInformation(a1, a2);
      if ( !--dword_180178D4C )
      {
        qword_180178D50 = 0LL;
        v7 = _InterlockedCompareExchange(&dword_180178D48, -1, -2);
        if ( v7 != -2 )
        {
          if ( (dword_180178D48 & 1) != 0 )
            RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
          DeferredCriticalSectionEvent = (HANDLE)qword_180178D58;
          if ( !qword_180178D58 )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent((__int64)&RtlpProcessHeapsListLock);
          v13 = 0;
          while ( v7 != _InterlockedCompareExchange(&dword_180178D48, (v7 & 2 | 1) + v7, v7) )
          {
            RtlBackoff(&v13);
            _m_prefetchw(&dword_180178D48);
            v7 = dword_180178D48;
          }
          if ( (v7 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
            {
              _InterlockedOr(v12, 0);
              RtlpWakeByAddress((unsigned __int64)&dword_180178D48, 0);
            }
            else
            {
              v9 = ZwSetEvent();
              if ( v9 < 0 )
                RtlRaiseStatus(v9, v10, v11);
            }
          }
        }
      }
      return v6;
    }
  }
  else
  {
    dword_180178E2C = *(_DWORD *)(a2 + 12);
    xmmword_180178E40 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_180178E30 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_180178E30) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
