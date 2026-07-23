/*
 * XREFs of sub_1407690BC @ 0x1407690BC
 * Callers:
 *     sub_1402DDEC0 @ 0x1402DDEC0 (sub_1402DDEC0.c)
 *     sub_14076B5DC @ 0x14076B5DC (sub_14076B5DC.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     sub_140943B34 @ 0x140943B34 (sub_140943B34.c)
 *     sub_140943E3C @ 0x140943E3C (sub_140943E3C.c)
 *     sub_140946900 @ 0x140946900 (sub_140946900.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_140769784 @ 0x140769784 (sub_140769784.c)
 */

__int64 __fastcall sub_1407690BC(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = sub_140769784(DestinationString);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
