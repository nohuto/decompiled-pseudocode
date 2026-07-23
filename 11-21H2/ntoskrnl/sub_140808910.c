/*
 * XREFs of sub_140808910 @ 0x140808910
 * Callers:
 *     <none>
 * Callees:
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 *     sub_1408095C4 @ 0x1408095C4 (sub_1408095C4.c)
 */

__int64 __fastcall sub_140808910(__int64 a1)
{
  __int64 v2; // rdx
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 72) )
  {
    memset(v4, 0, sizeof(v4));
    sub_140809310(a1, v4);
    v2 = *(unsigned int *)(a1 + 24);
    byte_140C22261 = 0;
    sub_1408095C4(0LL, v2);
  }
  return 0LL;
}
