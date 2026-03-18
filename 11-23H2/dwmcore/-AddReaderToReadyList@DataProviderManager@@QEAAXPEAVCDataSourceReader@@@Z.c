/*
 * XREFs of ?AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x1801B756C
 * Callers:
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x180228C40 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_S.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011133C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCDataSourceReader@@@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@QEAAPEAPEAVCDataSourceReader@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801B7288 (--$_Emplace_reallocate@AEBQEAVCDataSourceReader@@@-$vector@PEAVCDataSourceReader@@V-$allocator@P.c)
 */

void __fastcall DataProviderManager::AddReaderToReadyList(
        DataProviderManager *this,
        struct CDataSourceReader *a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CDataSourceReader *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (*((_BYTE *)a2 + 80) & 1) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1AA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      a4);
  v4 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v4 == *((_QWORD **)this + 15) )
  {
    std::vector<CDataSourceReader *>::_Emplace_reallocate<CDataSourceReader * const &>(
      (const void **)this + 13,
      *((_BYTE **)this + 14),
      &v6);
    a2 = v6;
  }
  else
  {
    *v4 = a2;
    *((_QWORD *)this + 14) += 8LL;
  }
  *((_BYTE *)a2 + 80) |= 2u;
}
