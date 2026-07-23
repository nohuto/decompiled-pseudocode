/*
 * XREFs of sub_1409BE9D8 @ 0x1409BE9D8
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_1409BE97C @ 0x1409BE97C (sub_1409BE97C.c)
 *     sub_1409BEABC @ 0x1409BEABC (sub_1409BEABC.c)
 *     sub_1409BEB08 @ 0x1409BEB08 (sub_1409BEB08.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409BE9D8(PVOID **a1, int a2)
{
  PVOID *PoolWithTag; // rax
  PVOID *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x67744364u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0LL;
    v6 = sub_1409BEABC(PoolWithTag + 2);
    if ( v6 < 0
      || (v6 = sub_1409BEB08(v5, v5), v6 < 0)
      || (v6 = ExSubscribeWnfStateChange((int)v5 + 8, (int)&qword_140014890, 8, a2, (__int64)sub_1405EDDF0, (__int64)v5),
          v6 < 0) )
    {
      sub_1409BE97C(v5);
    }
    else
    {
      *a1 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
