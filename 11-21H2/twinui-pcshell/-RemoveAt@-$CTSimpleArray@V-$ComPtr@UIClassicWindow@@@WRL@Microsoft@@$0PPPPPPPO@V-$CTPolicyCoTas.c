/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180105040
 * Callers:
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180104034 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x180105030 (-RemoveApplication@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEA.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x1802F0AEC (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 * Callees:
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IClassicWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v4 = a1[1];
  if ( a2 >= v4 )
    return 2147650721LL;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8 * a2);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 8 * a2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v4 = a1[1];
  }
  if ( a2 != v4 - 1 )
  {
    memmove_0((void *)(*a1 + 8 * a2), (const void *)(*a1 + 8 * a2 + 8), 8 * (v4 - a2) - 8);
    v4 = a1[1];
  }
  a1[1] = v4 - 1;
  return 0LL;
}
