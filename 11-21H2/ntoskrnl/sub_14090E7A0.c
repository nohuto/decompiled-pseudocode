/*
 * XREFs of sub_14090E7A0 @ 0x14090E7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140918C40 @ 0x140918C40 (sub_140918C40.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_14090E7A0(unsigned int a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0LL;
  memset(v5, 0, sizeof(v5));
  sub_140347770((__int64)&v4);
  if ( a1 <= 0x384 )
  {
    if ( SeSinglePrivilegeCheck(stru_140D3CA58, *((_BYTE *)KeGetCurrentThread() + 562)) )
    {
      sub_140AB4550(v5);
      v2 = sub_140918C40(a1);
      sub_140AB4580(v5);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  sub_14022EA30((__int64 *)&v4);
  return v2;
}
