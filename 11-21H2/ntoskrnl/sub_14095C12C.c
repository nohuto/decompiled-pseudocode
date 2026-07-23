/*
 * XREFs of sub_14095C12C @ 0x14095C12C
 * Callers:
 *     sub_14077AA70 @ 0x14077AA70 (sub_14077AA70.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140564D60 @ 0x140564D60 (sub_140564D60.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_14095CC40 @ 0x14095CC40 (sub_14095CC40.c)
 */

__int64 __fastcall sub_14095C12C(PCWSTR SourceString)
{
  int appended; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v7; // [rsp+78h] [rbp+18h] BYREF

  Source = 0LL;
  v7 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&Source, SourceString);
  if ( (int)sub_140564D60(&Source, &v7) < 0 )
  {
    DestinationString.Length = 0;
    DestinationString.MaximumLength = Source.Length + 38;
    DestinationString.Buffer = (wchar_t *)sub_1406BE560((unsigned __int16)(Source.Length + 38));
    if ( DestinationString.Buffer )
    {
      appended = RtlAppendUnicodeToString(&DestinationString, L"\\REGISTRY\\MACHINE\\");
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(&DestinationString, &Source);
        if ( appended >= 0 )
        {
          appended = sub_14095CC40(&DestinationString, &UnicodeString);
          if ( appended >= 0 )
            appended = sub_14082666C(SourceString, 24, 0);
        }
      }
    }
    else
    {
      appended = -1073741670;
    }
  }
  else
  {
    appended = (*(_DWORD *)(v7 + 64) & 1) != 0 ? -1073741790 : 0x40000000;
  }
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)appended;
}
