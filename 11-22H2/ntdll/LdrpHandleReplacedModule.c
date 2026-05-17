/*
 * XREFs of LdrpHandleReplacedModule @ 0x180067CEC
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180067CB0 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpHandleReplacedModule(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = a1;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 176);
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 32) & 0x80000) == 0 && *(_QWORD *)(v2 + 56) != a1 )
      {
        result = *(_QWORD *)(v2 + 56);
        *(_QWORD *)(v2 + 56) = a1;
      }
    }
  }
  return result;
}
