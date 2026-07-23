/*
 * XREFs of sub_14023CBE0 @ 0x14023CBE0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023CBE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v4; // rcx

  ++*(_DWORD *)(a1 + 76);
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 16) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  *(_WORD *)(a3 + 24) = 1;
  *(_BYTE *)(a3 + 26) = 6;
  *(_QWORD *)(a3 + 40) = a3 + 32;
  *(_QWORD *)(a3 + 32) = a3 + 32;
  result = *(_QWORD *)(a1 + 40);
  if ( result )
  {
    v4 = *(_QWORD **)(result + 8);
    if ( *v4 != result )
      __fastfail(3u);
    *(_QWORD *)a3 = result;
    *(_QWORD *)(a3 + 8) = v4;
    *v4 = a3;
    *(_QWORD *)(result + 8) = a3;
  }
  else
  {
    *(_QWORD *)(a3 + 8) = a3;
    *(_QWORD *)a3 = a3;
    *(_QWORD *)(a1 + 40) = a3;
  }
  return result;
}
