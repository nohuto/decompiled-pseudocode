/*
 * XREFs of sub_1409BAE18 @ 0x1409BAE18
 * Callers:
 *     RtlConstructCrossVmMutexPath @ 0x1409BAE00 (RtlConstructCrossVmMutexPath.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409BAE18(UNICODE_STRING *a1, unsigned int *a2, unsigned int *a3)
{
  wchar_t *Buffer; // rdi
  int appended; // ebx
  ULONG v8; // edx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  Destination.MaximumLength = 112;
  Source = 0LL;
  UnicodeString = 0LL;
  if ( a3 )
    Destination.MaximumLength = 190;
  Destination.Buffer = (wchar_t *)sub_1406BE560(a3 != 0LL ? 190LL : 112LL);
  Buffer = Destination.Buffer;
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_14000A7E8);
    if ( appended < 0
      || (appended = RtlAppendUnicodeToString(&Destination, asc_140865B20), appended < 0)
      || a3
      && ((appended = sub_1407454A8(a3, (__int64)&Source, 1), appended < 0)
       || (appended = RtlAppendUnicodeStringToString(&Destination, &Source), appended < 0)
       || (appended = RtlAppendUnicodeToString(&Destination, asc_140865B20), appended < 0))
      || (appended = sub_1407454A8(a2, (__int64)&UnicodeString, 1), appended < 0)
      || (appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString), appended < 0) )
    {
      Buffer = Destination.Buffer;
    }
    else
    {
      Buffer = 0LL;
      *a1 = Destination;
    }
  }
  else
  {
    appended = -1073741801;
  }
  RtlFreeUnicodeString(&Source);
  RtlFreeUnicodeString(&UnicodeString);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, v8);
  return (unsigned int)appended;
}
