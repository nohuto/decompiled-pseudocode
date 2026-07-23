/*
 * XREFs of ObpDeleteDirectoryEntry @ 0x140697854
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1406C0AEC (ObpInsertOrLocateNamedObject.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x140740330 (ObpDeleteNameCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObpDeleteDirectoryName @ 0x1406978D4 (ObpDeleteDirectoryName.c)
 *     ObpUnlockDirectory @ 0x1406C3278 (ObpUnlockDirectory.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall ObpDeleteDirectoryEntry(_QWORD *P, void **a2)
{
  char *v2; // rsi
  void *v4; // rdi

  v2 = (char *)P[1];
  v4 = *a2;
  ObpUnlockDirectory(a2);
  ExFreePoolWithTag(P, 0);
  ObfDereferenceObjectWithTag(v4, 0x6944624Fu);
  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v2 - 24) ^ ((unsigned __int16)((_WORD)v2 - 48) >> 8))) == ObpDirectoryObjectType->Index )
    return ObpDeleteDirectoryName(v2);
  else
    return ObfDereferenceObjectWithTag(v2, 0x6944624Fu);
}
