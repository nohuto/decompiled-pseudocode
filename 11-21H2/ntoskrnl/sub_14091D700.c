/*
 * XREFs of sub_14091D700 @ 0x14091D700
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14022EA80 @ 0x14022EA80 (sub_14022EA80.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 sub_14091D700()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0LL;
  memset(v7, 0, sizeof(v7));
  sub_140347770((__int64)&v6);
  if ( (unsigned __int8)sub_140AB46D0(v1, v0, v2) )
  {
    sub_140AB4550(v7);
    sub_14022EA80();
    sub_140AB4580(v7);
    sub_140AB42A0(v4, v3);
  }
  _InterlockedExchange(&dword_140C48DE0, 0);
  return sub_14022EA30((__int64 *)&v6);
}
