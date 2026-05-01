/*
 * XREFs of ?SetSearchVisibility@MiniSearchExperienceManager@@UEAAX_N@Z @ 0x180173AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MiniSearchExperienceManager::SetSearchVisibility(MiniSearchExperienceManager *this, char a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 5) == 0LL;
  *((_BYTE *)this + 149) = a2;
  if ( !v2 )
    MiniSearchExperienceManager::Hide(this);
}
