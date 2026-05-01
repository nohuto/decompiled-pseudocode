/*
 * XREFs of ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x1800EC9EC
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x1800EBD40 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

struct CDelayIAMOperations::COperation *__fastcall CDelayIAMOperations::RemoveOperation(
        CDelayIAMOperations *this,
        int a2)
{
  struct CDelayIAMOperations::COperation *result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *i; // r9
  __int64 v7; // rdi

  result = 0LL;
  v4 = *((_QWORD *)this + 4);
  v5 = 0LL;
  if ( v4 )
  {
    for ( i = (__int64 *)*((_QWORD *)this + 3); ; ++i )
    {
      v7 = *i;
      if ( *(_DWORD *)(*i + 8) == a2 )
        break;
      if ( ++v5 >= v4 )
        return result;
    }
    if ( v5 != v4 - 1 )
    {
      memmove_0(i, i + 1, 8 * (v4 - v5) - 8);
      v4 = *((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 4) = v4 - 1;
    if ( *(_DWORD *)(v7 + 12) != 5 )
      --*((_DWORD *)this + 14);
    return (struct CDelayIAMOperations::COperation *)v7;
  }
  return result;
}
