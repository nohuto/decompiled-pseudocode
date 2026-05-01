/*
 * XREFs of ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18001199C
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18004EACC (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::_ResourceSetInfo::SetAmount(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( (unsigned int)(a2 + 1) > 3 )
    return 2147942487LL;
  v3 = 3LL * a2;
  result = 0LL;
  *(_DWORD *)(a1 + 8 * v3 + 80) = a2;
  *(_QWORD *)(a1 + 8 * v3 + 88) = a3;
  return result;
}
