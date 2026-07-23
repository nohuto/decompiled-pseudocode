/*
 * XREFs of sub_140A14988 @ 0x140A14988
 * Callers:
 *     sub_140A18474 @ 0x140A18474 (sub_140A18474.c)
 *     sub_140A18558 @ 0x140A18558 (sub_140A18558.c)
 *     sub_140A18AA0 @ 0x140A18AA0 (sub_140A18AA0.c)
 *     sub_140A18E64 @ 0x140A18E64 (sub_140A18E64.c)
 * Callees:
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14075A820 (RtlxAnsiStringToUnicodeSize.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A14988(wchar_t **a1, const CHAR *a2)
{
  ULONG v3; // eax
  __int64 v4; // rcx
  unsigned __int16 v5; // di
  NTSTATUS v6; // ebx
  wchar_t *Buffer; // rcx
  UNICODE_STRING v9; // [rsp+30h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  DestinationString = 0LL;
  RtlInitString(&DestinationString, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v5 = v3;
  *a1 = 0LL;
  v9 = 0LL;
  if ( v3 > 0xFFFF )
  {
    v6 = -1073741811;
LABEL_3:
    sub_1406E0C3C(1LL, (__int64)"AslStringAnsiToUnicode");
    Buffer = v9.Buffer;
    goto LABEL_8;
  }
  v9.Buffer = (wchar_t *)sub_14075B444(v4, v3);
  if ( !v9.Buffer )
  {
    v6 = -1073741801;
    sub_1406E0C3C(1LL, (__int64)"AslStringAnsiToUnicode");
    return (unsigned int)v6;
  }
  v9.MaximumLength = v5;
  v9.Length = 0;
  v6 = RtlAnsiStringToUnicodeString(&v9, &DestinationString, 0);
  if ( v6 < 0 )
    goto LABEL_3;
  Buffer = 0LL;
  *a1 = v9.Buffer;
  v6 = 0;
LABEL_8:
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return (unsigned int)v6;
}
