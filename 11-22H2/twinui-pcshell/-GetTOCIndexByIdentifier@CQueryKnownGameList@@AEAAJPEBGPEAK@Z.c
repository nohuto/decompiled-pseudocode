/*
 * XREFs of ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x18002FC4C
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F720 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18073F980 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CQueryKnownGameList::GetTOCIndexByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  char *v6; // rbp
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v11; // rdx
  int v12[4]; // [rsp+20h] [rbp-68h] BYREF
  char v13; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = 0LL;
  if ( !a3 )
  {
    v11 = 1068LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL,
      v12[0]);
    return 2147500035LL;
  }
  if ( !a2 )
  {
    v11 = 1069LL;
    goto LABEL_14;
  }
  v7 = 0;
  if ( !*((_DWORD *)this + 200) )
    return 2147942402LL;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, int *))(*(_QWORD *)this + 88LL))(this, v7, v12);
    v9 = v8;
    if ( v8 < 0 )
      break;
    if ( !LOWORD(v12[0]) || (int)_o__wcsnicmp(v12, a2, 4LL) > 0 )
    {
      if ( !v6 )
        return 2147942402LL;
LABEL_10:
      *a3 = v7 - 1;
      return 0LL;
    }
    ++v7;
    v6 = &v13;
    if ( v7 >= *((_DWORD *)this + 200) )
      goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x433,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)v8,
    v12[0]);
  return v9;
}
