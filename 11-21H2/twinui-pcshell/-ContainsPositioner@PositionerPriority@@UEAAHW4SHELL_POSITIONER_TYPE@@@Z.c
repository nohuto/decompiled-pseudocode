/*
 * XREFs of ?ContainsPositioner@PositionerPriority@@UEAAHW4SHELL_POSITIONER_TYPE@@@Z @ 0x18012BD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PositionerPriority::ContainsPositioner(RTL_SRWLOCK *a1, int a2)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *v4; // rsi
  unsigned int v5; // ebx

  v2 = a2;
  v4 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  v5 = *((unsigned __int8 *)&a1[4].Ptr + v2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v5;
}
