/*
 * XREFs of PipDeviceObjectListRemove @ 0x140884CA4
 * Callers:
 *     IopRemoveDeviceRelationsFromList @ 0x140884C44 (IopRemoveDeviceRelationsFromList.c)
 *     IopRemoveCurrentRelationFromList @ 0x14096CBCC (IopRemoveCurrentRelationFromList.c)
 *     IopRemoveRelationFromList @ 0x14096CC54 (IopRemoveRelationFromList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140435100 (memmove.c)
 */

__int64 __fastcall PipDeviceObjectListRemove(unsigned int *a1, unsigned int a2)
{
  PVOID *v4; // rsi

  if ( a2 >= *a1 )
    return 3221225612LL;
  v4 = (PVOID *)&a1[6 * a2];
  ObfDereferenceObjectWithTag(v4[2], 0x4C706E50u);
  if ( ((_DWORD)v4[4] & 1) != 0 )
    --a1[2];
  if ( a2 < *a1 - 1 )
    memmove(v4 + 2, &a1[4 * a2 + 10 + 2 * a2], 24LL * (*a1 - a2 - 1));
  --*a1;
  return 0LL;
}
