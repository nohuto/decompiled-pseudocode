/*
 * XREFs of ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x18017B930
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180139CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewCreatedApp(
        _QWORD *a1,
        __int64 *a2,
        IMalloc *a3)
{
  _QWORD *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rcx

  v4 = a1 + 1;
  v5 = 0;
  v6 = a1[2];
  if ( v6 != a1[4]
    || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::_EnsureCapacity(
               (__int64)(a1 + 1),
               v6 + 1,
               a3),
        v5 >= 0) )
  {
    v7 = (__int64 *)(*v4 + 8 * v4[1]++);
    if ( v7 )
    {
      v8 = *a2;
      *v7 = *a2;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return (unsigned int)v5;
}
