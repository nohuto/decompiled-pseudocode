/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x180076A00
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007689C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007D860 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180076D50 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_1801850B8;
  Handle = (HANDLE)qword_1801850B8;
  if ( qword_1801850B8 )
    goto LABEL_2;
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle, 9LL);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_1801850B8, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
      v1 = (HANDLE)qword_1801850B8;
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
