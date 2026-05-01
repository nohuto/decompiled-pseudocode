/*
 * XREFs of ??1?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAA@XZ @ 0x1804C8F30
 * Callers:
 *     _MultitaskingViewAnimationCoordinatorBase::BeginAnimation_::_1_::dtor$4 @ 0x1804C9F9A (_MultitaskingViewAnimationCoordinatorBase--BeginAnimation_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

HLOCAL __fastcall CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::~CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>(
        __int64 a1)
{
  _DWORD *v2; // rcx
  __int64 i; // rdi
  HLOCAL result; // rax

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      if ( v2[6 * i] == 1 )
      {
        v2[6 * i] = 2;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v2[6 * i + 4]);
        ++*(_DWORD *)(a1 + 8);
        --*(_DWORD *)a1;
        v2 = *(_DWORD **)(a1 + 16);
      }
    }
    result = LocalFree(v2);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
