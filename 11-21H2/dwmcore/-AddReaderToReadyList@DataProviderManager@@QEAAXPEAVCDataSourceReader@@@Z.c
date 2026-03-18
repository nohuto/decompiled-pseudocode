/*
 * XREFs of ?AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x18019547C
 * Callers:
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x180212290 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_S.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCDataSourceReader@@@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@QEAAPEAPEAVCDataSourceReader@@QEAPEAV2@AEBQEAV2@@Z @ 0x180195198 (--$_Emplace_reallocate@AEBQEAVCDataSourceReader@@@-$vector@PEAVCDataSourceReader@@V-$allocator@P.c)
 */

void __fastcall DataProviderManager::AddReaderToReadyList(
        DataProviderManager *this,
        struct CDataSourceReader *a2,
        __int64 a3,
        const char *a4)
{
  _BYTE *v5; // rax
  const void **v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CDataSourceReader *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( (*((_BYTE *)a2 + 80) & 1) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      426LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      a4);
  v5 = (_BYTE *)*((_QWORD *)this + 14);
  v6 = (const void **)((char *)this + 104);
  if ( v5 == *((_BYTE **)this + 15) )
  {
    std::vector<CDataSourceReader *>::_Emplace_reallocate<CDataSourceReader * const &>(v6, v5, &v8);
    a2 = v8;
  }
  else
  {
    *(_QWORD *)v5 = a2;
    v6[1] = (char *)v6[1] + 8;
  }
  *((_BYTE *)a2 + 80) |= 2u;
}
