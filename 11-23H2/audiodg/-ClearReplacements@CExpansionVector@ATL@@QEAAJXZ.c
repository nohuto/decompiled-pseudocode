/*
 * XREFs of ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x1400913B4
 * Callers:
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x140090294 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?ClearReplacements@CRegObject@ATL@@UEAAJXZ @ 0x140091440 (-ClearReplacements@CRegObject@ATL@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAXXZ @ 0x140027880 (-RemoveAll@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@.c)
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14005254C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?GetValueAt@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z @ 0x1400920E0 (-GetValueAt@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z.c)
 */

__int64 __fastcall ATL::CExpansionVector::ClearReplacements(ATL::CExpansionVector *this)
{
  int v1; // eax
  int v2; // ebx
  __int64 v4; // rsi
  void **ValueAt; // rax

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 > 0 )
  {
    v4 = 0LL;
    do
    {
      if ( v2 < 0 || v2 >= v1 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        JUMPOUT(0x140091429LL);
      }
      operator delete[](*(void **)(v4 + *(_QWORD *)this));
      ValueAt = (void **)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::GetValueAt(
                           this,
                           (unsigned int)v2);
      operator delete[](*ValueAt);
      v1 = *((_DWORD *)this + 4);
      ++v2;
      v4 += 8LL;
    }
    while ( v2 < v1 );
  }
  ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAll((__int64)this);
  return 0LL;
}
