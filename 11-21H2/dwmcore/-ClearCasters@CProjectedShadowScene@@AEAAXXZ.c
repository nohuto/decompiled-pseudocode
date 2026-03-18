/*
 * XREFs of ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180236200
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x18023603C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z @ 0x1802371E8 (-ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x180235CDC (--$_Free_non_head@V-$allocator@U-$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180236374 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 */

void __fastcall CProjectedShadowScene::ClearCasters(CProjectedShadowScene *this)
{
  CProjectedShadowScene **j; // rcx
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  __int64 v5; // rsi
  CProjectedShadowScene **v6; // r8

  CProjectedShadowScene::ClearShadows(this, 0);
  v3 = (_QWORD *)*((_QWORD *)this + 8);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[2];
    v6 = *(CProjectedShadowScene ***)(v5 + 104);
    for ( j = *(CProjectedShadowScene ***)(v5 + 96); j != v6; ++j )
    {
      if ( *j == this )
      {
        memmove_0(j, j + 1, (char *)v6 - (char *)(j + 1));
        *(_QWORD *)(v5 + 104) -= 8LL;
        break;
      }
    }
  }
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    (__int64)j,
    *((_QWORD ***)this + 8));
  **((_QWORD **)this + 8) = *((_QWORD *)this + 8);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) = *((_QWORD *)this + 8);
  *((_QWORD *)this + 9) = 0LL;
}
