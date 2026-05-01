/*
 * XREFs of ?RuntimeClassInitialize@CGITCallbackArray@@QEAAJAEBV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x180124964
 * Callers:
 *     ??$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Details@WRL@Microsoft@@YAJPEAPEAUIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x180123C00 (--$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV-$CCoSimpleArray@V-$ComPtr@UIGITCook.c)
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180124550 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180137CCC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPo.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITCallbackArray::RuntimeClassInitialize(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r14
  char *v11; // rdi
  unsigned __int64 v12; // rbp
  __int64 *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 *v16; // rdx
  __int64 v17; // rcx
  int v19; // eax
  unsigned int v20; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPMALLOC ppMalloc; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 0LL;
  v4 = a1 + 48;
  v5 = -2147024774;
  if ( v2 <= 0xFFFFFFFE )
  {
    v6 = *(_QWORD *)(a1 + 72);
    if ( v2 <= v6 )
      goto LABEL_14;
    v7 = 2 * v6;
    if ( !is_mul_ok(v6, 2uLL) )
      goto LABEL_27;
    v8 = v6;
    v9 = v6 + 4096;
    if ( v8 <= 0x1000 )
      v9 = v7;
    if ( v2 <= v9 )
    {
      v2 = v9;
      if ( v9 > 0xFFFFFFFE )
        v2 = 4294967294LL;
    }
    v10 = 8 * v2;
    if ( is_mul_ok(v2, 8uLL) )
    {
      v11 = (char *)CoTaskMemRealloc(*(LPVOID *)v4, 8 * v2);
      if ( v11 )
      {
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v12 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v11);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          if ( v12 > v10 )
            memset_0(&v11[v10], 0, v12 - v10);
        }
        *(_QWORD *)(v4 + 24) = v2;
        *(_QWORD *)v4 = v11;
LABEL_14:
        v13 = *(__int64 **)a2;
        v14 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
        while ( v13 != (__int64 *)v14 )
        {
          v15 = *(_QWORD *)(v4 + 8);
          if ( v15 == *(_QWORD *)(v4 + 24) )
          {
            v19 = CTSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>>::_EnsureCapacity(
                    v4,
                    v15 + 1);
            v20 = v19;
            if ( v19 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x63,
                (__int64)"shell\\lib\\gitreglist.cpp",
                (const char *)(unsigned int)v19);
              return v20;
            }
          }
          v16 = (__int64 *)(*(_QWORD *)v4 + 8 * (*(_QWORD *)(v4 + 8))++);
          if ( v16 )
          {
            v17 = *v13;
            *v16 = *v13;
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
          }
          ++v13;
        }
        return 0LL;
      }
      v5 = -2147024882;
    }
    else
    {
LABEL_27:
      v5 = -2147024362;
    }
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x5F, (__int64)"shell\\lib\\gitreglist.cpp", (const char *)v5);
  return v5;
}
