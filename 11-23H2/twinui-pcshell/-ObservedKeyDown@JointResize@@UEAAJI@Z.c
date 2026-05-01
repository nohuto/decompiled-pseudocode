/*
 * XREFs of ?ObservedKeyDown@JointResize@@UEAAJI@Z @ 0x1805E3580
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1802E6D38 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 */

__int64 __fastcall JointResize::ObservedKeyDown(JointResize *this, int a2)
{
  if ( a2 == 17 && *((_QWORD *)this + 8) )
    JointResize::DestroyGhostDivider((JointResize *)((char *)this - 112));
  return 0LL;
}
