/*
 * XREFs of NtUserSwapMouseButton @ 0x1C01DEDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01BF3D8 (-_SwapMouseButton@@YAHH@Z.c)
 */

__int64 __fastcall NtUserSwapMouseButton(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = (int)_SwapMouseButton(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
