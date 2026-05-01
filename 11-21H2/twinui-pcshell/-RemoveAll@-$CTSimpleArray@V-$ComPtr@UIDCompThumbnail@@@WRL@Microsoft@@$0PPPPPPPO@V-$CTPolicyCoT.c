/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180554B1C
 * Callers:
 *     ??1?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x18054F2D8 (--1-$CCoSimpleArray@V-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleArrayStanda.c)
 *     ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x18054F5A0 (--1VirtualDesktopGestureWindow@@UEAA@XZ.c)
 *     ?RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z @ 0x180554ABC (-RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      do
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8 * v3++));
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
