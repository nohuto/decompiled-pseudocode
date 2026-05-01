/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x180125330
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801232BC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1802E2C10 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1802E92FC (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureSet@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJXZ @ 0x1800E8428 (-_EnsureSet@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Mi.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18012549C (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ??$RemoveIfCallback@URemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXAEAURemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@Z @ 0x180125578 (--$RemoveIfCallback@URemoveIfFreeString@-1--DeleteItem@-$CStringHashTable@V-$ComPtr@V-$CRefCount.c)
 *     ?_FreeBucket@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x1801256B0 (-_FreeBucket@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@M.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x180135A04 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015F1E8 (--4-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // r9
  __int64 v16; // rdx
  _BYTE v17[8]; // [rsp+20h] [rbp-28h] BYREF
  const unsigned __int16 *v18; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v20; // [rsp+50h] [rbp+8h] BYREF
  const unsigned __int16 *v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v6 = (char *)this + 1000;
  v7 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_EnsureSet((__int64)this + 1000);
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
      (void *)0x2125,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v7);
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
          {
            memmove_0(v14, v14 + 1, 8 * (v13 - v12) - 8);
            v13 = v9[2];
          }
          v9[2] = v13 - 1;
          if ( v13 != 1
            || (v17[0] = 0,
                v18 = a2,
                ___RemoveIfCallback_URemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z____CSimpleHashTable_PEBGV__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare__VCDefaultResizePolicy__VCDefaultRehashPolicy____QEAAXAEAURemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z__Z(
                  (char *)this + 1024,
                  v17),
                v17[0]) )
          {
            v7 = 0;
            goto LABEL_13;
          }
          v16 = 8491LL;
          goto LABEL_17;
        }
        v7 = -2147316575;
      }
      else
      {
LABEL_21:
        v7 = -2147319765;
      }
      v16 = 8488LL;
      goto LABEL_18;
    }
  }
  v16 = 8487LL;
LABEL_17:
  v7 = -2147319765;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v7);
LABEL_13:
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  return v7;
}
