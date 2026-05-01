/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBV?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@PEAV345@@Z @ 0x1804CAB7C
 * Callers:
 *     ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x1804C9760 (-BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18012A9F8 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1802366F8 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1804CAEA0 (-_RehashTable@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$C.c)
 */

__int64 __fastcall CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        void **a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  void **v5; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  __int64 v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rdi

  result = 0LL;
  v5 = a1 + 2;
  if ( !a1[2] )
  {
    v9 = *((unsigned int *)a1 + 1);
    *v5 = 0LL;
    v11 = v9;
    v10 = v9 * (unsigned __int128)0x18uLL;
    if ( is_mul_ok(v11, 0x18uLL) )
      result = CTLocalAllocPolicy::Alloc(a1, *((__int64 *)&v10 + 1), v10, v5);
    else
      result = 2147942934LL;
  }
  if ( (int)result >= 0 )
  {
    v12 = *((unsigned int *)a1 + 1);
    if ( *(_DWORD *)a1 <= *((_DWORD *)a1 + 1) >> 1 )
    {
      if ( *((_DWORD *)a1 + 2) <= (unsigned int)v12 >> 2 )
      {
LABEL_10:
        v13 = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                (__int64)*v5,
                *((_DWORD *)a1 + 1),
                a3);
        v14 = (_DWORD *)v13;
        if ( *(_DWORD *)v13 == 1 )
          return 2147942487LL;
        if ( *(_DWORD *)v13 == 2 )
          --*((_DWORD *)a1 + 2);
        *(_QWORD *)(v13 + 8) = *a3;
        *(_QWORD *)(v13 + 16) = *a4;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v13 + 16));
        *v14 = 1;
        ++*(_DWORD *)a1;
        return 0LL;
      }
    }
    else
    {
      v12 = (unsigned int)(2 * v12 - 1);
    }
    result = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
               a1,
               v12);
    if ( (int)result < 0 )
      return result;
    goto LABEL_10;
  }
  return result;
}
