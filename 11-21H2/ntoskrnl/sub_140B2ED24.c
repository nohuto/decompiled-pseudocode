/*
 * XREFs of sub_140B2ED24 @ 0x140B2ED24
 * Callers:
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 */

__int64 sub_140B2ED24()
{
  unsigned int v0; // r10d
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  int v4; // [rsp+2Ch] [rbp-Ch]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v4 = 0;
  v2 = qword_140D31700[0];
  v3 = *(_DWORD *)(qword_140D31700[0] + 16);
  while ( !(unsigned int)sub_140354698((__int64)&v2, &v5) )
    ;
  return v0;
}
