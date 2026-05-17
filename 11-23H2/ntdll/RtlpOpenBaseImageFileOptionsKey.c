/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x180077070
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007DED0 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800773C0 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_180188188;
  Handle = (HANDLE)qword_180188188;
  if ( qword_180188188 )
    goto LABEL_2;
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle, 9LL);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_180188188, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
      v1 = (HANDLE)qword_180188188;
    }
    else
    {
      v1 = Handle;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
