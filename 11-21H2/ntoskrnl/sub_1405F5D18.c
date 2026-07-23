/*
 * XREFs of sub_1405F5D18 @ 0x1405F5D18
 * Callers:
 *     sub_1402AC350 @ 0x1402AC350 (sub_1402AC350.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_1405F5B98 @ 0x1405F5B98 (sub_1405F5B98.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x14021F920 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14022DEA0 (RtlGetNextEntryHashTable.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405F4304 @ 0x1405F4304 (sub_1405F4304.c)
 *     sub_140696928 @ 0x140696928 (sub_140696928.c)
 */

__int64 __fastcall sub_1405F5D18(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  _RTL_DYNAMIC_HASH_TABLE *v6; // rbx
  ULONG_PTR v7; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rdi
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  *a2 = 0LL;
  memset(&Context, 0, sizeof(Context));
  CurrentThread = KeGetCurrentThread();
  v5 = -1073741275;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C1B308, 0LL);
  v6 = HashTable;
  if ( HashTable && _InterlockedIncrement64((volatile signed __int64 *)&HashTable[1]) <= 1 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C1B308, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C1B308);
  sub_1402AFC00((ULONG_PTR)&qword_140C1B308);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    if ( byte_140C1B311 )
    {
      v7 = sub_140696928(Sid1);
      for ( i = RtlLookupEntryHashTable(v6, v7, &Context); ; i = RtlGetNextEntryHashTable(v6, &Context) )
      {
        v9 = i;
        if ( !i )
          break;
        if ( RtlEqualSid(Sid1, i[1].Linkage.Flink) == 1 )
        {
          *a2 = v9;
          return 0;
        }
      }
    }
    sub_1405F4304((volatile signed __int64 *)v6);
  }
  return v5;
}
