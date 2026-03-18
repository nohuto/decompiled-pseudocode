/*
 * XREFs of RootHub_InitializeReadModifyWriteLock @ 0x1C001AA7C
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C0070700 (RootHub_PrepareHardware.c)
 * Callees:
 *     DynamicLock_Create @ 0x1C001AAC4 (DynamicLock_Create.c)
 */

__int64 __fastcall RootHub_InitializeReadModifyWriteLock(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r9
  char v3; // dl

  v2 = a1[6] + 120LL * a2;
  v3 = *(_BYTE *)(a1[1] + 601LL);
  *(_BYTE *)(v2 + 32) = 0;
  return DynamicLock_Create(*a1, *(_QWORD *)(a1[1] + 72LL), v3 != 0, v2 + 24);
}
