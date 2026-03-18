/*
 * XREFs of MxInitializeFreeNodeDescriptors @ 0x140AF5C0C
 * Callers:
 *     MiFindLargestLoaderDescriptor @ 0x140AF5AE4 (MiFindLargestLoaderDescriptor.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x1403B7A10 (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x140AF66BC (MxPageAlwaysHot.c)
 *     MiInitializeBootMemoryDescriptor @ 0x140AF66DC (MiInitializeBootMemoryDescriptor.c)
 */

__int64 *__fastcall MxInitializeFreeNodeDescriptors(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  ULONG_PTR v3; // rbp
  ULONG_PTR i; // rbx
  ULONG_PTR v7; // rdi
  __int64 v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v3 = *(_QWORD *)(a1 + 40);
  for ( i = *(_QWORD *)(a1 + 32); v3; v3 -= v7 )
  {
    v7 = MiRestrictRangeToNode(i, v3);
    v8 = *((unsigned int *)MiSearchNumaNodeTable(i) + 2);
    result = MxBootFreeDescriptor;
    v9 = &MxBootFreeDescriptor[5 * v8];
    if ( v7 >= v9[1] || v7 >= *(_QWORD *)(a2 + 8 * v8) + 0x4000LL )
    {
      if ( (unsigned int)MxPageAlwaysHot(v7 + i - 1)
        || (v11 = v9[1]) == 0
        || !(unsigned int)MxPageAlwaysHot(*v9 - 1 + v11)
        || (result = (__int64 *)(v9[1] + *v9), (unsigned __int64)result < *(_QWORD *)(a2 + 8 * v8) + 0x4000LL) )
      {
        result = (__int64 *)MiInitializeBootMemoryDescriptor(&MxBootFreeDescriptor[5 * v8], a1, i, v7);
      }
    }
    i += v7;
  }
  if ( KeNumberNodes )
  {
    result = qword_140D69100;
    v10 = (unsigned __int16)KeNumberNodes;
    do
    {
      if ( *result )
        *(_DWORD *)(*result + 24) |= 0x40000000u;
      result += 5;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
