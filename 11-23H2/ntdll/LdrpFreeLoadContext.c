/*
 * XREFs of LdrpFreeLoadContext @ 0x180067BF0
 * Callers:
 *     LdrpFreeReplacedModule @ 0x180067B24 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180067B5C (LdrpFreeLoadContextOfNode.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D83F8 (LdrpCleanupEnclaveLoadState.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x180067B24 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180067C90 (LdrpHandlePendingModuleReplaced.c)
 */

__int64 __fastcall LdrpFreeLoadContext(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced(a1);
  if ( *(_QWORD *)(a1 + 88) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 104); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * i);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 176);
        if ( v5 )
        {
          if ( (*(_DWORD *)(v5 + 32) & 0x80000) == 0 && *(_QWORD *)(v5 + 56) != v4 )
          {
            *(_QWORD *)(v5 + 56) = v4;
            LdrpFreeReplacedModule(v4);
          }
        }
      }
    }
    result = RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 88));
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
    return RtlFreeHeap(LdrpHeap, 0, a1);
  return result;
}
