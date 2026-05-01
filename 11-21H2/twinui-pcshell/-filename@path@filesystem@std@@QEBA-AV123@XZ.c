/*
 * XREFs of ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x180587BD0
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180584FA0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180586AC8 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1805874F8 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filesystem::path::filename(std::filesystem *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v4; // rax
  char *v5; // rbx
  const unsigned __int16 *filename; // rax

  v4 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(std::filesystem **)a1;
  v5 = (char *)a1 + 2 * v4;
  filename = std::filesystem::_Find_filename(a1, v5, a3);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  std::wstring::assign((char *)a2, filename, (v5 - (char *)filename) >> 1);
  return a2;
}
