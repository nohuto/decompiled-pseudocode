/*
 * XREFs of SmpConfigureEnvironment @ 0x14000FB10
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x140014B37 (memcpy_0.c)
 */

__int64 __fastcall SmpConfigureEnvironment(wchar_t *Str1, __int64 a2, const WCHAR *a3, unsigned int a4)
{
  SIZE_T v5; // rdi
  NTSTATUS v7; // edx
  __int64 v8; // rax
  WCHAR *Heap; // rax
  const WCHAR *v11; // rbx
  struct _UNICODE_STRING Value; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = a4;
  RtlInitUnicodeString(&DestinationString, Str1);
  RtlInitUnicodeString(&Value, a3);
  v7 = RtlSetEnvironmentVariable(0LL, &DestinationString, &Value);
  if ( v7 < 0 )
  {
    v8 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v8 + 2] = 7714;
    SmpGlobalLog[2 * v8 + 3] = v7;
    *(_QWORD *)&SmpGlobalLog[2 * v8 + 4] = Str1;
    return (unsigned int)v7;
  }
  if ( !_wcsicmp(Str1, L"Path") && ++SmpCalledConfigEnv == 2 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v5);
    SmpDefaultLibPathBuffer = (__int64)Heap;
    v11 = Heap;
    if ( !Heap )
      return 3221225495LL;
    memcpy_0(Heap, a3, v5);
    RtlInitUnicodeString(&SmpDefaultLibPath, v11);
  }
  return 0LL;
}
