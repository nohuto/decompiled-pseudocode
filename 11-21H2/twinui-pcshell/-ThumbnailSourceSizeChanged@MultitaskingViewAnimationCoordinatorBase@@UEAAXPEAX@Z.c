/*
 * XREFs of ?ThumbnailSourceSizeChanged@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAX@Z @ 0x1804CAA10
 * Callers:
 *     ?ThumbnailSourceSizeChanged@MultitaskingViewDismissalAnimationCoordinator@@UEAAXPEAX@Z @ 0x1804B3B00 (-ThumbnailSourceSizeChanged@MultitaskingViewDismissalAnimationCoordinator@@UEAAXPEAX@Z.c)
 * Callees:
 *     CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND______CDefaultKeyCompare_HWND______CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_bab26e1a69aeb2628e41eb0bfb77e34a___ @ 0x1804C8DC0 (CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase--ThumbnailData_CDefaultHashPo.c)
 */

void __fastcall MultitaskingViewAnimationCoordinatorBase::ThumbnailSourceSizeChanged(
        MultitaskingViewAnimationCoordinatorBase *this,
        void *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = 1;
  if ( *((_QWORD *)this + 10) )
  {
    v4 = 0;
    do
    {
      if ( v4 >= *((_DWORD *)this + 17) )
        break;
      if ( *(_DWORD *)(*((_QWORD *)this + 10) + 32LL * v4) == 1 )
        v3 = CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND______CDefaultKeyCompare_HWND______CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_bab26e1a69aeb2628e41eb0bfb77e34a___();
      ++v4;
    }
    while ( v3 );
  }
}
