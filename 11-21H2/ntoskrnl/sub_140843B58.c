/*
 * XREFs of sub_140843B58 @ 0x140843B58
 * Callers:
 *     sub_1408439C0 @ 0x1408439C0 (sub_1408439C0.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 */

__int64 __fastcall sub_140843B58(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  Sourcea = 0LL;
  v5 = RtlFormatCurrentUserKeyPath(&Sourcea);
  if ( v5 < 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"AslRegistryBuildUserPath");
  }
  else
  {
    Destination->Length = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( Source[v6] );
    v7 = Sourcea.Length + 2 * (v6 + 1);
    Destination->MaximumLength = v7;
    v8 = (wchar_t *)sub_14075B444(v4, v7);
    Destination->Buffer = v8;
    if ( v8 )
    {
      RtlAppendUnicodeStringToString(Destination, &Sourcea);
      RtlAppendUnicodeToString(Destination, Source);
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
      sub_1406E0C3C(1LL, (__int64)"AslRegistryBuildUserPath");
    }
  }
  RtlFreeUnicodeString(&Sourcea);
  return (unsigned int)v5;
}
