/*
 * XREFs of ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x1800381FC
 * Callers:
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180015344 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800365B4 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18010A40C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 * Callees:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18005ADCC (-SLGetHelper@@YA_NPEBG@Z.c)
 */

char __fastcall CDesktopManager::IsFeatureEnabled(int a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // rdi
  const unsigned __int16 **v4; // rsi
  __int64 v5; // rbp

  v1 = a1;
  if ( !byte_180148420 )
  {
    v3 = byte_1801486E8;
    v4 = (const unsigned __int16 **)off_180115FA8;
    v5 = 3LL;
    do
    {
      *v3++ = SLGetHelper(*v4++);
      --v5;
    }
    while ( v5 );
    byte_180148420 = 1;
  }
  if ( (unsigned int)v1 >= 3 )
    return SLGetHelper(off_180115FA8[v1]);
  else
    return byte_1801486E8[v1];
}
