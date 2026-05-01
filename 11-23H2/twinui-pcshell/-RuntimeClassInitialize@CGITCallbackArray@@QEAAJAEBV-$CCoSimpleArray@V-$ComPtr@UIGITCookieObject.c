/*
 * XREFs of ?RuntimeClassInitialize@CGITCallbackArray@@QEAAJAEBV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x1800561F0
 * Callers:
 *     ??$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Details@WRL@Microsoft@@YAJPEAPEAUIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x1800560CC (--$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV-$CCoSimpleArray@V-$ComPtr@UIGITCook.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800EE794 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITCallbackArray::RuntimeClassInitialize(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return 0LL;
  v4 = (_QWORD *)(a1 + 48);
  v5 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
         a1 + 48,
         v3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *(__int64 **)a2;
    v8 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      if ( v7 == (__int64 *)v8 )
        return 0LL;
      v9 = v4[1];
      v10 = 0;
      if ( v9 != v4[3]
        || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                    v4,
                    v9 + 1),
            v9 = v4[1],
            v10 = v11,
            v11 >= 0) )
      {
        v12 = v9 + 1;
        v13 = *v4 - 8LL;
        v4[1] = v12;
        v14 = (__int64 *)(v13 + 8 * v12);
        if ( !v14 )
          goto LABEL_11;
        v15 = *v7;
        *v14 = *v7;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x63,
          (unsigned int)"shell\\lib\\gitreglist.cpp",
          (const char *)(unsigned int)v10,
          v17);
        return (unsigned int)v10;
      }
LABEL_11:
      ++v7;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (unsigned int)"shell\\lib\\gitreglist.cpp",
    (const char *)(unsigned int)v5,
    v17);
  return v6;
}
