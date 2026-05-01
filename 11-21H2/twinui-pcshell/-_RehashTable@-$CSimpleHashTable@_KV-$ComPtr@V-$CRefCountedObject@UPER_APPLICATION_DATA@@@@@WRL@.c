/*
 * XREFs of ?_RehashTable@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1802EB8AC
 * Callers:
 *     ?_AddUpdateItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEB_KAEBV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x1800E8374 (-_AddUpdateItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WR.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18012A9F8 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x180135A04 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
        __int64 a1,
        unsigned int a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // kr00_8
  int v6; // edi
  __int64 v7; // r12
  __int64 i; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v5 = a2;
  v4 = a2 * (unsigned __int128)0x18uLL;
  if ( is_mul_ok(v5, 0x18uLL) )
  {
    v6 = CTLocalAllocPolicy::Alloc((void *)a1, *((__int64 *)&v4 + 1), v4, (void **)&v12);
    if ( v6 >= 0 )
    {
      v7 = v12;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(v9 + 24 * i) == 1 )
        {
          v10 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                  v7,
                  a2,
                  (_QWORD *)(v9 + 8 + 24 * i));
          *(_OWORD *)v10 = *(_OWORD *)(v9 + 24 * i);
          *(_QWORD *)(v10 + 16) = *(_QWORD *)(v9 + 24 * i + 16);
        }
      }
      LocalFree(*(HLOCAL *)(a1 + 16));
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v7;
      *(_DWORD *)(a1 + 4) = a2;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return (unsigned int)v6;
}
