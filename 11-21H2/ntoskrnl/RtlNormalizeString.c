/*
 * XREFs of RtlNormalizeString @ 0x1409BE510
 * Callers:
 *     sub_1405ECB04 @ 0x1405ECB04 (sub_1405ECB04.c)
 * Callees:
 *     sub_1409BE594 @ 0x1409BE594 (sub_1409BE594.c)
 *     sub_1409C5570 @ 0x1409C5570 (sub_1409C5570.c)
 */

NTSTATUS __stdcall RtlNormalizeString(
        ULONG NormForm,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  int v5; // ebp
  int v7; // esi
  PLONG v8; // rbx
  NTSTATUS result; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v5 = (int)DestinationString;
  v7 = (int)SourceString;
  if ( !SourceString )
    return -1073741811;
  if ( SourceStringLength < -1 )
    return -1073741811;
  if ( !NormForm )
    return -1073741811;
  v8 = DestinationStringLength;
  if ( *DestinationStringLength < 0 )
    return -1073741811;
  result = sub_1409C5570(NormForm, &v10);
  if ( result >= 0 )
    return sub_1409BE594(v10, v7, SourceStringLength, v5, (__int64)v8);
  return result;
}
