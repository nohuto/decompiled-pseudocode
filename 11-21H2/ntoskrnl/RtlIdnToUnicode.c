/*
 * XREFs of RtlIdnToUnicode @ 0x1409BBC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405EC7E0 @ 0x1405EC7E0 (sub_1405EC7E0.c)
 *     sub_1405EC854 @ 0x1405EC854 (sub_1405EC854.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  WCHAR *v9; // rdi
  NTSTATUS v11; // ebx
  BOOLEAN v12; // [rsp+30h] [rbp-18h]

  v9 = (WCHAR *)sub_1405EC7E0(0x3FEuLL);
  if ( !v9 )
    return -1073741801;
  v11 = sub_1405EC854(
          Flags,
          (wchar_t *)SourceString,
          SourceStringLength,
          DestinationString,
          DestinationStringLength,
          v9,
          v12);
  ExFreePoolWithTag(v9, 0);
  return v11;
}
