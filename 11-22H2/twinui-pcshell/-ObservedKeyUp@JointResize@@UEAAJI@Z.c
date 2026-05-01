/*
 * XREFs of ?ObservedKeyUp@JointResize@@UEAAJI@Z @ 0x1805E35B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x1805E29B0 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z.c)
 */

__int64 __fastcall JointResize::ObservedKeyUp(JointResize *this, int a2)
{
  if ( a2 == 17 && !*((_QWORD *)this + 8) )
    JointResize::CreateGhostDivider((__int64)this - 112, 1u);
  return 0LL;
}
