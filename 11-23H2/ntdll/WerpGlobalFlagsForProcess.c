/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x1800519C4
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800512A0 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B3D0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     WerpPathTail @ 0x1800524C4 (WerpPathTail.c)
 *     RtlUnicodeStringToInteger @ 0x180077500 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x1800A11D0 (NtQueryInformationProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  __int64 v3; // rax
  const WCHAR *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  HANDLE v7; // rdi
  unsigned __int16 *v8; // rbx
  NTSTATUS v9; // eax
  void *v10; // rsi
  int v11; // ecx
  ULONG v12; // r14d
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v15; // eax
  ULONG Length[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  ULONG Destination; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination_8; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-58h]
  _BYTE KeyValueInformation[1024]; // [rsp+2C8h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  memset_thunk_772440563353939046(ProcessInformation, 0, 0x220uLL);
  Destination = 0;
  Destination_8 = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(v23);
    v4 = (const WCHAR *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(v3 + 2 * v5) );
      v6 = 2 * v5 + 202;
      Destination_8.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      if ( Destination_8.Buffer )
      {
        Destination_8.MaximumLength = v6;
        if ( RtlAppendUnicodeToString(
               &Destination_8,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString(&Destination_8, v4) >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination_8;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            v7 = KeyHandle;
            if ( RtlInitUnicodeStringEx(&DestinationString, L"GlobalFlag") >= 0 )
            {
              v8 = (unsigned __int16 *)KeyValueInformation;
              v9 = NtQueryValueKey(
                     v7,
                     &DestinationString,
                     KeyValuePartialInformation,
                     KeyValueInformation,
                     0x400u,
                     Length);
              if ( v9 < 0 )
              {
                if ( v9 == -2147483643 )
                {
                  while ( 1 )
                  {
                    v12 = Length[0];
                    ProcessHeap = NtCurrentPeb()->ProcessHeap;
                    if ( !ProcessHeap )
                      break;
                    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length[0]);
                    v10 = Heap;
                    if ( !Heap )
                      break;
                    v8 = (unsigned __int16 *)Heap;
                    v15 = NtQueryValueKey(v7, &DestinationString, KeyValuePartialInformation, Heap, v12, Length);
                    if ( v15 >= 0 )
                      goto LABEL_17;
                    if ( v15 != -2147483643 )
                      goto LABEL_31;
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
                  }
                }
              }
              else
              {
                v10 = 0LL;
LABEL_17:
                v11 = *((_DWORD *)v8 + 1);
                if ( ((v11 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v11 == 4 )
                  {
                    if ( *((_DWORD *)v8 + 2) == 4 )
                    {
                      Length[0] = 4;
                      Destination = *((_DWORD *)v8 + 3);
                    }
                  }
                  else if ( v11 == 1 && ((unsigned __int8)&Destination & 3) == 0 )
                  {
                    Length[0] = 4;
                    DestinationString.Buffer = v8 + 6;
                    DestinationString.Length = v8[4];
                    DestinationString.MaximumLength = v8[4];
                    RtlUnicodeStringToInteger(&DestinationString, 0, &Destination);
                  }
                }
                if ( v10 )
LABEL_31:
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Destination_8.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination_8.Buffer);
  return Destination;
}
