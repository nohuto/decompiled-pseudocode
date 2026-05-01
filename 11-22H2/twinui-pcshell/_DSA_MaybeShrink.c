/*
 * XREFs of _DSA_MaybeShrink @ 0x18074A604
 * Callers:
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x180751F60 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     ??$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z @ 0x18074A59C (--$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z.c)
 */

__int64 __fastcall DSA_MaybeShrink(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebp
  unsigned int v4; // edi
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)a1 - 1) / *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 24)
     + *(_DWORD *)a1
     - 1
     - (unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)a1 - 1) % *(_DWORD *)(a1 + 24);
  if ( (v3 & 0x80000000) == 0 && v3 < *(_DWORD *)(a1 + 16) )
  {
    v4 = *(_DWORD *)(a1 + 20);
    v5 = *(void **)(a1 + 8);
    ProcessHeap = GetProcessHeap();
    result = CCv6s_HeapReallocArray<void>(ProcessHeap, (__int64)&v7, v5, v4, v3, &v7);
    if ( (int)result >= 0 )
    {
      result = v7;
      *(_QWORD *)(a1 + 8) = v7;
    }
    *(_DWORD *)(a1 + 16) = v3;
  }
  return result;
}
