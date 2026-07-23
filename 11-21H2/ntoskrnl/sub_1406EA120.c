/*
 * XREFs of sub_1406EA120 @ 0x1406EA120
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14041D820 @ 0x14041D820 (sub_14041D820.c)
 *     sub_1406EA1C8 @ 0x1406EA1C8 (sub_1406EA1C8.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 *     sub_14085A568 @ 0x14085A568 (sub_14085A568.c)
 *     sub_140917F4C @ 0x140917F4C (sub_140917F4C.c)
 */

__int64 sub_1406EA120()
{
  unsigned __int16 v0; // r9
  __int64 v1; // rdx
  unsigned int v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  sub_140347770((__int64)v4);
  LOBYTE(v1) = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (_BYTE)v1 )
  {
    if ( v0 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(stru_140D3CA58, v1) )
        sub_140917F4C();
    }
    else
    {
      sub_14041D820(v0, v1);
    }
  }
  else if ( (unsigned __int16)(v0 - 4096) > 0x3E7u )
  {
    if ( v0 == 2 )
    {
      sub_14085A568();
    }
    else if ( v0 < 2u )
    {
      sub_14082830C(v0);
    }
  }
  else
  {
    sub_1406EA1C8(v0);
  }
  sub_14022EA30(v4);
  return v2;
}
