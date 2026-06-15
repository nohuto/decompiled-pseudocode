/*
 * XREFs of ?DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800656F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18006570C (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 */

__int64 __fastcall CPolicyConfig::DisconnectSessions(CPolicyConfig *this, const unsigned __int16 *a2)
{
  CPolicyConfig::DisconnectHelper(a2);
  return 0LL;
}
