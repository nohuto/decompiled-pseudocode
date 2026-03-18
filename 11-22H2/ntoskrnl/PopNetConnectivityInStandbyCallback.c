/*
 * XREFs of PopNetConnectivityInStandbyCallback @ 0x140865CE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetConnectivityInStandbyCallback(int a1, int *a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( a3 == 4 && (unsigned int)*a2 <= 2 )
  {
    v4 = 0;
    PopAcquirePolicyLock(a1);
    dword_140C3D958 = *a2;
    PopReleasePolicyLock(v6, v5, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
