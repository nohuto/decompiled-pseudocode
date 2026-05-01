/*
 * XREFs of ??1CDelayIAMOperations@@QEAA@XZ @ 0x180152DC4
 * Callers:
 *     ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x180152CD0 (-v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x180152E4C (-RemoveAll@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-$CSim.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDelayIAMOperations::~CDelayIAMOperations(CDelayIAMOperations *this)
{
  unsigned __int64 v1; // rbp
  _QWORD *v2; // rsi
  unsigned __int64 i; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  v1 = *((_QWORD *)this + 4);
  v2 = (_QWORD *)((char *)this + 24);
  for ( i = 0LL; i < v1; ++i )
  {
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(*v2 + 8 * i);
    if ( v5 )
      (**v5)(v5, 1LL);
  }
  CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::RemoveAll(v2);
  CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::RemoveAll(v2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 1);
}
