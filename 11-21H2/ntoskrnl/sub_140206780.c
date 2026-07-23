/*
 * XREFs of sub_140206780 @ 0x140206780
 * Callers:
 *     sub_140672348 @ 0x140672348 (sub_140672348.c)
 * Callees:
 *     sub_1402058C0 @ 0x1402058C0 (sub_1402058C0.c)
 *     RtlEnumerateEntryHashTable @ 0x140206880 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1402069A0 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x140206B00 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x140206B50 (RtlInitEnumerationHashTable.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_140206780()
{
  _RTL_DYNAMIC_HASH_TABLE *v0; // rsi
  volatile LONG *v1; // rax
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v6; // rax
  unsigned int *v7; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  v0 = *(_RTL_DYNAMIC_HASH_TABLE **)(off_140D3B060 + 8);
  RtlInitEnumerationHashTable(v0, &Enumerator);
  while ( 1 )
  {
    v6 = RtlEnumerateEntryHashTable(v0, &Enumerator);
    v7 = (unsigned int *)v6;
    if ( !v6 )
      break;
    if ( LOBYTE(v6[2].Linkage.Flink) && RtlRemoveEntryHashTable(v0, v6, 0LL) )
    {
      v1 = (volatile LONG *)sub_1402058C0(v7[10]);
      v2 = v1;
      if ( v1 )
      {
        v3 = ExAcquireSpinLockExclusive(v1);
        v4 = *((_QWORD *)v2 + 2);
        *((_QWORD *)v2 + 1) = 0LL;
        v5 = v3;
        if ( v4 )
        {
          sub_14028AB90();
          ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v10 = *((_QWORD *)CurrentPrcb + 4375);
              v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
              v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
              *(_DWORD *)(v10 + 20) &= v11;
              if ( v12 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v5);
      }
      _bittestandreset(*(signed __int32 **)(off_140D3B060 + 24), v7[10]);
      ExFreePoolWithTag(v7, 0);
    }
  }
  RtlEndEnumerationHashTable(v0, &Enumerator);
}
