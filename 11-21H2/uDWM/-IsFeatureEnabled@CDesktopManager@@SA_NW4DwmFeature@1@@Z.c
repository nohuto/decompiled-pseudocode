/*
 * XREFs of ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180037EA0
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180037D70 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x180103AF8 (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180104AF4 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 * Callees:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180011E68 (-SLGetHelper@@YA_NPEBG@Z.c)
 */

char __fastcall CDesktopManager::IsFeatureEnabled(int a1)
{
  __int64 v1; // rbx
  char *v3; // rdi
  STRSAFE_PCNZWCH *v4; // rsi
  __int64 v5; // rbp

  v1 = a1;
  if ( !byte_180142CA0 )
  {
    v3 = byte_180142ED8;
    v4 = (STRSAFE_PCNZWCH *)off_18010FA98;
    v5 = 3LL;
    do
    {
      *v3++ = SLGetHelper(*v4++);
      --v5;
    }
    while ( v5 );
    byte_180142CA0 = 1;
  }
  if ( (unsigned int)v1 >= 3 )
    return SLGetHelper(off_18010FA98[v1]);
  else
    return byte_180142ED8[v1];
}
