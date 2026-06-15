/*
 * XREFs of ?EnforceEndpointExclusivity@CConstraintModelResourceManager@@UEAAJPEBG0KKW4AUDIO_DIRECTION@@@Z @ 0x1800FFB30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x18010059C (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 */

__int64 __fastcall CConstraintModelResourceManager::EnforceEndpointExclusivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  return CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(a1, a2, a3, a4, a5, a6, 0);
}
