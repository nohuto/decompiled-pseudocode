/*
 * XREFs of IopFileObjectRevoked @ 0x140301740
 * Callers:
 *     IopReferenceFileObject @ 0x1403016DC (IopReferenceFileObject.c)
 *     NtCopyFileChunk @ 0x140749890 (NtCopyFileChunk.c)
 *     IopIoRingDispatchWrite @ 0x140949C64 (IopIoRingDispatchWrite.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x14077F08C (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
