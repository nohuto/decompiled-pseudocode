/*
 * XREFs of ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x180135A04
 * Callers:
 *     ?_AddUpdateItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEB_KAEBV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x1800E8374 (-_AddUpdateItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WR.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800E85AC (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x180125330 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1802EB8AC (-_RehashTable@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  unsigned __int64 i; // r11
  int v7; // r10d
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int v10; // eax

  v5 = 314159269;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i);
    v5 ^= (v5 >> 2) + 2080 * v5 + v7;
  }
  v8 = (v5 & 0x7FFFFFFF) % a2;
  v9 = -1;
  while ( 1 )
  {
    v10 = *(_DWORD *)(a1 + 24 * v8);
    if ( v10 == 2 )
    {
      if ( v9 == -1 )
        v9 = v8;
      goto LABEL_14;
    }
    if ( !v10 )
      break;
    if ( v10 == 1 && *(_QWORD *)(a1 + 24 * v8 + 8) == *a3 )
      return a1 + 24 * v8;
LABEL_14:
    v8 = ((int)v8 + 1) % a2;
  }
  if ( v9 != -1 )
    v8 = v9;
  return a1 + 24 * v8;
}
