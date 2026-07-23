/*
 * XREFs of sub_140A835CC @ 0x140A835CC
 * Callers:
 *     VfInsertContext @ 0x1405FE110 (VfInsertContext.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 */

PSLIST_ENTRY __fastcall sub_140A835CC(__int16 a1)
{
  PSLIST_ENTRY result; // rax

  result = sub_140202234((__int64)&unk_140D59240);
  if ( result )
  {
    HIDWORD(result->Next) = 0;
    WORD1(result->Next) = 6;
    LOWORD(result->Next) = a1;
    *(PSLIST_ENTRY)((char *)result + 8) = 0LL;
  }
  return result;
}
