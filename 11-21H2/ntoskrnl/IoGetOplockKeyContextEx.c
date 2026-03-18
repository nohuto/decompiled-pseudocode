/*
 * XREFs of IoGetOplockKeyContextEx @ 0x1402A3840
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x1402A22E0 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402A6980 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x1402A6AB0 (FsRtlpOplockKeysEqual.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1402A3A14 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
