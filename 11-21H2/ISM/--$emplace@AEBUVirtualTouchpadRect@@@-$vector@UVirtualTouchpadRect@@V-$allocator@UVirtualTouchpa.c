/*
 * XREFs of ??$emplace@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@AEBUVirtualTouchpadRect@@@Z @ 0x180130210
 * Callers:
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180130930 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUVirtualTouchpadRect@@@Z @ 0x180133730 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoB.c)
 * Callees:
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ??$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAPEAUVirtualTouchpadRect@@QEAU2@AEBU2@@Z @ 0x1801300B4 (--$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVi.c)
 */

char **__fastcall std::vector<VirtualTouchpadRect>::emplace<VirtualTouchpadRect const &>(
        __int64 a1,
        char **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 == *(_QWORD *)(a1 + 16) )
  {
    *a2 = std::vector<VirtualTouchpadRect>::_Emplace_reallocate<VirtualTouchpadRect const &>(
            (const void **)a1,
            (_BYTE *)a3,
            a4);
  }
  else
  {
    if ( a3 == v6 )
    {
      *(_OWORD *)v6 = *(_OWORD *)a4;
      *(_QWORD *)(v6 + 16) = *(_QWORD *)(a4 + 16);
      *(_QWORD *)(a1 + 8) += 24LL;
    }
    else
    {
      v9 = *(_OWORD *)a4;
      v10 = *(_QWORD *)(a4 + 16);
      *(_OWORD *)v6 = *(_OWORD *)(v6 - 24);
      *(_QWORD *)(v6 + 16) = *(_QWORD *)(v6 - 8);
      *(_QWORD *)(a1 + 8) += 24LL;
      memmove_0((void *)(a3 + 24), (const void *)a3, v6 - a3 - 24);
      *(_OWORD *)a3 = v9;
      *(_QWORD *)(a3 + 16) = v10;
    }
    *a2 = (char *)a3;
  }
  return a2;
}
