/*
 * XREFs of SmpQueryEnvVariable @ 0x140005CFC
 * Callers:
 *     SmpParseCommandLine @ 0x140005150 (SmpParseCommandLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpQueryEnvVariable(__int64 a1, const UNICODE_STRING *a2, struct _UNICODE_STRING *a3)
{
  WCHAR *v3; // rdi
  NTSTATUS v6; // ecx
  USHORT Length; // ax
  __int64 v8; // rax
  struct _UNICODE_STRING Value; // [rsp+20h] [rbp-10h] BYREF

  v3 = SmpDefaultEnvironment;
  *(_DWORD *)&Value.Length = 0x10000000;
  Value.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 0x1000uLL);
  if ( !Value.Buffer )
    return 3221225626LL;
  v6 = RtlQueryEnvironmentVariable_U(v3, a2, &Value);
  if ( v6 == -1073741789 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Value.Buffer);
    Length = Value.Length;
    Value.Length = 0;
    Value.MaximumLength = Length + 2;
    Value.Buffer = (PWSTR)RtlAllocateHeap(
                            *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                            SmBaseTag,
                            (unsigned __int16)(Length + 2));
    if ( Value.Buffer )
    {
      v6 = RtlQueryEnvironmentVariable_U(v3, a2, &Value);
      goto LABEL_5;
    }
    return 3221225626LL;
  }
LABEL_5:
  if ( v6 >= 0 )
  {
    *a3 = Value;
  }
  else
  {
    v8 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v8 + 2] = 8952;
    SmpGlobalLog[2 * v8 + 3] = v6;
    *(_QWORD *)&SmpGlobalLog[2 * v8 + 4] = a2;
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Value.Buffer);
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v6;
}
