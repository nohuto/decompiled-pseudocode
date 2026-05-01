/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBUThumbnailData@MultitaskingViewAnimationCoordinatorBase@@PEAU34@@Z @ 0x1804CAA80
 * Callers:
 *     ?AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@_N@Z @ 0x1804C931C (-AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18012A9F8 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1804CADD8 (-_RehashTable@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinator.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1804CAF6C (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinato.c)
 */

__int64 __fastcall CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        _DWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi

  result = 0LL;
  v5 = a1 + 4;
  if ( !*((_QWORD *)a1 + 2) )
  {
    v9 = (unsigned int)a1[1];
    *v5 = 0LL;
    v11 = v9;
    v10 = v9 * (unsigned __int128)0x20uLL;
    if ( is_mul_ok(v11, 0x20uLL) )
      result = CTLocalAllocPolicy::Alloc(a1, *((__int64 *)&v10 + 1), v10, (void **)a1 + 2);
    else
      result = 2147942934LL;
  }
  if ( (int)result >= 0 )
  {
    v12 = (unsigned int)a1[1];
    if ( *a1 <= a1[1] >> 1 )
    {
      if ( a1[2] <= (unsigned int)v12 >> 2 )
      {
LABEL_10:
        v13 = CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                *v5,
                (unsigned int)a1[1],
                a3);
        v14 = v13;
        if ( *(_DWORD *)v13 == 1 )
          return 2147942487LL;
        if ( *(_DWORD *)v13 == 2 )
          --a1[2];
        *(_QWORD *)(v13 + 8) = *a3;
        *(_QWORD *)(v13 + 16) = *a4;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v13 + 16));
        *(_QWORD *)(v14 + 24) = a4[1];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v14 + 24));
        *(_DWORD *)v14 = 1;
        ++*a1;
        return 0LL;
      }
    }
    else
    {
      v12 = (unsigned int)(2 * v12 - 1);
    }
    result = CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
               a1,
               v12);
    if ( (int)result < 0 )
      return result;
    goto LABEL_10;
  }
  return result;
}
