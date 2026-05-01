/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1802E92FC
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E2B40 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E2CF0 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x180125330 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18012549C (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015F1E8 (--4-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_DeleteApplicationData(CApplicationManager *this, const unsigned __int16 *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  const unsigned __int16 *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v4 = 0LL;
  v11 = 0LL;
  v5 = *((_QWORD *)this + 130);
  if ( v5
    && (v6 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
               v5,
               *((_DWORD *)this + 257),
               &v12),
        *(_DWORD *)v6 == 1) )
  {
    Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>::operator=(
      (__int64 *)&v11,
      (__int64 *)(v6 + 16));
    v4 = v11;
    if ( *(_QWORD *)(v11 + 16) != 1LL )
    {
      v7 = -2147024809;
      goto LABEL_10;
    }
    if ( *(_QWORD *)(v11 + 16) )
    {
      v11 = **(_QWORD **)(v11 + 8);
      v7 = CApplicationManager::_DeleteApplicationData(this, a2, &v11);
      goto LABEL_10;
    }
    v7 = -2147316575;
    v8 = 8508LL;
  }
  else
  {
    v7 = -2147319765;
    v8 = 8500LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v7);
LABEL_10:
  if ( v4 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
