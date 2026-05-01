/*
 * XREFs of ?RemoveAndReleaseAll@?$CSimplePointerArray@UIUnknown@@V?$CTContainer_PolicyRelease@UIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x18039EEA0
 * Callers:
 *     ?Clear@CEnumerableObjectCollection@@UEAAJXZ @ 0x1803981E0 (-Clear@CEnumerableObjectCollection@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *>>::RemoveAndReleaseAll(
        _QWORD *a1)
{
  unsigned __int64 i; // rbx
  __int64 v3; // rcx

  for ( i = 0LL; i < a1[1]; ++i )
  {
    v3 = *(_QWORD *)(*a1 + 8 * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::RemoveAll((__int64)a1);
}
