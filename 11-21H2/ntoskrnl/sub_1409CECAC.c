/*
 * XREFs of sub_1409CECAC @ 0x1409CECAC
 * Callers:
 *     sub_1409CE7E8 @ 0x1409CE7E8 (sub_1409CE7E8.c)
 *     sub_1409CED4C @ 0x1409CED4C (sub_1409CED4C.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x14021F920 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14022DEA0 (RtlGetNextEntryHashTable.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __fastcall sub_1409CECAC(unsigned int *Sid1)
{
  ULONG_PTR v1; // rbp
  __int64 v2; // rbx
  __int64 v4; // r8
  ULONG_PTR v5; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rdi
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v1 = off_140D3B088;
  v2 = 0LL;
  memset(&Context, 0, sizeof(Context));
  v4 = Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  v5 = v4 + 1;
  if ( (_DWORD)v4 )
    v5 = Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  for ( i = RtlLookupEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(off_140D3B088 + 8), v5, &Context);
        ;
        i = RtlGetNextEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v1 + 8), &Context) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
      return v7;
  }
  return (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v2;
}
