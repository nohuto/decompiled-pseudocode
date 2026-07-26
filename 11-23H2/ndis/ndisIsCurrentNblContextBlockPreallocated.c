/*
 * XREFs of ndisIsCurrentNblContextBlockPreallocated @ 0x1C0028230
 * Callers:
 *     NdisFreeNetBufferListContext @ 0x1C0028140 (NdisFreeNetBufferListContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCurrentNblContextBlockPreallocated(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rax

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 44LL);
  if ( (v1 & 2) == 0 )
    return 0;
  v2 = 384LL;
  if ( (v1 & 1) != 0 )
    v2 = 560LL;
  return *(_QWORD *)(a1 + 16) == a1 + v2;
}
