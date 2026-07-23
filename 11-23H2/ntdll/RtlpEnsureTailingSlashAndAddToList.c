/*
 * XREFs of RtlpEnsureTailingSlashAndAddToList @ 0x1800EAA68
 * Callers:
 *     RtlpLookupSafeCurDirList @ 0x1800EAB00 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x18006828C (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCatString @ 0x1800EA864 (RtlUnicodeStringCatString.c)
 *     RtlpAllocateDirPrefixBlock @ 0x1800EAA1C (RtlpAllocateDirPrefixBlock.c)
 */

__int64 __fastcall RtlpEnsureTailingSlashAndAddToList(__int64 a1, __int64 a2)
{
  _WORD *DirPrefixBlock; // rax
  _QWORD *v5; // rbx
  _QWORD *v7; // rax

  if ( *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * (unsigned __int16)((*(_WORD *)a2 >> 1) - 1)) == 92
    || (int)RtlUnicodeStringCatString((unsigned __int16 *)a2, a2) >= 0 )
  {
    DirPrefixBlock = RtlpAllocateDirPrefixBlock(*(_WORD *)a2 + 2);
    v5 = DirPrefixBlock;
    if ( !DirPrefixBlock )
      return 3221225495LL;
    RtlUnicodeStringCopy(DirPrefixBlock + 8, a2);
    v7 = *(_QWORD **)(a1 + 8);
    if ( *v7 != a1 )
      __fastfail(3u);
    *v5 = a1;
    v5[1] = v7;
    *v7 = v5;
    *(_QWORD *)(a1 + 8) = v5;
  }
  return 0LL;
}
