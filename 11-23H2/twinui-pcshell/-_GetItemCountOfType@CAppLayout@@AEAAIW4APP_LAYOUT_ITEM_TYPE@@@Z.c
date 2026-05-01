/*
 * XREFs of ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1807972EC
 * Callers:
 *     ?GetItemCountOfType@CAppLayout@@UEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1807953F0 (-GetItemCountOfType@CAppLayout@@UEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?ShouldLockAutoRotation@CAppLayout@@UEAAHXZ @ 0x180796510 (-ShouldLockAutoRotation@CAppLayout@@UEAAHXZ.c)
 *     ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x180796580 (-VerifyLayout@CAppLayout@@UEAAJXZ.c)
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x180796B6C (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayout::_GetItemCountOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned __int64 i; // rbp
  __int64 v7; // rcx
  bool v8; // zf
  unsigned int v9; // eax

  v2 = *(_QWORD *)(a1 + 112);
  v3 = 0;
  for ( i = 0LL; i < v2; v3 = v9 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * i);
    v8 = ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) & a2) == 0;
    v9 = v3 + 1;
    if ( v8 )
      v9 = v3;
    ++i;
  }
  return v3;
}
