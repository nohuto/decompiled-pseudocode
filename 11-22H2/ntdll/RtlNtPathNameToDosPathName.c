/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x1800D7460
 * Callers:
 *     <none>
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180014AC0 (RtlPrefixUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001D110 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

NTSTATUS __cdecl RtlNtPathNameToDosPathName(
        ULONG Flags,
        PRTL_UNICODE_STRING_BUFFER Path,
        PULONG Disposition,
        PWSTR *FilePart)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v8; // rbp
  const _UNICODE_STRING *v9; // r14
  unsigned __int16 *v10; // r12
  unsigned __int16 v11; // si
  SIZE_T v12; // r8
  RTL_BUFFER *p_ByteBuffer; // rax
  unsigned __int16 *p_Size; // r15
  wchar_t *Buffer; // rcx
  __int64 Length; // r8
  unsigned __int16 v17; // si
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx

  v4 = 0;
  v8 = 0LL;
  if ( Disposition )
    *Disposition = 0;
  if ( !Path )
    return -1073741811;
  if ( Flags )
    return -1073741811;
  if ( FilePart )
  {
    if ( *FilePart )
    {
      v8 = *FilePart - Path->String.Buffer;
      if ( v8 >= (unsigned __int64)Path->String.Length >> 1 )
        return -1073741811;
    }
  }
  v9 = &RtlpDosDevicesUncPrefix;
  if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesUncPrefix, &Path->String, 1u) )
  {
    v10 = (unsigned __int16 *)&unk_180132520;
    if ( Disposition )
      *Disposition = 2;
    goto LABEL_14;
  }
  v9 = &RtlpDosDevicesPrefix;
  if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesPrefix, &Path->String, 1u) )
  {
    if ( !Disposition )
      return v4;
    v18 = RtlDetermineDosPathNameType_Ustr((__int64)Path);
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_31;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_31;
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( (unsigned int)(v23 - 1) > 1 )
              return v4;
LABEL_31:
            *Disposition = 4;
            return v4;
          }
        }
      }
    }
    *Disposition = 1;
    return v4;
  }
  v10 = (unsigned __int16 *)&RtlpEmptyString;
  if ( Disposition )
    *Disposition = 3;
LABEL_14:
  v11 = (*v10 >> 1) + (Path->String.Length >> 1) - (v9->Length >> 1);
  v12 = 2LL * v11 + 2;
  if ( v12 > 0xFFFE )
    return -1073741562;
  p_ByteBuffer = &Path->ByteBuffer;
  p_Size = (unsigned __int16 *)&Path->ByteBuffer.Size;
  if ( Path == (PRTL_UNICODE_STRING_BUFFER)-16LL || v12 > *(_QWORD *)p_Size )
  {
    if ( (int)RtlpEnsureBufferSize(0, (__int64)&Path->ByteBuffer, v12) < 0 )
      return -1073741801;
    p_ByteBuffer = &Path->ByteBuffer;
  }
  Buffer = (wchar_t *)p_ByteBuffer->Buffer;
  Length = Path->String.Length;
  Path->String.MaximumLength = *p_Size;
  Path->String.Buffer = Buffer;
  memmove(&Buffer[(unsigned __int64)*v10 >> 1], &Buffer[(unsigned __int64)v9->Length >> 1], Length - v9->Length);
  memmove(Path->String.Buffer, *((const void **)v10 + 1), *v10);
  v17 = 2 * v11;
  Path->String.Length = v17;
  Path->String.Buffer[(unsigned __int64)v17 >> 1] = 0;
  if ( v8 )
    *FilePart = &Path->String.Buffer[v8 + ((unsigned __int64)*v10 >> 1) - ((unsigned __int64)v9->Length >> 1)];
  return v4;
}
