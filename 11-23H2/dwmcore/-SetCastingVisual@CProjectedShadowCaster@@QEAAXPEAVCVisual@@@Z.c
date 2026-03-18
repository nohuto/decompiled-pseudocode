/*
 * XREFs of ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180008F4C
 * Callers:
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x180007640 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 *     ?ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETCASTINGVISUAL@@@Z @ 0x180009C5C (-ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTE.c)
 * Callees:
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180004DAC (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180008E9C (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x18000976C (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18000986C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800098CC (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 *     ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18000A3B8 (-RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     memmove_0 @ 0x18011B674 (memmove_0.c)
 */

void __fastcall CProjectedShadowCaster::SetCastingVisual(CProjectedShadowScene ***this, CComposition **a2)
{
  CProjectedShadowScene **v4; // rbp
  CProjectedShadowScene **i; // rdi
  CProjectedShadowScene **v6; // rdi
  __int64 ProjectedShadowCasters; // r14
  _BYTE *v8; // r8
  CProjectedShadowCaster **v9; // rcx
  _BYTE *v10; // rdx

  if ( a2 != this[8] )
  {
    if ( this[8] )
    {
      CProjectedShadowCaster::InvalidateMaskContent((CProjectedShadowCaster *)this);
      v4 = this[13];
      for ( i = this[12]; i != v4; ++i )
        CProjectedShadowScene::DiscardCachesForCaster(*i, (struct CProjectedShadowCaster *)this);
      std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(this + 10);
      v6 = this[8];
      if ( (*(_DWORD *)v6[29] & 0x40000) != 0 )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this[8]);
        v8 = *(_BYTE **)(ProjectedShadowCasters + 8);
        v9 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
        if ( *(_BYTE **)ProjectedShadowCasters != v8 )
        {
          while ( 1 )
          {
            v10 = v9 + 1;
            if ( *v9 == (CProjectedShadowCaster *)this )
              break;
            ++v9;
            if ( v10 == v8 )
              goto LABEL_3;
          }
          memmove_0(v9, v10, v8 - v10);
          *(_QWORD *)(ProjectedShadowCasters + 8) -= 8LL;
          if ( ((*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
            CComposition::RemoveProjectedShadowCasterVisual(v6[2], (struct CVisual *)v6);
        }
      }
    }
LABEL_3:
    this[8] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowCaster(a2, (struct CProjectedShadowCaster *)this);
      CProjectedShadowCaster::InvalidateMaskContent((CProjectedShadowCaster *)this);
    }
  }
}
