/*
 * XREFs of ?Show@CStartExperienceManager@@UEAAJEEI@Z @ 0x18000B4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::Show(CStartExperienceManager *this, char a2, char a3, int a4)
{
  __int64 v5; // rdx

  *((_BYTE *)this + 651) = 0;
  *((_DWORD *)this + 150) = a4;
  v5 = 2LL;
  if ( a3 )
  {
    if ( !a2 )
      v5 = 6LL;
  }
  else
  {
    v5 = 3LL;
  }
  *((_BYTE *)this + 649) = 1;
  return CSingleViewShellExperience::Show((char *)this + 280, v5);
}
