/*
 * XREFs of ?_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x180618AB8
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x1806163A0 (-Commit@CAppLayout@@UEAAJXZ.c)
 *     ?RemoveItemsByType@CAppLayout@@UEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x180617AE0 (-RemoveItemsByType@CAppLayout@@UEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180541B9C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 */

_UNKNOWN **__fastcall CAppLayout::_RemoveItemsByType(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  int v4; // ebx
  unsigned __int64 v5; // rdi
  _QWORD *v6; // r14
  __int64 v7; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(_DWORD *)(a1 + 112) - 1;
  if ( v4 >= 0 )
  {
    v5 = v4;
    v6 = (_QWORD *)(a1 + 104);
    v7 = 8LL * v4;
    do
    {
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + *v6) + 24LL))(*(_QWORD *)(v7 + *v6));
      if ( ((unsigned int)result & a2) != 0 )
        result = (_UNKNOWN **)CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
                                v6,
                                v5);
      --v5;
      v7 -= 8LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return result;
}
