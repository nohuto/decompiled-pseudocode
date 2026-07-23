/*
 * XREFs of RtlLCIDToCultureName @ 0x1409BB670
 * Callers:
 *     sub_1403C624C @ 0x1403C624C (sub_1403C624C.c)
 *     sub_1406EA694 @ 0x1406EA694 (sub_1406EA694.c)
 *     sub_1407496A8 @ 0x1407496A8 (sub_1407496A8.c)
 *     sub_14080D8A8 @ 0x14080D8A8 (sub_14080D8A8.c)
 *     sub_14080DA78 @ 0x14080DA78 (sub_14080DA78.c)
 *     sub_1408303C0 @ 0x1408303C0 (sub_1408303C0.c)
 *     sub_140830B1C @ 0x140830B1C (sub_140830B1C.c)
 *     ntoskrnl_14 @ 0x140945D40 (ntoskrnl_14.c)
 *     sub_140A35084 @ 0x140A35084 (sub_140A35084.c)
 *     sub_140A35814 @ 0x140A35814 (sub_140A35814.c)
 *     sub_140A36378 @ 0x140A36378 (sub_140A36378.c)
 *     sub_140A367B0 @ 0x140A367B0 (sub_140A367B0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_140372644 @ 0x140372644 (sub_140372644.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = Lcid;
  if ( Lcid )
  {
    if ( String )
    {
      if ( Lcid != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)sub_140372644(v4, (__int64)&word_140D01B00, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, &word_140D01B00);
          return 1;
        }
      }
    }
  }
  return v2;
}
