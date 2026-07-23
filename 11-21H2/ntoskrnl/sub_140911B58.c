/*
 * XREFs of sub_140911B58 @ 0x140911B58
 * Callers:
 *     sub_1406396B8 @ 0x1406396B8 (sub_1406396B8.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14053EBB0 @ 0x14053EBB0 (sub_14053EBB0.c)
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 */

__int64 sub_140911B58()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v6 = 0LL;
  sub_140347770((__int64)v6);
  if ( v2 )
  {
    v4 = (unsigned int)(v2 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
        sub_14053EE38();
    }
    else
    {
      sub_14053EBD8(v1, v0, v4, v3);
    }
  }
  else
  {
    sub_14053EBB0();
  }
  return sub_14022EA30(v6);
}
