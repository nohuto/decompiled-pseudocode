/*
 * XREFs of ?RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z @ 0x180610C38
 * Callers:
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x1806125A8 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180610C98 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

void __fastcall VirtualDesktopGestureContext::RemoveAdjacentThumbnails(VirtualDesktopGestureContext *this, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 9);
  v3 = &v2[*((_QWORD *)this + 10)];
  if ( v2 != v3 )
  {
    if ( a2 == 3 )
    {
      do
        CTSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>::RemoveAll(*v2++ + 64LL);
      while ( v2 != v3 );
    }
    else
    {
      do
        CTSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>::RemoveAll(*v2++ + 96LL);
      while ( v2 != v3 );
    }
  }
}
