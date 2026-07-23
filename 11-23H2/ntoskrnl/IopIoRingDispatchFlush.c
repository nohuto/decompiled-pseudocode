/*
 * XREFs of IopIoRingDispatchFlush @ 0x14094953C
 * Callers:
 *     IopProcessIoRingEntry @ 0x14094A178 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x140559A1C (IopCompleteIoRingEntry.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     IopIoRingReferenceFileObject @ 0x14094A104 (IopIoRingReferenceFileObject.c)
 */

LONG_PTR __fastcall IopIoRingDispatchFlush(PVOID Object, __int64 a2)
{
  int v4; // edx
  LONG_PTR result; // rax
  char v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_DWORD *)(a2 + 16);
  if ( (v4 & 0xFFFFFFFC) != 0 )
  {
    LODWORD(result) = -1069154303;
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8);
    v9 = (unsigned int)result;
    return IopCompleteIoRingEntry((__int64)Object, v8, &v9, 0);
  }
  FileObject = 0LL;
  v6 = v4 & 1;
  v7 = *(_QWORD *)(a2 + 24);
  v10 = 0LL;
  LODWORD(result) = IopIoRingReferenceFileObject(
                      (_DWORD)Object,
                      v7,
                      v6,
                      KeGetCurrentThread()->PreviousMode,
                      0,
                      0,
                      (__int64)&FileObject,
                      (__int64)&v10);
  if ( (int)result < 0 )
    goto LABEL_5;
  result = IopFlushBuffersFile(FileObject, *(_DWORD *)(a2 + 20), 0LL, 0, BYTE4(v10), Object, *(_OWORD **)(a2 + 8), 0LL);
  if ( (_DWORD)result != 259 )
    goto LABEL_5;
  return result;
}
