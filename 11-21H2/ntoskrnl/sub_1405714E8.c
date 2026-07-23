/*
 * XREFs of sub_1405714E8 @ 0x1405714E8
 * Callers:
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405714E8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  void *v5; // rcx

  result = 3221226242LL;
  v4 = *(_QWORD *)(a1 + 360);
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 8) == a2 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x11u);
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x10u);
      v5 = *(void **)(a1 + 360);
      *(_QWORD *)(a1 + 360) = 0LL;
      ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
