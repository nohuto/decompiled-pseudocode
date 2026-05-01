/*
 * XREFs of sub_18001F1F8 @ 0x18001F1F8
 * Callers:
 *     sub_1800060F8 @ 0x1800060F8 (sub_1800060F8.c)
 *     sub_180012B40 @ 0x180012B40 (sub_180012B40.c)
 *     sub_180013AD0 @ 0x180013AD0 (sub_180013AD0.c)
 *     sub_1800161C0 @ 0x1800161C0 (sub_1800161C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F1F8(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  result = RtlInitializeSRWLock(a1);
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
