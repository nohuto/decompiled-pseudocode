/*
 * XREFs of ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1804CAF6C
 * Callers:
 *     ?GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804CA3A0 (-GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThum.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBUThumbnailData@MultitaskingViewAnimationCoordinatorBase@@PEAU34@@Z @ 0x1804CAA80 (-_AddUpdateItem@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinat.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1804CADD8 (-_RehashTable@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned int v6; // eax
  unsigned __int64 i; // r11
  int v8; // r10d
  unsigned int v9; // edx
  int v10; // r8d
  __int64 v11; // rcx

  v6 = 314159269;
  for ( i = 0LL; i < 8; ++i )
  {
    v8 = *((unsigned __int8 *)a3 + i);
    v6 ^= (v6 >> 2) + 2080 * v6 + v8;
  }
  v9 = (v6 & 0x7FFFFFFF) % a2;
  v10 = -1;
  while ( 1 )
  {
    v11 = a1 + 32LL * v9;
    if ( *(_DWORD *)v11 == 2 )
    {
      if ( v10 == -1 )
        v10 = v9;
      goto LABEL_10;
    }
    if ( !*(_DWORD *)v11 )
      break;
    if ( *(_DWORD *)v11 == 1 && *(_QWORD *)(v11 + 8) == *a3 )
      return a1 + 32LL * v9;
LABEL_10:
    v9 = (v9 + 1) % a2;
  }
  if ( v10 != -1 )
    v9 = v10;
  return a1 + 32LL * v9;
}
