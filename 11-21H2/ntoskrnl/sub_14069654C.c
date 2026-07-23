/*
 * XREFs of sub_14069654C @ 0x14069654C
 * Callers:
 *     sub_140696468 @ 0x140696468 (sub_140696468.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x14021F920 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14022DEA0 (RtlGetNextEntryHashTable.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_14069654C(PRTL_DYNAMIC_HASH_TABLE HashTable, ULONG_PTR a2, int *a3, __int64 *a4)
{
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v5; // rsi
  char v6; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  int v11; // edx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  memset(&Context, 0, sizeof(Context));
  v5 = 0LL;
  v6 = 0;
  for ( i = RtlLookupEntryHashTable(HashTable, a2, &Context); i; i = RtlGetNextEntryHashTable(HashTable, &Context) )
  {
    v11 = *a3;
    v5 = i;
    if ( *a3 == LODWORD(i[1].Linkage.Blink) )
    {
      if ( v11 )
      {
        if ( v11 == 1 && RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 2), (PCUNICODE_STRING)&i[1].Signature, 1u) )
          v6 = 1;
      }
      else if ( RtlEqualSid(*((PSID *)a3 + 1), (PSID)i[1].Signature) )
      {
        v6 = 1;
        break;
      }
      if ( v6 )
        break;
    }
  }
  *a4 = (unsigned __int64)v5 & -(__int64)(v6 != 0);
  return 0LL;
}
