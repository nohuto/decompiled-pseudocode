/*
 * XREFs of ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x180015EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

char __fastcall CStoryboard::IsEnabled(CStoryboard *this)
{
  char v1; // bl
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = 0;
  v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
  if ( !*(_BYTE *)(v2 + 680) )
  {
    v3 = *(_QWORD *)(v2 + 552);
    if ( (!v3 || *(_DWORD *)(v3 + 72) != 65 || !*(_BYTE *)(v3 + 68))
      && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
      && !CDesktopManager::CheckAnyPreference(0x10u) )
    {
      return 1;
    }
  }
  return v1;
}
