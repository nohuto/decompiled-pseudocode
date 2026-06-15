/*
 * XREFs of ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x1800162F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamClassPolicyManager::UpdateDuckingGainForId(
        CStreamClassPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        float a4,
        bool *a5)
{
  return TsSessionUpdateDuckingGainForId(a2, a3, a4, a5);
}
