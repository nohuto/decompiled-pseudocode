/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x1800E8470
 * Callers:
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800E81EC (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18012549C (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18012A9F8 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1802EB7E0 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 */

int __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        void **a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int result; // eax
  void **v5; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  __int64 v12; // rax
  _DWORD *v13; // rdi

  result = 0;
  v5 = a1 + 2;
  if ( !a1[2] )
  {
    v9 = *((unsigned int *)a1 + 1);
    *v5 = 0LL;
    v11 = v9;
    v10 = v9 * (unsigned __int128)0x18uLL;
    if ( is_mul_ok(v11, 0x18uLL) )
      result = CTLocalAllocPolicy::Alloc(a1, DWORD2(v10), v10, v5);
    else
      result = -2147024362;
  }
  if ( result >= 0 )
  {
    if ( *(_DWORD *)a1 <= *((_DWORD *)a1 + 1) >> 1 && *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 1) >> 2
      || (result = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(a1),
          result >= 0) )
    {
      v12 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
              *v5,
              *((unsigned int *)a1 + 1),
              a3);
      v13 = (_DWORD *)v12;
      if ( *(_DWORD *)v12 == 1 )
      {
        return -2147024809;
      }
      else
      {
        if ( *(_DWORD *)v12 == 2 )
          --*((_DWORD *)a1 + 2);
        *(_QWORD *)(v12 + 8) = *a3;
        *(_QWORD *)(v12 + 16) = *a4;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v12 + 16));
        *v13 = 1;
        ++*(_DWORD *)a1;
        return 0;
      }
    }
  }
  return result;
}
