/*
 * XREFs of sub_140213318 @ 0x140213318
 * Callers:
 *     sub_1402129C0 @ 0x1402129C0 (sub_1402129C0.c)
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_14063A8C0 @ 0x14063A8C0 (sub_14063A8C0.c)
 *     sub_140B0ABEC @ 0x140B0ABEC (sub_140B0ABEC.c)
 * Callees:
 *     sub_14021491C @ 0x14021491C (sub_14021491C.c)
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 *     sub_1403713DC @ 0x1403713DC (sub_1403713DC.c)
 */

__int64 sub_140213318()
{
  __int64 v0; // rax
  int v1; // r8d
  unsigned __int64 v2; // r10
  unsigned int v4; // [rsp+20h] [rbp-18h]

  v0 = sub_14021491C(512LL, 0x80000000LL, 0LL);
  if ( v2 >= *(unsigned int *)(v0 + 528) )
    return sub_1403713DC(v0, v2);
  else
    return sub_14034FED0(v0 + 320 + (*(unsigned int *)(v0 + 336) < v2 ? 0xC0 : 0), v2, v2, v2, v1 & v4);
}
