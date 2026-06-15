/*
 * XREFs of ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180022680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetdBFromUserPreference@CDuckingManager@@CAMW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@@Z @ 0x1800216D8 (-GetdBFromUserPreference@CDuckingManager@@CAMW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@@Z.c)
 *     ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x1800386EC (-TsSessionIdGetUserDuckingPreference@@YAKK@Z.c)
 */

void __fastcall CDuckingManager::OnStreamCreatedInTsSession(CDuckingManager *this, unsigned int a2)
{
  int UserDuckingPreference; // eax

  UserDuckingPreference = TsSessionIdGetUserDuckingPreference(a2);
  *((_DWORD *)this + 102) = UserDuckingPreference;
  *(float *)(*((_QWORD *)this + 54) + 8LL) = CDuckingManager::GetdBFromUserPreference(UserDuckingPreference);
  CWindowsPolicyManager::SetDuckingGainForId(g_PolicyManager, a2, L"Comm", *(float *)(*((_QWORD *)this + 54) + 8LL));
}
