/*
 * XREFs of sub_18001B25C @ 0x18001B25C
 * Callers:
 *     sub_180002AD0 @ 0x180002AD0 (sub_180002AD0.c)
 *     sub_180002C70 @ 0x180002C70 (sub_180002C70.c)
 * Callees:
 *     sub_1800099BC @ 0x1800099BC (sub_1800099BC.c)
 */

__int64 __fastcall sub_18001B25C(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  sub_1800099BC(&v3);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v3) >= 0 )
    SetRestrictedErrorInfo(v3);
  return sub_1800099BC(&v3);
}
