/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x1800E0478
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180077500 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpQueryIllegalCWDDevices(HANDLE KeyHandle)
{
  unsigned __int16 *v2; // rdi
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  void *v5; // rsi
  int v6; // ecx
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v10; // eax
  __int64 result; // rax
  ULONG ResultLength; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Value[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+58h] [rbp-B0h] BYREF

  if ( !KeyHandle || RtlInitUnicodeStringEx(&DestinationString, L"CWDIllegalInDLLSearch") < 0 )
  {
LABEL_25:
    result = (MEMORY[0x7FFE02D5] >> 4) & 3;
    if ( (_DWORD)result == 3 )
      result = 0xFFFFFFFFLL;
    Value[0] = result;
    goto LABEL_28;
  }
  v2 = (unsigned __int16 *)KeyValueInformation;
  v3 = NtQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x400u,
         &ResultLength);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -2147483643 )
    {
      while ( 1 )
      {
        Length = ResultLength;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
          break;
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
        v5 = Heap;
        if ( !Heap )
          break;
        v2 = (unsigned __int16 *)Heap;
        v10 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
        v4 = v10;
        if ( v10 >= 0 )
          goto LABEL_5;
        if ( v10 != -2147483643 )
          goto LABEL_22;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
      }
    }
    goto LABEL_25;
  }
  v5 = 0LL;
LABEL_5:
  v6 = *((_DWORD *)v2 + 1);
  if ( ((v6 - 3) & 0xFFFFFFFB) == 0 )
    goto LABEL_20;
  if ( v6 == 4 )
  {
    if ( *((_DWORD *)v2 + 2) == 4 )
    {
      ResultLength = 4;
      Value[0] = *((_DWORD *)v2 + 3);
    }
    else
    {
      v4 = -1073741820;
    }
    goto LABEL_21;
  }
  if ( v6 != 1 )
  {
LABEL_20:
    v4 = -1073741788;
    goto LABEL_21;
  }
  if ( ((unsigned __int8)Value & 3) != 0 )
  {
    v4 = -2147483646;
  }
  else
  {
    ResultLength = 4;
    DestinationString.Buffer = v2 + 6;
    DestinationString.Length = v2[4];
    DestinationString.MaximumLength = v2[4];
    v4 = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
  }
LABEL_21:
  if ( v5 )
LABEL_22:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( v4 < 0 )
    goto LABEL_25;
  result = Value[0] + 1;
  if ( (unsigned int)result > 3 )
    goto LABEL_25;
LABEL_28:
  if ( Value[0] == -1 )
  {
    LdrpIllegalCWDDevices = -1;
  }
  else if ( Value[0] == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    result = 16LL;
    if ( Value[0] != 2 )
      result = 0LL;
    LdrpIllegalCWDDevices = result;
  }
  return result;
}
