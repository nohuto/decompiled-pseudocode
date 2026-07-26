/*
 * XREFs of ?ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z @ 0x1C0035A54
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSetDeviceNames(
        PCUNICODE_STRING SourceString,
        PUNICODE_STRING DestinationString,
        struct _UNICODE_STRING *a3,
        wchar_t *a4)
{
  unsigned __int16 Length; // ax
  unsigned __int16 v7; // ax

  DestinationString->Buffer = a4;
  Length = SourceString->Length;
  DestinationString->Length = SourceString->Length;
  DestinationString->MaximumLength = Length + 2;
  RtlUpcaseUnicodeString(DestinationString, SourceString, 0);
  a3->Buffer = &DestinationString->Buffer[(unsigned __int64)ndisDeviceStr.Length >> 1];
  v7 = DestinationString->Length - ndisDeviceStr.Length;
  a3->Length = v7;
  a3->MaximumLength = v7 + 2;
}
