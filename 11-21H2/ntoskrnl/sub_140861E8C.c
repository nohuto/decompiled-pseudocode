/*
 * XREFs of sub_140861E8C @ 0x140861E8C
 * Callers:
 *     sub_140861E5C @ 0x140861E5C (sub_140861E5C.c)
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140690978 @ 0x140690978 (sub_140690978.c)
 *     sub_140690C50 @ 0x140690C50 (sub_140690C50.c)
 *     sub_1407FCA44 @ 0x1407FCA44 (sub_1407FCA44.c)
 */

__int64 sub_140861E8C()
{
  __int64 v0; // r8
  ULONG_PTR v1; // rbx
  unsigned int v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  *(_OWORD *)v4 = 0LL;
  sub_140347770((__int64)v4);
  if ( (int)sub_140690C50(v0, &BugCheckParameter2) >= 0 )
  {
    v1 = BugCheckParameter2;
    if ( (int)sub_140690978(BugCheckParameter2) >= 0 )
    {
      sub_1407FCA44(v1);
      *(_DWORD *)(v1 + 8) |= 1u;
      ExReleasePushLockEx(v1, 0LL);
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
  }
  sub_14022EA30(v4);
  return v2;
}
