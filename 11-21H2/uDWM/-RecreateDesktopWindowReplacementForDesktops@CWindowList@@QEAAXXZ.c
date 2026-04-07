/*
 * XREFs of ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180017900
 * Callers:
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x180013C3C (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016690 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180016D44 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18001795C (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180018770 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 */

void __fastcall CWindowList::RecreateDesktopWindowReplacementForDesktops(CWindowList *this)
{
  struct _RTL_GENERIC_TABLE *v1; // rdi
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rbx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  v1 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    v2 = (unsigned __int64 *)RtlEnumerateGenericTableWithoutSplaying(v1, &RestartKey);
    v3 = v2;
    if ( !v2 )
      break;
    if ( *((_BYTE *)v2 + 72) )
    {
      CDesktopManager::DestroyDesktopWindowReplacement(*v2);
      CDesktopManager::CreateDesktopWindowForLogonDesktop(*v3);
    }
  }
}
