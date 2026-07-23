/*
 * XREFs of sub_1407918AC @ 0x1407918AC
 * Callers:
 *     sub_140790EEC @ 0x140790EEC (sub_140790EEC.c)
 *     sub_140791804 @ 0x140791804 (sub_140791804.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407918AC(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rcx
  _QWORD *v4; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD *)(a1 + 1424);
  if ( !result )
  {
    result = ExAllocatePool2(64LL, 40LL, 1400337477LL);
    v3 = (void *)result;
    if ( result )
    {
      *(_QWORD *)(result + 16) = 0LL;
      v4 = (_QWORD *)(result + 24);
      v4[1] = v4;
      *v4 = v4;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1424), (signed __int64)v3, 0LL);
      if ( v5 )
      {
        ExFreePoolWithTag(v3, 0);
        return v5;
      }
      return (__int64)v3;
    }
  }
  return result;
}
