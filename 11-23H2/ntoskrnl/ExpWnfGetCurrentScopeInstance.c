/*
 * XREFs of ExpWnfGetCurrentScopeInstance @ 0x140714910
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x140713578 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x1402978B0 (PsGetProcessSessionId.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714C40 (ExpWnfQueryCurrentUserSID.c)
 */

__int64 __fastcall ExpWnfGetCurrentScopeInstance(__int64 Process, int a2, int a3, __int64 *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax

  v6 = 0;
  if ( !a3 )
    goto LABEL_13;
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
      return (unsigned int)ExpWnfQueryCurrentUserSID(Process, a2, (_DWORD)a4, (_DWORD)a5, (__int64)a6);
    if ( v8 == 1 )
    {
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        CurrentThread = KeGetCurrentThread();
        *a6 = 0;
        Process = (__int64)CurrentThread->ApcState.Process;
      }
      else
      {
        *a6 = 1;
      }
      *a4 = Process;
      *a5 = 8;
      return v6;
    }
LABEL_13:
    *a6 = 1;
    *a5 = 0;
    return v6;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v11 = KeGetCurrentThread();
    *a6 = 0;
    Process = (__int64)v11->ApcState.Process;
  }
  else
  {
    *a6 = 1;
  }
  *(_DWORD *)a4 = PsGetProcessSessionId(Process);
  *a5 = 4;
  return v6;
}
