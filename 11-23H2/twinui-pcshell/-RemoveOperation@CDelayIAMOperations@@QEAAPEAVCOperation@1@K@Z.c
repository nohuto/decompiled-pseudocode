/*
 * XREFs of ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x18004FEF0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18016F690 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

struct CDelayIAMOperations::COperation *__fastcall CDelayIAMOperations::RemoveOperation(
        CDelayIAMOperations *this,
        int a2)
{
  unsigned __int64 v2; // r8
  struct CDelayIAMOperations::COperation *result; // rax
  unsigned __int64 v5; // rcx
  __int64 *i; // r9
  __int64 v7; // rdi

  v2 = *((_QWORD *)this + 4);
  result = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    for ( i = (__int64 *)*((_QWORD *)this + 3); ; ++i )
    {
      v7 = *i;
      if ( *(_DWORD *)(*i + 8) == a2 )
        break;
      if ( ++v5 >= v2 )
        return result;
    }
    if ( v5 < v2 )
    {
      if ( v5 != v2 - 1 )
        memmove_0(i, i + 1, 8 * (v2 - v5) - 8);
      --*((_QWORD *)this + 4);
    }
    if ( *(_DWORD *)(v7 + 12) != 5 )
      --*((_DWORD *)this + 14);
    return (struct CDelayIAMOperations::COperation *)v7;
  }
  return result;
}
