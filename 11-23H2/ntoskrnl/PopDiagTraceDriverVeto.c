/*
 * XREFs of PopDiagTraceDriverVeto @ 0x140AA78B0
 * Callers:
 *     PopCompleteNotifyTransitionCommon @ 0x14059098C (PopCompleteNotifyTransitionCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopDiagGetDriverName @ 0x140591DB4 (PopDiagGetDriverName.c)
 */

char __fastcall PopDiagTraceDriverVeto(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  unsigned __int16 Length; // cx
  __int16 v6; // ax
  ULONG v7; // r8d
  unsigned int v8; // r9d
  __int64 v9; // rax
  ULONG v10; // r9d
  __int64 v11; // rcx
  __int16 DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  __int16 DestinationString_4; // [rsp+3Ch] [rbp-CCh] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  wchar_t *Buffer; // [rsp+68h] [rbp-A0h]
  int v18; // [rsp+70h] [rbp-98h]
  int v19; // [rsp+74h] [rbp-94h]
  WCHAR SourceString[64]; // [rsp+98h] [rbp-70h] BYREF
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  v2 = &retaddr;
  DestinationString_8 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DRIVERVETO);
    if ( (_BYTE)v2 )
    {
      if ( PopDiagGetDriverName(a1, SourceString) < 0 )
      {
        RtlInitUnicodeString(&DestinationString_8, &word_140A92580);
        Length = DestinationString_8.Length;
        v6 = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString_8, SourceString);
        Length = DestinationString_8.Length;
        v6 = DestinationString_8.Length >> 1;
      }
      v7 = *(unsigned __int16 *)(a2 - 120);
      UserData.Ptr = (ULONGLONG)&DestinationString;
      DestinationString = v6;
      DestinationString_4 = (unsigned __int16)v7 >> 1;
      *(_QWORD *)&UserData.Size = 2LL;
      v8 = 1;
      if ( v6 )
      {
        v8 = 2;
        Buffer = DestinationString_8.Buffer;
        v18 = Length;
        v19 = 0;
      }
      v9 = 2LL * v8;
      v10 = v8 + 1;
      *(&UserData.Ptr + v9) = (ULONGLONG)&DestinationString_4;
      *((_QWORD *)&UserData.Size + v9) = 2LL;
      if ( (unsigned __int16)v7 >> 1 )
      {
        v11 = 2LL * v10++;
        *(&UserData.Ptr + v11) = *(_QWORD *)(a2 - 112);
        *(&UserData.Size + 2 * v11) = v7;
        *(&UserData.Reserved + 2 * v11) = 0;
      }
      LOBYTE(v2) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DRIVERVETO, 0LL, v10, &UserData);
    }
  }
  return (char)v2;
}
