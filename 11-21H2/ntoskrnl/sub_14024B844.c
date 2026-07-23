/*
 * XREFs of sub_14024B844 @ 0x14024B844
 * Callers:
 *     sub_14024B820 @ 0x14024B820 (sub_14024B820.c)
 *     sub_1407F8C50 @ 0x1407F8C50 (sub_1407F8C50.c)
 * Callees:
 *     sub_14035FAE8 @ 0x14035FAE8 (sub_14035FAE8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14024B844(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 Pool2; // rax

  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), a2)) > *(_DWORD *)(a1 + 88) )
  {
    result = 3221225773LL;
LABEL_3:
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), -a2);
    return result;
  }
  Pool2 = ExAllocatePool2(*(_QWORD *)(a1 + 72), (int)a2, *(unsigned int *)(a1 + 68), a4);
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_3;
  }
  sub_14035FAE8(a1, Pool2, a2, 1LL, 0);
  return 0LL;
}
