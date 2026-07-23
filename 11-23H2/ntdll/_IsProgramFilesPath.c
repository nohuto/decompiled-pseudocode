/*
 * XREFs of _IsProgramFilesPath @ 0x180057B48
 * Callers:
 *     _IsOverlaySupportedPath @ 0x18000B1B4 (_IsOverlaySupportedPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180058DC0 (RtlQueryEnvironmentVariable_U.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x180090FF0 (_wcsnicmp.c)
 */

NTSTATUS __fastcall IsProgramFilesPath(wchar_t *String1, size_t *a2)
{
  NTSTATUS result; // eax
  wchar_t *Heap; // rax
  NTSTATUS v6; // eax
  wchar_t *Buffer; // rsi
  int v8; // ebx
  size_t v9; // rdi
  _UNICODE_STRING Value; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[704]; // [rsp+30h] [rbp-D0h] BYREF

  Value.Buffer = (wchar_t *)v11;
  Value.MaximumLength = 702;
  *a2 = 0LL;
  result = RtlQueryEnvironmentVariable_U(0LL, (PUNICODE_STRING)&Name, &Value);
  if ( result == -1073741789 )
  {
    Value.MaximumLength = Value.Length + 2;
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned __int16)(Value.Length + 2));
    Value.Buffer = Heap;
  }
  else
  {
    if ( result < 0 )
      return result;
    Heap = Value.Buffer;
  }
  if ( !Heap )
    return -1073741637;
  v6 = RtlQueryEnvironmentVariable_U(0LL, (PUNICODE_STRING)&Name, &Value);
  Buffer = Value.Buffer;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Value.Buffer[v9] );
    if ( wcsnicmp(String1, Value.Buffer, v9) )
      v8 = -1073741637;
    else
      *a2 = v9;
  }
  if ( Buffer != (wchar_t *)v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Value.Buffer);
  return v8;
}
