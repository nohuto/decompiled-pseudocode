/*
 * XREFs of ??$?0VCAppThumbnailWindow@@$0A@@?$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailWindow@@@Z @ 0x1804952CC
 * Callers:
 *     ?Create@CAppThumbnailWindow@@SA?AV?$shared_ptr@VCAppThumbnailWindow@@@std@@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180496800 (-Create@CAppThumbnailWindow@@SA-AV-$shared_ptr@VCAppThumbnailWindow@@@std@@AEBUCRect@Geometry@@P.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180171890 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::shared_ptr<CAppThumbnailWindow>::shared_ptr<CAppThumbnailWindow>(_QWORD *a1, _QWORD *a2)
{
  void *v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  std::_Ref_count_base *v9; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x18uLL);
  *(_OWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count<CAppThumbnailWindow>::`vftable';
  *((_QWORD *)v4 + 2) = a2;
  *a1 = a2;
  a1[1] = v4;
  if ( a2 )
  {
    v5 = a2[1];
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      _InterlockedAdd((volatile signed __int32 *)v4 + 2, 1u);
      v6 = (volatile signed __int32 *)a1[1];
      if ( v6 )
      {
        v7 = a2;
        v8 = a1[1];
        _InterlockedAdd(v6 + 3, 1u);
      }
      else
      {
        v8 = 0LL;
        v7 = 0LL;
      }
      *a2 = v7;
      v9 = (std::_Ref_count_base *)a2[1];
      a2[1] = v8;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      if ( v6 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
    }
  }
  return a1;
}
