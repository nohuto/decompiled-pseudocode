/*
 * XREFs of IopIoRingDispatchCancel @ 0x14094947C
 * Callers:
 *     IopProcessIoRingEntry @ 0x14094A178 (IopProcessIoRingEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IopCompleteIoRingEntry @ 0x140559A1C (IopCompleteIoRingEntry.c)
 *     IopCancelIoFile @ 0x1407C1C5C (IopCancelIoFile.c)
 *     IopIoRingReferenceFileObject @ 0x14094A104 (IopIoRingReferenceFileObject.c)
 */

LONG_PTR __fastcall IopIoRingDispatchCancel(__int64 a1, __int64 a2)
{
  char PreviousMode; // r9
  int v5; // eax
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  v7 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = *(_DWORD *)(a2 + 16);
  if ( (v5 & 0xFFFFFFFE) != 0 )
  {
    LODWORD(v7) = -1069154303;
  }
  else
  {
    LODWORD(v7) = IopIoRingReferenceFileObject(
                    a1,
                    *(_QWORD *)(a2 + 24),
                    v5 & 1,
                    PreviousMode,
                    0,
                    0,
                    (__int64)&Object,
                    0LL);
    if ( (int)v7 >= 0 )
      LODWORD(v7) = IopCancelIoFile((__int64)Object, *(_QWORD *)(a2 + 32));
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 8), &v7, 0);
}
