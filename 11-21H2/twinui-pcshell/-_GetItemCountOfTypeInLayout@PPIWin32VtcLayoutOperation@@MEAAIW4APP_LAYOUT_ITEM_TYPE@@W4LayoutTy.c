/*
 * XREFs of ?_GetItemCountOfTypeInLayout@PPIWin32VtcLayoutOperation@@MEAAIW4APP_LAYOUT_ITEM_TYPE@@W4LayoutType@1@@Z @ 0x1805167F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_GetItemCountOfTypeInLayout(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 80LL))(*(_QWORD *)(a1 + 56));
  else
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64));
}
