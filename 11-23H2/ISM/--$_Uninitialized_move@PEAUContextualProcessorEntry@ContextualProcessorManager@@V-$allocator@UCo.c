/*
 * XREFs of ??$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x1801BDE2C
 * Callers:
 *     ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@QEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x18004A060 (--$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@-$vector@UContextu.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x1801BDDF4 (--$_Destroy_range@V-$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@.c)
 */

__int64 *__fastcall std::_Uninitialized_move<ContextualProcessorManager::ContextualProcessorEntry *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // r8
  signed __int64 v6; // r10
  char *v7; // r11
  char *v8; // rdx
  int v9; // ecx

  v4 = a1;
  if ( a1 != a2 )
  {
    v6 = (char *)a1 - (char *)a3;
    v7 = (char *)((char *)a3 - (char *)a1);
    do
    {
      *a3 = 0LL;
      if ( a3 != v4 )
      {
        *a3 = *v4;
        *v4 = 0LL;
      }
      v8 = (char *)v4 + (_QWORD)v7;
      a3 += 2;
      v9 = *(_DWORD *)((char *)v4 + (_QWORD)v7 + v6 + 8);
      v4 += 2;
      *((_DWORD *)v8 + 2) = v9;
    }
    while ( v4 != a2 );
  }
  std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(a3, a3);
  return a3;
}
