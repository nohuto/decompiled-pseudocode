/*
 * XREFs of ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x1800563C4
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180056258 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180038D74 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003918C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180039260 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(CWindowList *this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8) )
  {
    v5 = (__int64 *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v6 = v5;
    if ( !v5 )
      break;
    if ( *((_BYTE *)v5 + 72) )
    {
      v7 = *v5;
      if ( a2 )
      {
        CDesktopManager::CreateDesktopWindowForLogonDesktop(v7);
        if ( !*((_QWORD *)this + 70) && CDesktopManager::IsLogonDesktop(*v6, v8, v9) )
        {
          *((_QWORD *)this + 70) = v6[3];
          v10 = v6[3];
          if ( v10 )
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        }
      }
      else
      {
        CDesktopManager::DestroyDesktopWindowReplacement(v7);
      }
    }
  }
}
