/*
 * XREFs of sub_1409F4B98 @ 0x1409F4B98
 * Callers:
 *     sub_140796D80 @ 0x140796D80 (sub_140796D80.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x14075AA20 (RtlUTF8ToUnicodeN.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_1409F4B98(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  char v4; // bl
  __int64 v5; // rsi
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rbp
  __int64 v8; // rdx
  const CHAR *v10; // r9
  unsigned __int16 v11; // di
  unsigned int v12; // r15d
  ULONG UTF8StringByteCount; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  DestinationString = 0LL;
  v4 = 1;
  v5 = *(_QWORD *)(v2 + 392);
  if ( v5 == qword_140D05008 )
  {
    RtlInitUnicodeString(&DestinationString, L"Host");
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
  }
  else
  {
    v8 = *(unsigned __int16 *)(v5 + 4224);
    UnicodeStringActualByteCount = 0;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(64LL, 2 * v8 + 2, 1182233669LL);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      return 1;
    v10 = *(const CHAR **)(v5 + 4216);
    UTF8StringByteCount = *(unsigned __int16 *)(v5 + 4224);
    DestinationString.MaximumLength = 2 * (UTF8StringByteCount + 1);
    RtlUTF8ToUnicodeN(
      DestinationString.Buffer,
      DestinationString.MaximumLength,
      &UnicodeStringActualByteCount,
      v10,
      UTF8StringByteCount);
    Length = UnicodeStringActualByteCount;
    DestinationString.Length = UnicodeStringActualByteCount;
  }
  v11 = 0;
  v12 = Length >> 1;
  if ( *a2 )
  {
    while ( (unsigned __int16)a2[8 * v11 + 4] != v12 || wcsnicmp(*(const wchar_t **)&a2[8 * v11 + 8], Buffer, v12) )
    {
      if ( ++v11 >= *a2 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v4 = 0;
  }
  if ( v5 != qword_140D05008 )
    RtlFreeUnicodeString(&DestinationString);
  return v4;
}
