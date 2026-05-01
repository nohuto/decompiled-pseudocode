/*
 * XREFs of ?OnRelease@ResourceSetCallback@@UEAAJPEAXU_RM_REVOKE_MESSAGE@@@Z @ 0x180083320
 * Callers:
 *     <none>
 * Callees:
 *     ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x1800833D8 (-SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REV.c)
 */

__int64 __fastcall ResourceSetCallback::OnRelease(__int64 a1, __int64 a2, int a3)
{
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  return ResourceSetCallback::SendData(a1, a2, 1LL, &v4);
}
