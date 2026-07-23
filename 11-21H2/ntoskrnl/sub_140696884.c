/*
 * XREFs of sub_140696884 @ 0x140696884
 * Callers:
 *     sub_140696750 @ 0x140696750 (sub_140696750.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x14021F920 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14022DEA0 (RtlGetNextEntryHashTable.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 */

__int64 __fastcall sub_140696884(PRTL_DYNAMIC_HASH_TABLE HashTable, unsigned int *Sid1, __int64 *a3)
{
  char v4; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rdi
  ULONG_PTR v8; // r8
  ULONG_PTR v9; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  memset(&Context, 0, sizeof(Context));
  v7 = 0LL;
  v8 = Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  v9 = v8 + 1;
  if ( (_DWORD)v8 )
    v9 = v8;
  for ( i = RtlLookupEntryHashTable(HashTable, v9, &Context); i; i = RtlGetNextEntryHashTable(HashTable, &Context) )
  {
    v7 = i;
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
    {
      v4 = 1;
      break;
    }
  }
  *a3 = (unsigned __int64)v7 & -(__int64)(v4 != 0);
  return 0LL;
}
