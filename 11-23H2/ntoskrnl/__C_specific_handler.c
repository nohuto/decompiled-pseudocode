/*
 * XREFs of __C_specific_handler @ 0x1403D7EF0
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x14041A820 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x1402A4FD0 (RtlUnwindEx.c)
 *     KeCheckStackAndTargetAddress @ 0x140346BD0 (KeCheckStackAndTargetAddress.c)
 *     _NLG_Notify @ 0x1403D94A0 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x1403D94D0 (__NLG_Return2.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  DWORD64 ImageBase; // r15
  unsigned __int64 v9; // rbp
  DWORD *HandlerData; // rbx
  DWORD ScopeIndex; // edi
  DWORD v12; // eax
  __int64 v13; // rcx
  int v14; // ecx
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  DWORD i; // r9d
  __int64 v19; // rax
  DWORD v20; // edx
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF

  KeCheckStackAndTargetAddress(ContextRecord->Rip, ContextRecord->Rsp);
  ImageBase = DispatcherContext->ImageBase;
  v9 = DispatcherContext->ControlPc - ImageBase;
  HandlerData = (DWORD *)DispatcherContext->HandlerData;
  ScopeIndex = DispatcherContext->ScopeIndex;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v16 = DispatcherContext->TargetIp - ImageBase;
    while ( 1 )
    {
      v20 = *HandlerData;
      if ( ScopeIndex >= *HandlerData )
        break;
      v17 = 2LL * ScopeIndex;
      if ( v9 >= HandlerData[4 * ScopeIndex + 1] && v9 < HandlerData[4 * ScopeIndex + 2] )
      {
        if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
        {
          for ( i = 0; i < v20; ++i )
          {
            if ( v16 >= HandlerData[4 * i + 1]
              && v16 < HandlerData[4 * i + 2]
              && HandlerData[4 * i + 4] == HandlerData[4 * ScopeIndex + 4]
              && HandlerData[4 * i + 3] == HandlerData[4 * ScopeIndex + 3] )
            {
              break;
            }
          }
          if ( i != v20 )
            return 1;
        }
        v19 = HandlerData[4 * ScopeIndex + 4];
        if ( (_DWORD)v19 )
        {
          if ( v16 == v19 )
            return 1;
        }
        else
        {
          DispatcherContext->ScopeIndex = ScopeIndex + 1;
          LOBYTE(v17) = 1;
          ((void (__fastcall *)(__int64, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(v17, EstablisherFrame);
        }
      }
      ++ScopeIndex;
    }
  }
  else
  {
    v21[0] = ExceptionRecord;
    v21[1] = ContextRecord;
    while ( ScopeIndex < *HandlerData )
    {
      if ( v9 >= HandlerData[4 * ScopeIndex + 1] && v9 < HandlerData[4 * ScopeIndex + 2] )
      {
        v12 = HandlerData[4 * ScopeIndex + 4];
        if ( v12 )
        {
          v13 = HandlerData[4 * ScopeIndex + 3];
          if ( (_DWORD)v13 == 1 )
            goto LABEL_10;
          v14 = ((__int64 (__fastcall *)(_QWORD *, void *))(ImageBase + v13))(v21, EstablisherFrame);
          v12 = HandlerData[4 * ScopeIndex + 4];
          if ( v14 < 0 )
            return 0;
          if ( v14 > 0 )
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
