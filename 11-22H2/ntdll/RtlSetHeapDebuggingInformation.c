/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800FDD4C
 * Callers:
 *     RtlSetHeapInformation @ 0x18007CB90 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x18010A960 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpEnumProcessHeaps @ 0x1800773DC (RtlpEnumProcessHeaps.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800FFC90 (RtlpSetHeapDebuggingInformation.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
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
      if ( !--dword_180182FCC )
      {
        qword_180182FD0 = 0LL;
        v7 = _InterlockedCompareExchange(&dword_180182FC8, -1, -2);
        if ( v7 != -2 )
        {
          if ( (dword_180182FC8 & 1) != 0 )
            RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
          DeferredCriticalSectionEvent = (HANDLE)qword_180182FD8;
          if ( !qword_180182FD8 )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent((__int64)&RtlpProcessHeapsListLock);
          v11 = 0;
          while ( v7 != _InterlockedCompareExchange(&dword_180182FC8, (v7 & 2 | 1) + v7, v7) )
          {
            RtlBackoff(&v11);
            _m_prefetchw(&dword_180182FC8);
            v7 = dword_180182FC8;
          }
          if ( (v7 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
            {
              _InterlockedOr(v10, 0);
              RtlpWakeByAddress((unsigned __int64)&dword_180182FC8, 0);
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
    dword_1801830AC = *(_DWORD *)(a2 + 12);
    xmmword_1801830C0 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_1801830B0 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_1801830B0) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
