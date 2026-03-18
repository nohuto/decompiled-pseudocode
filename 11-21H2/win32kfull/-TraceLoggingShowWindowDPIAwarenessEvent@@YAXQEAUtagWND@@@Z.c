/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00CA134
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00CD6E0 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0159100 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  __int64 i; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 ProcessImageFileName; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(gpsi + 2236LL) & 0x20) == 0 )
  {
    v1 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
    v2 = v1;
    v3 = v1;
    if ( (v1 & 0xF) == 2 )
    {
      LOBYTE(v2) = v1 & 0xF;
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2) + 320); i; i = *(_QWORD *)(i + 664) )
      {
        if ( (**(_DWORD **)(i + 480) & 0x20000000) != 0 )
        {
          v3 = 128;
          break;
        }
      }
    }
    if ( (unsigned int)dword_1C03263F8 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x400000000000LL) )
      {
        v11 = v3;
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v4);
        ProcessImageFileName = PsGetProcessImageFileName(*CurrentProcessWin32Process);
        v13 = 50331648LL;
        v12 = ProcessImageFileName;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v8,
          (unsigned int)&unk_1C02F0D90,
          v9,
          v10,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11);
      }
    }
  }
}
