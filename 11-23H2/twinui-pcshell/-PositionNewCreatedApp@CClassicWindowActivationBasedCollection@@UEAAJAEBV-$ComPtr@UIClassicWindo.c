/*
 * XREFs of ?PositionNewCreatedApp@CClassicWindowActivationBasedCollection@@UEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Z @ 0x1801ACF00
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowActivationBasedCollection::PositionNewCreatedApp(_QWORD *a1, __int64 *a2, void *a3)
{
  _QWORD *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx

  v4 = a1 + 1;
  v5 = 0;
  v6 = a1[2];
  if ( v6 != a1[4]
    || (v5 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
               (__int64)(a1 + 1),
               v6 + 1,
               a3),
        v5 >= 0) )
  {
    v7 = v4[1];
    v4[1] = v7 + 1;
    v8 = (__int64 *)(*v4 + 8 * v7);
    if ( v8 )
    {
      v9 = *a2;
      *v8 = *a2;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return (unsigned int)v5;
}
