/*
 * XREFs of sub_14090FC50 @ 0x14090FC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 sub_14090FC50()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v3[3]; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0LL;
  memset(v3, 0, sizeof(v3));
  sub_140347770((__int64)&v2);
  if ( SeSinglePrivilegeCheck(stru_140D3CA58, *((_BYTE *)KeGetCurrentThread() + 562)) )
  {
    sub_140AB4550(v3);
    v0 = sub_140918E48();
    sub_140AB4580(v3);
  }
  else
  {
    v0 = -1073741727;
  }
  sub_14022EA30((__int64 *)&v2);
  return v0;
}
