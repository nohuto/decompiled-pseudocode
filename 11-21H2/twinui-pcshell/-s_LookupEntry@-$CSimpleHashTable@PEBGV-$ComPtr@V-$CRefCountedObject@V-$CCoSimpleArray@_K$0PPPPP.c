/*
 * XREFs of ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18012549C
 * Callers:
 *     ?_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800571E0 (-_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV-$ComPtr@V-$CRefCountedObject@UPER_APPLIC.c)
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800E81EC (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x1800E8470 (-_AddUpdateItem@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPP.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x180125330 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1802E92FC (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1802EB7E0 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 * Callees:
 *     ?CompareKey@CStringCompare@@SAHQEBG0@Z @ 0x180125618 (-CompareKey@CStringCompare@@SAHQEBG0@Z.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
        __int64 a1,
        unsigned int a2,
        const unsigned __int16 *const *a3)
{
  const unsigned __int16 *v3; // r11
  __int64 v4; // r9
  unsigned int v8; // r10d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // edx
  unsigned int v12; // edx
  int v13; // edi
  unsigned int v14; // ebx
  int v15; // eax

  v3 = *a3;
  v4 = -1LL;
  v8 = 314159269;
  do
    ++v4;
  while ( v3[v4] );
  v9 = 0LL;
  v10 = 2 * v4;
  if ( v10 )
  {
    do
    {
      v11 = *((unsigned __int8 *)v3 + v9++);
      v8 ^= (v8 >> 2) + 2080 * v8 + v11;
    }
    while ( v9 < v10 );
  }
  v12 = (v8 & 0x7FFFFFFF) % a2;
  v13 = -1;
  while ( 1 )
  {
    v14 = v12;
    v15 = *(_DWORD *)(a1 + 24LL * v12);
    if ( v15 == 2 )
    {
      if ( v13 == -1 )
        v13 = v12;
      goto LABEL_13;
    }
    if ( !v15 )
      break;
    if ( v15 == 1 && CStringCompare::CompareKey(*(const unsigned __int16 *const *)(a1 + 24LL * v12 + 8), *a3) )
      return a1 + 24LL * v14;
LABEL_13:
    v12 = (v14 + 1) % a2;
  }
  if ( v13 != -1 )
    v14 = v13;
  return a1 + 24LL * v14;
}
