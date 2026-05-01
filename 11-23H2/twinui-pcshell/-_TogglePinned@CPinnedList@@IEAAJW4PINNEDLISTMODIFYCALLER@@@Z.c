/*
 * XREFs of ?_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18075ED00
 * Callers:
 *     ?Invoke@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z @ 0x180758160 (-Invoke@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z.c)
 *     ?InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z @ 0x180758210 (-InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::_TogglePinned(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 96) )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(v2 + 128))(a1 + 24, v3, 0LL, a2);
  else
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(v2 + 128))(a1 + 24, 0LL, v3, a2);
}
