/*
 * XREFs of ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180127170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PositionerPriority::GetCurrentPositioner(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // ebx

  v2 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  v3 = 10LL;
  while ( !*((_BYTE *)&a1[3].Ptr + v3 + 7) )
  {
    if ( !--v3 )
    {
      v4 = 0;
      goto LABEL_6;
    }
  }
  v4 = v3 - 1;
LABEL_6:
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v4;
}
