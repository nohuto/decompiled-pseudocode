/*
 * XREFs of StorDeleteScsiIdentity @ 0x1C001C0EC
 * Callers:
 *     RaidUnitFreeResources @ 0x1C0019DC8 (RaidUnitFreeResources.c)
 *     RaidDeleteBusEnumerator @ 0x1C001A9D8 (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C001BF90 (RaidBusEnumeratorProcessBusUnit.c)
 * Callees:
 *     StorFreeAnsiString @ 0x1C001C184 (StorFreeAnsiString.c)
 */

__int64 __fastcall StorDeleteScsiIdentity(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x32316152u);
    *(_QWORD *)a1 = 0LL;
  }
  StorFreeAnsiString(a1 + 8);
  v3 = *(void **)(a1 + 32);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x32316152u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = *(void **)(a1 + 48);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x32316152u);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
