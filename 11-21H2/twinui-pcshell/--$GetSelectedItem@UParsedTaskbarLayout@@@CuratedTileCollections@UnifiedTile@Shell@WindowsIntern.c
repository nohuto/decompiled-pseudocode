/*
 * XREFs of ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x18031A4EC
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031C250 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x18031B354 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x18031B41C (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ??R?$_Func_class@USelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@std@@QEBA?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z @ 0x18031B4D8 (--R-$_Func_class@USelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUPa.c)
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x18031BC70 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedTaskbarLayout>(
        __int64 *a1,
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2,
        __int64 *a3,
        __int64 a4)
{
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // r14
  int SelectionScore; // r15d
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rdx
  _BYTE v16[112]; // [rsp+20h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v7 = -1;
  v8 = *a1;
  v9 = a1[1];
  if ( *a1 == v9 )
    goto LABEL_9;
  do
  {
    std::_Func_class<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData,ParsedTaskbarLayout const &>::operator()(
      a3,
      v16,
      v8);
    SelectionScore = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore(
                       a2,
                       (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v16);
    if ( SelectionScore > v7 )
    {
      ParsedTaskbarLayout::operator=(a4, v8);
      v7 = SelectionScore;
    }
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v16);
    v8 += 136LL;
  }
  while ( v8 != v9 );
  if ( v7 == -1 )
  {
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F7,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartLayoutSelectionData.h",
      (const char *)0x80070490LL);
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData(a2);
    v14 = (__int64 *)a3[7];
    if ( v14 )
    {
      v15 = *v14;
      LOBYTE(v15) = v14 != a3;
      (*(void (__fastcall **)(__int64 *, __int64))(*v14 + 32))(v14, v15);
      a3[7] = 0LL;
    }
    return 2147943568LL;
  }
  else
  {
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData(a2);
    v12 = (__int64 *)a3[7];
    if ( v12 )
    {
      LOBYTE(v11) = v12 != a3;
      (*(void (__fastcall **)(__int64 *, __int64))(*v12 + 32))(v12, v11);
      a3[7] = 0LL;
    }
    return 0LL;
  }
}
