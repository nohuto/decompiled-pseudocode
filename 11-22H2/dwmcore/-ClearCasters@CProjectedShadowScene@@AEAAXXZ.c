/*
 * XREFs of ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x1800045A8
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800048C4 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z @ 0x18024BE44 (-ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x1800044A8 (--$_Free_non_head@V-$allocator@U-$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180004D68 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     memmove_0 @ 0x18011B9A4 (memmove_0.c)
 */

void __fastcall CProjectedShadowScene::ClearCasters(CProjectedShadowScene *this)
{
  CProjectedShadowScene **v2; // rcx
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  __int64 v5; // rsi
  CProjectedShadowScene **v6; // r8
  CProjectedShadowScene **v7; // rdx

  CProjectedShadowScene::ClearShadows(this, 0);
  v3 = (_QWORD *)*((_QWORD *)this + 8);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[2];
    v6 = *(CProjectedShadowScene ***)(v5 + 104);
    v2 = *(CProjectedShadowScene ***)(v5 + 96);
    if ( v2 != v6 )
    {
      while ( 1 )
      {
        v7 = v2 + 1;
        if ( *v2 == this )
          break;
        ++v2;
        if ( v7 == v6 )
          goto LABEL_6;
      }
      memmove_0(v2, v7, (char *)v6 - (char *)v7);
      *(_QWORD *)(v5 + 104) -= 8LL;
    }
LABEL_6:
    ;
  }
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    (__int64)v2,
    *((_QWORD *)this + 8));
  **((_QWORD **)this + 8) = *((_QWORD *)this + 8);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) = *((_QWORD *)this + 8);
  *((_QWORD *)this + 9) = 0LL;
}
