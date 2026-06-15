/*
 * XREFs of ?GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z @ 0x18001CB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetUserSid(
        CWindowsPolicyManager *this,
        unsigned int a2,
        unsigned __int16 **a3)
{
  return TsSessionGetUserSid(a2, a3);
}
