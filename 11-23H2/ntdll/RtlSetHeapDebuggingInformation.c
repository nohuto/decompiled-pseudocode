/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800FF15C
 * Callers:
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x18010BE00 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801010A0 (RtlpSetHeapDebuggingInformation.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  signed __int32 v7; // edi
  HANDLE DeferredCriticalSectionEvent; // r10
  int v9; // eax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

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
      if ( !--dword_18018606C )
      {
        qword_180186070 = 0LL;
        v7 = _InterlockedCompareExchange(&dword_180186068, -1, -2);
        if ( v7 != -2 )
        {
          if ( (dword_180186068 & 1) != 0 )
            RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
          DeferredCriticalSectionEvent = (HANDLE)qword_180186078;
          if ( !qword_180186078 )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent((__int64)&RtlpProcessHeapsListLock);
          v11 = 0;
          while ( v7 != _InterlockedCompareExchange(&dword_180186068, (v7 & 2 | 1) + v7, v7) )
          {
            RtlBackoff(&v11);
            _m_prefetchw(&dword_180186068);
            v7 = dword_180186068;
          }
          if ( (v7 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
            {
              _InterlockedOr(v10, 0);
              RtlpWakeByAddress((unsigned __int64)&dword_180186068, 0);
            }
            else
            {
              v9 = ZwSetEvent();
              if ( v9 < 0 )
                RtlRaiseStatus((unsigned int)v9);
            }
          }
        }
      }
      return v6;
    }
  }
  else
  {
    dword_18018614C = *(_DWORD *)(a2 + 12);
    xmmword_180186160 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_180186150 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_180186150) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
