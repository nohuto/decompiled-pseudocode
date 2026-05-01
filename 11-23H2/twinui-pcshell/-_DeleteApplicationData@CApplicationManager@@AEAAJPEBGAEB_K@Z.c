/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18001065C
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18000E214 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x180399440 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1803A2090 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?_EnsureSet@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJXZ @ 0x18001087C (-_EnsureSet@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Mi.c)
 *     ?_FreeBucket@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x1800108C0 (-_FreeBucket@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@M.c)
 *     ??$RemoveIfCallback@URemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXAEAURemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@Z @ 0x1800119F0 (--$RemoveIfCallback@URemoveIfFreeString@-1--DeleteItem@-$CStringHashTable@V-$ComPtr@V-$CRefCount.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180011A90 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x18004F578 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005C2B4 (--4-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_DeleteApplicationData(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        const unsigned __int64 *a3)
{
  char *v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _DWORD *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  _QWORD *v14; // r9
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-28h] BYREF
  const unsigned __int16 *v18; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v20; // [rsp+50h] [rbp+8h] BYREF
  const unsigned __int16 *v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v6 = (char *)this + 1000;
  v7 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_EnsureSet((char *)this + 1000);
  if ( (v7 & 0x80000000) != 0 )
    goto LABEL_25;
  v8 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
         *((_QWORD *)v6 + 2),
         *((unsigned int *)v6 + 1),
         a3);
  if ( !(unsigned int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
                        v6,
                        v8) )
  {
    v7 = -2147319765;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20B5,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v7,
      v17);
    return v7;
  }
  v9 = 0LL;
  v20 = 0LL;
  v10 = *((_QWORD *)this + 130);
  if ( v10 )
  {
    v11 = (_DWORD *)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                      v10,
                      *((unsigned int *)this + 257),
                      &v21);
    if ( *v11 == 1 )
    {
      Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>::operator=(
        &v20,
        v11 + 4);
      v9 = v20;
      v12 = 0LL;
      v13 = v20[2];
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = (_QWORD *)(v20[1] + 8 * v12);
          if ( *v14 == *a3 )
            break;
          if ( ++v12 >= v13 )
            goto LABEL_21;
        }
        if ( v12 < v13 )
        {
          if ( v12 != v13 - 1 )
            memmove_0(v14, v14 + 1, 8 * (v13 - v12) - 8);
          if ( --v9[2]
            || (LOBYTE(v17) = 0,
                v18 = a2,
                ___RemoveIfCallback_URemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z____CSimpleHashTable_PEBGV__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare__VCDefaultResizePolicy__VCDefaultRehashPolicy____QEAAXAEAURemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z__Z(
                  (char *)this + 1024,
                  &v17),
                (_BYTE)v17) )
          {
            v7 = 0;
            goto LABEL_13;
          }
          v16 = 8379LL;
          goto LABEL_17;
        }
        v7 = -2147316575;
      }
      else
      {
LABEL_21:
        v7 = -2147319765;
      }
      v16 = 8376LL;
      goto LABEL_18;
    }
  }
  v16 = 8375LL;
LABEL_17:
  v7 = -2147319765;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v7,
    v17);
LABEL_13:
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  return v7;
}
