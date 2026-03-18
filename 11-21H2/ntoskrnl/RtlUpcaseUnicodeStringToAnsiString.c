/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1409B58B0
 * Callers:
 *     DifRtlUpcaseUnicodeStringToAnsiStringWrapper @ 0x14061BFB0 (DifRtlUpcaseUnicodeStringToAnsiStringWrapper.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x1402D7DE0 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140759990 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  ULONG v6; // eax
  __int64 result; // rax
  _WORD *v8; // r15
  PCHAR *v9; // rdi
  ULONG v10; // edx
  NTSTATUS v11; // ebx
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(a2);
  BytesInMultiByteString = v6;
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  v8 = (_WORD *)(a1 + 2);
  v9 = (PCHAR *)(a1 + 8);
  result = AllocateOrValidateCharStringBuffer(a3, v6, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
  if ( (int)result >= 0 )
  {
    v11 = RtlUpcaseUnicodeToMultiByteN(*v9, (unsigned __int16)*v8, &BytesInMultiByteString, a2->Buffer, a2->Length);
    if ( v11 >= 0 )
    {
      v10 = BytesInMultiByteString;
      (*v9)[BytesInMultiByteString] = 0;
      *(_WORD *)a1 = v10;
      v11 = 0;
    }
    if ( v11 < 0 )
    {
      if ( a3 )
      {
        ExFreePoolWithTag(*v9, v10);
        *v9 = 0LL;
        *v8 = 0;
      }
    }
    return (unsigned int)v11;
  }
  return result;
}
