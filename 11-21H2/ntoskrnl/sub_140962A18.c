/*
 * XREFs of sub_140962A18 @ 0x140962A18
 * Callers:
 *     sub_140962AC8 @ 0x140962AC8 (sub_140962AC8.c)
 * Callees:
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     RtlFindRange @ 0x14083BD60 (RtlFindRange.c)
 *     sub_140962930 @ 0x140962930 (sub_140962930.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140962A18(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  void *v4; // rdi
  unsigned __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = qword_140C2ADB8;
  if ( !qword_140C2ADB8 )
  {
    v4 = sub_140962930();
    if ( _InterlockedCompareExchange64(&qword_140C2ADB8, (signed __int64)v4, 0LL) )
    {
      if ( v4 )
      {
        RtlFreeRangeList((__int64)v4);
        ExFreePoolWithTag(v4, 0x70727446u);
      }
    }
    v3 = qword_140C2ADB8;
    if ( !qword_140C2ADB8 )
      return 1LL;
  }
  LOBYTE(v2) = (int)RtlFindRange(v3, a1, a1, 1LL, 1uLL, 0, 0, 0LL, 0LL, &v6) < 0;
  return v2;
}
