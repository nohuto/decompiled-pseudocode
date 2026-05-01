/*
 * XREFs of ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18002FA5C
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F720 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x1803DFDE0 (-ScanKGLForFSECompat@IsGameManager@@AEAAJXZ.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18073F980 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     ??$MakeAndInitialize@VCEnumerateEntries@@V1@AEAPEAEAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCEnumerateEntries@@AEAPEAEAEAK@Z @ 0x18002FAE0 (--$MakeAndInitialize@VCEnumerateEntries@@V1@AEAPEAEAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCEnumer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KnownGameList::CreateEnumerateEntriesInstance(
        KnownGameList *this,
        struct KnownGameList::IEnumerateEntries **a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  struct KnownGameList::IEnumerateEntries **v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = (int)a3;
  v12 = a2;
  v4 = 0LL;
  v11 = 0LL;
  if ( !this )
  {
    v8 = 1497LL;
LABEL_10:
    v6 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL,
      v9);
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v8 = 1498LL;
    goto LABEL_10;
  }
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CEnumerateEntries,CEnumerateEntries,unsigned char * &,unsigned long &>(
         &v11,
         &v12,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DC,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v5,
      v9);
    v4 = v11;
  }
  else
  {
    *(_QWORD *)this = v11;
    v6 = 0;
  }
LABEL_5:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
