/*
 * XREFs of IopIoRingDispatchCancel @ 0x1409380B4
 * Callers:
 *     IopProcessIoRingEntry @ 0x140938A9C (IopProcessIoRingEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IopCompleteIoRingEntry @ 0x140559E1C (IopCompleteIoRingEntry.c)
 *     IopCancelIoFile @ 0x1406CF67C (IopCancelIoFile.c)
 *     IopIoRingReferenceFileObject @ 0x140938A3C (IopIoRingReferenceFileObject.c)
 */

LONG_PTR __fastcall IopIoRingDispatchCancel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
  {
    LODWORD(v7) = -1073741811;
  }
  else
  {
    LODWORD(v7) = IopIoRingReferenceFileObject(a1, a2, 0LL, a4, &Object);
    if ( (int)v7 >= 0 )
      LODWORD(v7) = IopCancelIoFile((__int64)Object, *(_QWORD *)(a2 + 24));
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 48), &v7, 0);
}
