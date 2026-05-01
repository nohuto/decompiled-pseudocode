/*
 * XREFs of ?ObservedKeyUp@JointResize@@UEAAJI@Z @ 0x1805295B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x180528BD0 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z.c)
 */

__int64 __fastcall JointResize::ObservedKeyUp(JointResize *this, int a2, __int64 a3, __int64 a4)
{
  if ( a2 == 17 && !*((_QWORD *)this + 8) )
    JointResize::CreateGhostDivider((__int64)this - 112, 1u, a3, a4);
  return 0LL;
}
