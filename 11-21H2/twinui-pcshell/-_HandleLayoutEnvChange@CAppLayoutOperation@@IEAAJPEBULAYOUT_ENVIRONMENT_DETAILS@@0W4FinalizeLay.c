/*
 * XREFs of ?_HandleLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@0W4FinalizeLayoutFlags@@@Z @ 0x1806155A8
 * Callers:
 *     ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180512840 (-ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18061563C (-_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

int __fastcall CAppLayoutOperation::_HandleLayoutEnvChange(CAppLayoutOperation *a1, _DWORD *a2, __int64 a3)
{
  char v3; // di
  int result; // eax

  v3 = 0;
  if ( *(_DWORD *)(a3 + 8) - *(_DWORD *)a3 == a2[2] - *a2
    && *(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 4) == a2[3] - a2[1]
    && *(_DWORD *)(a3 + 16) == a2[4] )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)a1 + 5) + 216LL))(*((_QWORD **)a1 + 5), a3);
  }
  else
  {
    v3 = 2;
    result = CAppLayoutOperation::_HandleNormalLayoutEnvChange(a1, (const struct LAYOUT_ENVIRONMENT_DETAILS *)a3);
    if ( result < 0 )
      return result;
  }
  return CAppLayoutOperation::_FinalizeLayout(a1, v3);
}
