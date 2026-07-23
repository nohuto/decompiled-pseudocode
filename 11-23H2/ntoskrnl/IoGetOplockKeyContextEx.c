/*
 * XREFs of IoGetOplockKeyContextEx @ 0x1403018D0
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402FE980 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x140300F10 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpAttachOplockKey @ 0x140302B0C (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14030192C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6LL);
  if ( result )
    return result & -(__int64)((*(_BYTE *)(result + 2) & 3) != 0);
  return result;
}
