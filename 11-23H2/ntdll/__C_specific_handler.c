/*
 * XREFs of __C_specific_handler @ 0x18008F7F0
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x1800A097C (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x18001FF80 (RtlUnwindEx.c)
 *     _NLG_Notify @ 0x1800958D0 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x180095900 (__NLG_Return2.c)
 *     __except_validate_context_record @ 0x180095908 (__except_validate_context_record.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  DWORD64 ImageBase; // r15
  DWORD *HandlerData; // rbx
  unsigned __int64 v10; // rbp
  DWORD ScopeIndex; // edi
  DWORD v12; // eax
  int v13; // ecx
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  DWORD i; // r9d
  __int64 v18; // rax
  DWORD v19; // edx
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF

  _except_validate_context_record(ContextRecord);
  ImageBase = DispatcherContext->ImageBase;
  HandlerData = (DWORD *)DispatcherContext->HandlerData;
  v10 = DispatcherContext->ControlPc - ImageBase;
  ScopeIndex = DispatcherContext->ScopeIndex;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v15 = DispatcherContext->TargetIp - ImageBase;
    while ( 1 )
    {
      v19 = *HandlerData;
      if ( ScopeIndex >= *HandlerData )
        break;
      v16 = 2LL * ScopeIndex;
      if ( v10 >= HandlerData[4 * ScopeIndex + 1] && v10 < HandlerData[4 * ScopeIndex + 2] )
      {
        if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
        {
          for ( i = 0; i < v19; ++i )
          {
            if ( v15 >= HandlerData[4 * i + 1]
              && v15 < HandlerData[4 * i + 2]
              && HandlerData[4 * i + 4] == HandlerData[4 * ScopeIndex + 4]
              && HandlerData[4 * i + 3] == HandlerData[4 * ScopeIndex + 3] )
            {
              break;
            }
          }
          if ( i != v19 )
            return 1;
        }
        v18 = HandlerData[4 * ScopeIndex + 4];
        if ( (_DWORD)v18 )
        {
          if ( v15 == v18 )
            return 1;
        }
        else
        {
          DispatcherContext->ScopeIndex = ScopeIndex + 1;
          LOBYTE(v16) = 1;
          ((void (__fastcall *)(__int64, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(v16, EstablisherFrame);
        }
      }
      ++ScopeIndex;
    }
  }
  else
  {
    v20[0] = ExceptionRecord;
    v20[1] = ContextRecord;
    while ( ScopeIndex < *HandlerData )
    {
      if ( v10 >= HandlerData[4 * ScopeIndex + 1] && v10 < HandlerData[4 * ScopeIndex + 2] )
      {
        v12 = HandlerData[4 * ScopeIndex + 4];
        if ( v12 )
        {
          if ( HandlerData[4 * ScopeIndex + 3] == 1 )
            goto LABEL_10;
          v13 = ((__int64 (__fastcall *)(_QWORD *, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(
                  v20,
                  EstablisherFrame);
          v12 = HandlerData[4 * ScopeIndex + 4];
          if ( v13 < 0 )
            return 0;
          if ( v13 > 0 )
          {
LABEL_10:
            NLG_Notify(ImageBase + v12, EstablisherFrame, 1LL);
            RtlUnwindEx(
              EstablisherFrame,
              (PVOID)(ImageBase + HandlerData[4 * ScopeIndex + 4]),
              ExceptionRecord,
              (PVOID)ExceptionRecord->ExceptionCode,
              DispatcherContext->ContextRecord,
              DispatcherContext->HistoryTable);
            _NLG_Return2();
          }
        }
      }
      ++ScopeIndex;
    }
  }
  return 1;
}
