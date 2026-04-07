/*
 * XREFs of ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18005D210
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18005D128 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18001795C (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180018770 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180038E08 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

void __fastcall CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(CWindowList *this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  unsigned __int64 v8; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8) )
  {
    v6 = (__int64 *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v7 = v6;
    if ( !v6 )
      break;
    if ( *((_BYTE *)v6 + 72) )
    {
      v8 = *v6;
      if ( a2 )
      {
        CDesktopManager::CreateDesktopWindowForLogonDesktop(v8);
        if ( !*((_QWORD *)this + 72) && CDesktopManager::IsLogonDesktop(*v7) )
        {
          *((_QWORD *)this + 72) = v7[3];
          v5 = v7[3];
          if ( v5 )
            _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        }
      }
      else
      {
        CDesktopManager::DestroyDesktopWindowReplacement(v8);
      }
    }
  }
}
